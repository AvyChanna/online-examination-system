CREATE DATABASE `exam`;
USE `exam`;
CREATE TABLE `exam` (
  `ExamCode` int(11) NOT NULL,
  `PassPercentage` int(3) DEFAULT NULL,
  `MaxScore` int(3) DEFAULT NULL,
  `StartTime` timestamp NULL DEFAULT NULL,
  `ExamLength` int(5) DEFAULT NULL,
  `GroupID` json DEFAULT NULL,
  `QuestionSet` json DEFAULT NULL,
  `Standings` json DEFAULT NULL,
  PRIMARY KEY (`ExamCode`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
CREATE TABLE `groups` (
  `GroupID` varchar(8) NOT NULL,
  `EnrollmentKey` varchar(48) DEFAULT NULL,
  `Active` int(1) DEFAULT '1',
  PRIMARY KEY (`GroupID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
CREATE TABLE `performance` (
  `ExamCode` varchar(8) DEFAULT NULL,
  `Username` varchar(48) DEFAULT NULL,
  `TotalScore` int(3) DEFAULT NULL,
  `Attempts` json DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
CREATE TABLE `users` (
  `Username` varchar(48) CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL,
  `Name` varchar(48) DEFAULT NULL,
  `PassHash` varchar(128) DEFAULT NULL,
  `PassSalt` varchar(16) DEFAULT NULL,
  `TokenHash` varchar(48) DEFAULT NULL,
  `TokenSalt` varchar(48) DEFAULT NULL,
  `Email` varchar(80) DEFAULT NULL,
  `Phone` varchar(16) DEFAULT NULL,
  `RollNo` varchar(16) DEFAULT NULL,
  `Groups` json DEFAULT NULL,
  `IITG` int(16) DEFAULT '0',
  PRIMARY KEY (`Username`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
