**Computer Engineering Department**

**TED University**

**CMPE 252 - C Programming, Spring 2023**

**Lab 1**

**Part 1 (25 points)**

Write a recursive function **int modulus(int num, int d)**that finds modulus of given numbers.


**Part 2 (75 points)**

In this part, you are going to implement the following function in skeleton code **lab1part2.c**:

**void void isRectangle(int \*result, double \*centerX, double \*centerY):**

This function is supposed to do the following tasks:

• Read x and y coordinate of the four points using **scanf**function.

• Check that given points construct rectangle or not.

• If yes, set result variable to 1 and set centerX and centerY variables to the center coordinate of rectangle.

• Otherwise set result, centerX and centerY to 0.

• the corner coordinates of the rectangle will always be given in order.

To find given coordinates construct rectangle or not, you should check following conditions:

• Edge between (X1,Y1) and (X2,Y2) should be equal to edge between (X3,Y3) and (X4,Y4).

• Edge between (X2,Y2) and (X3,Y3) should be equal to edge between (X4,Y4) and (X1,Y1).

• Edge between (X1,Y1) and (X3,Y3) should be equal to edge between (X2,Y2) and (X4,Y4).

• Edge between (X1,Y1) and (X2,Y2) should be smaller than edge between (X1,Y1) and (X3,Y3).

• Edge between (X2,Y2) and (X3,Y3) should be smaller than edge between (X2,Y2) and (X4,Y4).

• Edge between (X3,Y3) and (X4,Y4) should be smaller than edge between (X3,Y3) and (X1,Y1).
