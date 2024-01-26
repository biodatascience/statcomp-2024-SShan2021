###########################
#load necessary libraries
###########################
library(devtools)
library(usethis)

###########################
#build a shareable package
###########################
build("/Users/sophshan/Library/CloudStorage/OneDrive-UniversityofNorthCarolinaatChapelHill/UNC/Spring 2024/BIOS 735/Homework Assignments/bios735")

###########################
#put up the documentation
###########################
devtools::document()
