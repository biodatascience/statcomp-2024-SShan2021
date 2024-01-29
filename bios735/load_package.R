###########################
#load necessary libraries
###########################
library(devtools)
library(usethis)
library(testthat)
library(bios735)

###########################
#load the package
###########################
load_all("/Users/sophshan/Desktop/OneDrive - University of North Carolina at Chapel Hill/UNC/Spring 2024/BIOS 735/Homework Assignments/bios735")

############################
#create the package
############################
create_package("/Users/sophshan/Desktop/OneDrive - University of North Carolina at Chapel Hill/UNC/Spring 2024/BIOS 735/Homework Assignments/bios735", roxygen=TRUE)

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

###########################
#debugging
###########################
m <- 400
n <- 50
little.n <- n/2
set.seed(1)
x <- matrix(rnorm(m*n),nrow=m,ncol=n)
f <- gl(2,little.n)

getT(x, f)
