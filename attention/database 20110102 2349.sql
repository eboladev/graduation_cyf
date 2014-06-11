-- MySQL Administrator dump 1.4
--
-- ------------------------------------------------------
-- Server version	5.1.48-community


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


--
-- Create schema supermarket
--

CREATE DATABASE IF NOT EXISTS supermarket;
USE supermarket;

--
-- Definition of table `优惠管理`
--

DROP TABLE IF EXISTS `优惠管理`;
CREATE TABLE `优惠管理` (
  `优惠编号` varchar(50) NOT NULL,
  `价格上限` int(10) unsigned NOT NULL,
  `价格下限` int(10) unsigned NOT NULL,
  `赠送商品编号` varchar(50) NOT NULL,
  `赠送数量` int(10) unsigned NOT NULL,
  `是否有效` tinyint(1) NOT NULL,
  PRIMARY KEY (`优惠编号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `优惠管理`
--

/*!40000 ALTER TABLE `优惠管理` DISABLE KEYS */;
/*!40000 ALTER TABLE `优惠管理` ENABLE KEYS */;


--
-- Definition of table `优惠记录`
--

DROP TABLE IF EXISTS `优惠记录`;
CREATE TABLE `优惠记录` (
  `交易号` varchar(50) NOT NULL,
  `赠送数量` int(10) unsigned NOT NULL,
  `赠送商品编号` varchar(50) NOT NULL,
  `赠送商品规格` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `优惠记录`
--

/*!40000 ALTER TABLE `优惠记录` DISABLE KEYS */;
/*!40000 ALTER TABLE `优惠记录` ENABLE KEYS */;


--
-- Definition of table `会员`
--

DROP TABLE IF EXISTS `会员`;
CREATE TABLE `会员` (
  `卡号` varchar(50) NOT NULL,
  `姓名` varchar(50) NOT NULL,
  `注册时间` datetime NOT NULL,
  `备注` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`卡号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `会员`
--

/*!40000 ALTER TABLE `会员` DISABLE KEYS */;
/*!40000 ALTER TABLE `会员` ENABLE KEYS */;


--
-- Definition of table `单笔交易`
--

DROP TABLE IF EXISTS `单笔交易`;
CREATE TABLE `单笔交易` (
  `交易号` varchar(50) NOT NULL,
  `工号` varchar(50) NOT NULL,
  `交易日期` datetime NOT NULL,
  `实收金额` int(10) unsigned NOT NULL,
  `会员卡号` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`交易号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `单笔交易`
--

/*!40000 ALTER TABLE `单笔交易` DISABLE KEYS */;
/*!40000 ALTER TABLE `单笔交易` ENABLE KEYS */;


--
-- Definition of table `单笔交易清单`
--

DROP TABLE IF EXISTS `单笔交易清单`;
CREATE TABLE `单笔交易清单` (
  `单笔交易交易号` varchar(50) NOT NULL,
  `商品编号` varchar(50) NOT NULL,
  `商品数量` int(10) unsigned NOT NULL,
  `销售金额` int(10) unsigned NOT NULL,
  `商品成本` int(10) unsigned NOT NULL,
  `折扣` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `单笔交易清单`
--

/*!40000 ALTER TABLE `单笔交易清单` DISABLE KEYS */;
/*!40000 ALTER TABLE `单笔交易清单` ENABLE KEYS */;


--
-- Definition of table `员工`
--

DROP TABLE IF EXISTS `员工`;
CREATE TABLE `员工` (
  `工号` varchar(50) NOT NULL,
  `密码` varchar(50) NOT NULL,
  `姓名` varchar(50) NOT NULL,
  `备注` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`工号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `员工`
--

/*!40000 ALTER TABLE `员工` DISABLE KEYS */;
/*!40000 ALTER TABLE `员工` ENABLE KEYS */;


--
-- Definition of table `商品`
--

DROP TABLE IF EXISTS `商品`;
CREATE TABLE `商品` (
  `商品编号` varchar(50) NOT NULL,
  `商品类别` varchar(50) NOT NULL,
  `销售价格` int(10) unsigned NOT NULL,
  `商品规格` varchar(10) NOT NULL,
  `商品名称` varchar(50) NOT NULL,
  `成本` int(10) unsigned NOT NULL,
  `折扣` float NOT NULL,
  PRIMARY KEY (`商品编号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `商品`
--

/*!40000 ALTER TABLE `商品` DISABLE KEYS */;
/*!40000 ALTER TABLE `商品` ENABLE KEYS */;


--
-- Definition of table `已销售无库存商品`
--

DROP TABLE IF EXISTS `已销售无库存商品`;
CREATE TABLE `已销售无库存商品` (
  `交易号` varchar(50) NOT NULL,
  `商品编号` varchar(50) NOT NULL,
  `销售数量` int(10) unsigned NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `已销售无库存商品`
--

/*!40000 ALTER TABLE `已销售无库存商品` DISABLE KEYS */;
/*!40000 ALTER TABLE `已销售无库存商品` ENABLE KEYS */;


--
-- Definition of table `库存`
--

DROP TABLE IF EXISTS `库存`;
CREATE TABLE `库存` (
  `商品编号` varchar(50) NOT NULL,
  `数量` int(10) unsigned NOT NULL,
  PRIMARY KEY (`商品编号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `库存`
--

/*!40000 ALTER TABLE `库存` DISABLE KEYS */;
/*!40000 ALTER TABLE `库存` ENABLE KEYS */;


--
-- Definition of table `权限`
--

DROP TABLE IF EXISTS `权限`;
CREATE TABLE `权限` (
  `员工工号` varchar(50) NOT NULL,
  `商品管理` tinyint(1) NOT NULL,
  `库存管理` tinyint(1) NOT NULL,
  `查看特殊操作` tinyint(1) NOT NULL,
  `修改交易清单` tinyint(1) NOT NULL,
  `员工管理` tinyint(1) NOT NULL,
  `会员管理` tinyint(1) NOT NULL,
  `进货管理` tinyint(1) NOT NULL,
  `权限管理` tinyint(1) NOT NULL,
  `查询优惠记录` tinyint(1) NOT NULL,
  `查询销售情况` tinyint(1) NOT NULL,
  PRIMARY KEY (`员工工号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `权限`
--

/*!40000 ALTER TABLE `权限` DISABLE KEYS */;
/*!40000 ALTER TABLE `权限` ENABLE KEYS */;


--
-- Definition of table `特殊操作`
--

DROP TABLE IF EXISTS `特殊操作`;
CREATE TABLE `特殊操作` (
  `工号` varchar(50) NOT NULL,
  `操作说明` varchar(100) NOT NULL,
  `操作性质` varchar(50) NOT NULL,
  `备注` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `特殊操作`
--

/*!40000 ALTER TABLE `特殊操作` DISABLE KEYS */;
/*!40000 ALTER TABLE `特殊操作` ENABLE KEYS */;


--
-- Definition of table `进货管理`
--

DROP TABLE IF EXISTS `进货管理`;
CREATE TABLE `进货管理` (
  `进货单号` varchar(50) NOT NULL,
  `供货商` varchar(50) NOT NULL,
  `商品编号` varchar(50) NOT NULL,
  `进货日期` datetime NOT NULL,
  `数量` int(10) unsigned NOT NULL,
  `进货单价` float NOT NULL,
  PRIMARY KEY (`进货单号`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `进货管理`
--

/*!40000 ALTER TABLE `进货管理` DISABLE KEYS */;
/*!40000 ALTER TABLE `进货管理` ENABLE KEYS */;




/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
