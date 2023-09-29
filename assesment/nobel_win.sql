-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Sep 29, 2023 at 06:56 PM
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
-- Table structure for table `nobel_win`
--

CREATE TABLE `nobel_win` (
  `year` int(11) DEFAULT NULL,
  `subject` varchar(255) DEFAULT NULL,
  `winner` varchar(255) DEFAULT NULL,
  `country` varchar(255) DEFAULT NULL,
  `category` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `nobel_win`
--

INSERT INTO `nobel_win` (`year`, `subject`, `winner`, `country`, `category`) VALUES
(1970, 'Physics', 'John Smith', 'USA', 'Physics'),
(1970, 'Chemistry', 'Mary Johnson', 'UK', 'Chemistry'),
(1970, 'Literature', 'David Lee', 'Canada', 'Literature'),
(1975, 'Physics', 'Jane Doe', 'France', 'Physics'),
(1975, 'Chemistry', 'Michael Brown', 'Germany', 'Chemistry'),
(1975, 'Peace', 'Robert White', 'USA', 'Peace'),
(1980, 'Physics', 'Alice Green', 'Australia', 'Physics'),
(1980, 'Chemistry', 'James Wilson', 'Canada', 'Chemistry'),
(1980, 'Literature', 'Louis Smith', 'UK', 'Literature'),
(1985, 'Physics', 'Louis Johnson', 'USA', 'Physics'),
(1985, 'Economics', 'Louis Adams', 'Germany', 'Economics'),
(1990, 'Physics', 'Peter Brown', 'USA', 'Physics'),
(1990, 'Chemistry', 'Paul White', 'UK', 'Chemistry'),
(1990, 'Peace', 'John Adams', 'Canada', 'Peace');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
