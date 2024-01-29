#Define test data
m <- 400
n <- 50
little.n <- n/2
set.seed(1)
x <- matrix(rnorm(m*n),nrow=m,ncol=n)
f <- gl(2,little.n)

###########################
#Test 1: x and f have consistent dimension
###########################
test_that("x and f have consistent dimension", {

  expect_equal(dim(x)[2], length(f))

})

###########################
#Test 2: simple errors for bad input
###########################
test_that("simple errors for bad input", {

  expect_error(getT())  #no inputs
  expect_error(getT(x)) #only x input
  expect_error(getT(f)) #only f input
  expect_error(getT(x,f,"yes")) #extra input

})

###########################
#Test 3: check that x is a matrix
###########################
test_that("check that x is a matrix", {

  expect_true(is.matrix(x)) #checks if x is matrix

})

###########################
#Test 3: check for f (factor, correct levels)
###########################
test_that("check that f is correctly specified", {

  expect_true(is.factor(f))               #check if f is a factor
  expect_true(length(levels(f)) == 2)     #check that f has two levels
  expect_true(table(f)[1] == table(f)[2]) #check that the levels have same num.

})

###########################
#Test 4: check for accuracy of answer
###########################

test_that("getT gives the correct answer", {

  #use getT0 from HW 1 to test getT
  m <- nrow(x)
  ts <- sapply(seq_len(m), function(i) t.test(x[i,] ~ f, var.equal=TRUE)$statistic)
  ts <- unname(ts)

  #check if the solutions are the same
  expect_equal(ts, getT(x, f))

})
