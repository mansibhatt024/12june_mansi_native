-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Sep 30, 2023 at 11:34 AM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assignment`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `employee_id` int(11) DEFAULT NULL,
  `first_name` varchar(25) DEFAULT NULL,
  `last_name` varchar(25) DEFAULT NULL,
  `salary` varchar(25) DEFAULT NULL,
  `joining_date` varchar(50) DEFAULT NULL,
  `department` varchar(25) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`employee_id`, `first_name`, `last_name`, `salary`, `joining_date`, `department`) VALUES
(1, 'john', 'abraham', '1000000', '01-jan-13 12.00.00 AM', 'banking'),
(2, 'michael', 'clarke', '800000', '01-jan-13 12.00.00 AM', 'insurance'),
(3, 'roy', 'thomas', '700000', '01-feb-2013 12.00.00 AM', 'banking'),
(4, 'tom', 'jose', '600000', '01-feb-2013 12.00.00 AM', 'insurance'),
(5, 'jerry', 'pinto', '650000', '01-feb-2013 12.00.00 AM', 'insurance'),
(6, 'philip', 'mathew', '750000', '01-jan-13 12.00.00 AM', 'services'),
(7, 'testname1', '123', '650000', '01-jan-13 12.00.00 AM', 'services'),
(8, 'testname2', 'lname%', '600000', '01-feb-2013 12.00.00 AM', 'insurance'),
(1, 'john', 'abraham', '1000000', '01-jan-13 12.00.00 AM', 'banking'),
(2, 'michael', 'clarke', '800000', '01-jan-13 12.00.00 AM', 'insurance'),
(3, 'roy', 'thomas', '700000', '01-feb-2013 12.00.00 AM', 'banking'),
(4, 'tom', 'jose', '600000', '01-feb-2013 12.00.00 AM', 'insurance'),
(5, 'jerry', 'pinto', '650000', '01-feb-2013 12.00.00 AM', 'insurance'),
(6, 'philip', 'mathew', '750000', '01-jan-13 12.00.00 AM', 'services'),
(7, 'testname1', '123', '650000', '01-jan-13 12.00.00 AM', 'services'),
(8, 'testname2', 'lname%', '600000', '01-feb-2013 12.00.00 AM', 'insurance');

--
-- Triggers `employee`
--
DELIMITER $$
CREATE TRIGGER `after_employee_insert` AFTER INSERT ON `employee` FOR EACH ROW BEGIN
    INSERT INTO view_table (employee_id, first_name, last_name) 
    VALUES (NEW.employee_id, NEW.first_name, NEW.last_name);
END
$$
DELIMITER ;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
