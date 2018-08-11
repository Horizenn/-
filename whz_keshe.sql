/*
Navicat MySQL Data Transfer

Source Server         : localhost_3306
Source Server Version : 50717
Source Host           : localhost:3306
Source Database       : whz_keshe

Target Server Type    : MYSQL
Target Server Version : 50717
File Encoding         : 65001

Date: 2018-01-17 08:53:14
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for customer
-- ----------------------------
DROP TABLE IF EXISTS `customer`;
CREATE TABLE `customer` (
  `Cno` int(11) NOT NULL AUTO_INCREMENT,
  `Cname` varchar(10) NOT NULL,
  `Csex` enum('男','女') DEFAULT NULL,
  `Cnum` varchar(20) NOT NULL,
  `Cadd` varchar(50) NOT NULL,
  `Cemail` varchar(20) DEFAULT NULL,
  `Ctel` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`Cno`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of customer
-- ----------------------------
INSERT INTO `customer` VALUES ('1', '吴皓泽', '男', '44528119961209333X', '广东工业大学', '994826288@qq.com', '15626159369');
INSERT INTO `customer` VALUES ('2', '吴胜', '男', '5645654', '广东省朝阳区', '56546', '45654654');
INSERT INTO `customer` VALUES ('3', '吴泽楠', '女', '4654654564', '广东汕头市', '545354', '43535435');

-- ----------------------------
-- Table structure for route
-- ----------------------------
DROP TABLE IF EXISTS `route`;
CREATE TABLE `route` (
  `Rno` int(11) NOT NULL AUTO_INCREMENT,
  `Rcompany` varchar(20) DEFAULT NULL,
  `Raircraft` varchar(20) DEFAULT NULL,
  `Rscity` varchar(20) NOT NULL,
  `Racity` varchar(20) NOT NULL,
  `Rdata` date DEFAULT NULL,
  `Rstime` time DEFAULT NULL,
  `Ratime` time DEFAULT NULL,
  `Rjprice` int(11) NOT NULL,
  `Rsprice` int(11) NOT NULL,
  `Rtprice` int(11) NOT NULL,
  `Rjseat` int(11) NOT NULL,
  `Rsseat` int(11) NOT NULL,
  `Rtseat` int(11) NOT NULL,
  PRIMARY KEY (`Rno`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of route
-- ----------------------------
INSERT INTO `route` VALUES ('1', '广东航空', '空客330', '广州', '郑州', '2018-01-08', '08:00:00', '12:25:00', '700', '1500', '2100', '69', '20', '5');
INSERT INTO `route` VALUES ('2', '中国航空', '波音777', '北京', '上海', '2018-01-08', '14:00:00', '16:25:00', '500', '1000', '1500', '52', '32', '7');
INSERT INTO `route` VALUES ('3', '上海航空', '空客330', '上海', '北京', '2018-01-12', '14:25:00', '16:45:00', '600', '1200', '2200', '65', '32', '0');

-- ----------------------------
-- Table structure for torder
-- ----------------------------
DROP TABLE IF EXISTS `torder`;
CREATE TABLE `torder` (
  `Tno` int(11) NOT NULL AUTO_INCREMENT,
  `Cno` int(11) NOT NULL,
  `Rno` int(11) NOT NULL,
  `Ttime` datetime DEFAULT NULL,
  `Tprice` int(11) NOT NULL,
  `Tseat` enum('经济舱','商务舱','头等舱') NOT NULL,
  PRIMARY KEY (`Tno`,`Cno`,`Rno`),
  KEY `Cno` (`Cno`),
  KEY `Rno` (`Rno`),
  CONSTRAINT `torder_ibfk_1` FOREIGN KEY (`Cno`) REFERENCES `customer` (`Cno`) ON DELETE NO ACTION ON UPDATE CASCADE,
  CONSTRAINT `torder_ibfk_2` FOREIGN KEY (`Rno`) REFERENCES `route` (`Rno`) ON DELETE NO ACTION ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of torder
-- ----------------------------
INSERT INTO `torder` VALUES ('1', '1', '1', '2018-01-08 13:27:38', '500', '经济舱');
INSERT INTO `torder` VALUES ('2', '1', '2', '2018-01-11 19:49:00', '500', '商务舱');
INSERT INTO `torder` VALUES ('3', '1', '2', '2018-01-11 19:49:00', '500', '经济舱');
INSERT INTO `torder` VALUES ('4', '2', '1', '2018-01-11 19:49:00', '500', '商务舱');
INSERT INTO `torder` VALUES ('5', '1', '3', '2018-01-11 20:08:07', '500', '头等舱');
INSERT INTO `torder` VALUES ('6', '3', '1', '2018-01-13 17:01:36', '700', '经济舱');
INSERT INTO `torder` VALUES ('7', '1', '1', '2018-01-16 14:24:17', '700', '经济舱');

-- ----------------------------
-- View structure for theorder
-- ----------------------------
DROP VIEW IF EXISTS `theorder`;
CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `theorder` AS select `torder`.`Tno` AS `Tno`,`torder`.`Ttime` AS `Ttime`,`customer`.`Cname` AS `Cname`,`customer`.`Cnum` AS `Cnum`,`customer`.`Cadd` AS `Cadd`,`customer`.`Ctel` AS `Ctel`,`route`.`Rcompany` AS `Rcompany`,`route`.`Raircraft` AS `Raircraft`,`route`.`Rscity` AS `Rscity`,`route`.`Racity` AS `Racity`,`route`.`Rdata` AS `Rdata`,`route`.`Rstime` AS `Rstime`,`route`.`Ratime` AS `Ratime`,`torder`.`Tprice` AS `Tprice`,`torder`.`Tseat` AS `Tseat` from ((`customer` join `route`) join `torder`) where ((`torder`.`Cno` = `customer`.`Cno`) and (`torder`.`Rno` = `route`.`Rno`)) WITH CASCADED CHECK OPTION ;
DROP TRIGGER IF EXISTS `R2`;
DELIMITER ;;
CREATE TRIGGER `R2` BEFORE INSERT ON `route` FOR EACH ROW begin
if (new.Rjprice <= 0) or (new.Rsprice <= 0) or (new.Rtprice <= 0) or (new.Rjseat < 0) or (new.Rsseat < 0) or (new.Rtseat < 0)
then delete from route where new.Rjprice <= 0 or new.Rsprice <= 0 or new.Rtprice <= 0 or new.Rjseat < 0 or new.Rsseat < 0 or new.Rtseat < 0;
end if;
end
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `R1`;
DELIMITER ;;
CREATE TRIGGER `R1` BEFORE UPDATE ON `route` FOR EACH ROW begin
if (new.Rjprice <= 0) or (new.Rsprice <= 0) or (new.Rtprice <= 0) or (new.Rjseat < 0) or (new.Rsseat < 0) or (new.Rtseat < 0)
then delete from route where new.Rjprice <= 0 or new.Rsprice <= 0 or new.Rtprice <= 0 or new.Rjseat < 0 or new.Rsseat < 0 or new.Rtseat < 0;
end if;
end
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `R4`;
DELIMITER ;;
CREATE TRIGGER `R4` BEFORE INSERT ON `torder` FOR EACH ROW begin
if new.Tprice <=0
then delete from torder where new.Tprice <= 0;
end if;
end
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `R3`;
DELIMITER ;;
CREATE TRIGGER `R3` BEFORE UPDATE ON `torder` FOR EACH ROW begin
if new.Tprice <=0
then delete from torder where new.Tprice <= 0;
end if;
end
;;
DELIMITER ;
