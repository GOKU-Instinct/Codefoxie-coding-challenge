# Codefoxie-coding-challenge

## The Brewery - Transport Refrigeration Sensors

Meet Baz. He works at The Brewery, a boutique micro brewery based in rural NSW, creators of 6
unique beer varieties. Baz is responsible for driving the large transport truck, each Thursday
delivering goods from the brewery to a range of pubs across metropolitan Sydney.
Each beer has its own specific refrigeration needs whilst being transported:
	Beer 1 -> 4°C - 6°C
	Beer 2 -> 5°C - 6°C
	Beer 3 -> 4°C - 7°C
	Beer 4 -> 6°C - 8°C
	Beer 5 -> 3°C - 5°C
The refrigerated truck is loaded with multiple containers, each set to a specific temperature and
each containing a thermometer sensor.
While driving, Baz is alerted if any of the containers fall outside of the temperature range.
Unfortunately this is common due to factors such as when unloading the truck, the heat of
Sydney summer or sometimes due to human error in leaving the container doors ajar.

Instructions
-------------
Develop a solution that shows Baz the current temperature of each container and notifies him
when the temperatures are out of the correct range.
1. You can choose the coding language you feel best meets the user needs
2. Don't gold plate the solution. Make best use of the time available to you to deliver the
most valuable solution
3. If you have any questions contact us or make your own assumptions and document them
with the solution
4. The solution is not required to use a database server, if needed mock the data you will
need internally in any of the application layers
5. The solution must be implemented with an acceptable level of automated tests
6. We prefer that you have this on a Git repository; Github, Gitlab or Bitbucket. If you can’t
then send us a zip file with your code or a link where we can download the package from
7. Make sure your package contains a readme file with any relevant information necessary
to run your project, including:
	a. What are the highlights of your logic/code writing style?
	b. What could have been done in a better way?
	c. Any other notes you feel relevant for the evaluation of your solution


## My Assumptions:

1. the no. of containers present in the truck is equal to the no. of vareities of bears given.
2. no. of halts will be given
3. the temperature reading of each container will be provided at each halt.
4. Inputs:
	n -> no. of varieties of bears
	range[n] -> range of suitable temperature for different varieties of bear
	q -> no . of halts/ stopages where the truck going to stop and temperature of containers may change
	X -> an array denoting the reading of temperature sensors of each container at all halts.	
5.Output:
	A warning is generated at each halt for specific containers if their temperature goes out of the suitable range of the bear, otherwise a msg is displayed to tell that all things are fine inside.


## Sample Input:

5
4 6
5 6
4 7
6 8
3 5
5
4 4 4 4 4
5 5 5 5 5
6 6 6 6 6
7 7 7 7 7
8 8 8 8 8


## Sample Output:

Enter the no. of varieties of bears: 5
Enter the range of temperatures for each varieties of bear respectively(L, R):
        For bear 1: 4 6
        For bear 2: 5 6
        For bear 3: 4 7
        For bear 4: 6 8
        For bear 5: 3 5

The initial temperature of the containers will be set to:
        For container 1-> 5
        For container 2-> 5
        For container 3-> 5
        For container 4-> 7
        For container 5-> 4

Truck departs from the starting point.

Enter the no. of halts(stoppages) between start and destination: 5
For halt 1:
        Enter the present reading of each temperature sensor of the containers (in the form of array): 4 4 4 4 4
                Warning!!! Temperature low for container 2. Hurry, increase the temperature for container 2.
                Warning!!! Temperature low for container 3. Hurry, increase the temperature for container 3.
                Warning!!! Temperature low for container 4. Hurry, increase the temperature for container 4.
For halt 2:
        Enter the present reading of each temperature sensor of the containers (in the form of array): 5 5 5 5 5
                Warning!!! Temperature low for container 4. Hurry, increase the temperature for container 4.
For halt 3:
        Enter the present reading of each temperature sensor of the containers (in the form of array): 6 6 6 6 6
                Warning!!! Temperature high for container 5. Hurry, decrease the temperature for container 5.
For halt 4:
        Enter the present reading of each temperature sensor of the containers (in the form of array): 7 7 7 7 7
                Warning!!! Temperature high for container 1. Hurry, decrease the temperature for container 1.
                Warning!!! Temperature high for container 2. Hurry, decrease the temperature for container 2.
                Warning!!! Temperature high for container 5. Hurry, decrease the temperature for container 5.
For halt 5:
        Enter the present reading of each temperature sensor of the containers (in the form of array): 8 8 8 8 8
                Warning!!! Temperature high for container 1. Hurry, decrease the temperature for container 1.
                Warning!!! Temperature high for container 2. Hurry, decrease the temperature for container 2.
                Warning!!! Temperature high for container 3. Hurry, decrease the temperature for container 3.
                Warning!!! Temperature high for container 5. Hurry, decrease the temperature for container 5.

Truck reached Destination :)