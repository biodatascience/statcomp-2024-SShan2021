###########################
#load necessary libraries
###########################
library(devtools)
library(usethis)
library(testthat)
library(bios735)

###########################
#build a shareable package
###########################
build("/Users/sophshan/Library/CloudStorage/OneDrive-UniversityofNorthCarolinaatChapelHill/UNC/Spring 2024/BIOS 735/Homework Assignments/bios735")

###########################
#put up the documentation
###########################
devtools::document()

###########################
#initialize package tests
###########################
use_test("getT")

###########################
#check files
###########################
test_package("bios735")

###########################
#put output of package
###########################
check(manual=TRUE)
