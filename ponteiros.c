#include <stdio.h>



int main()
{
	int current_number;
	
	int next_number;
	
	int previous_number;
	
	current_number = 1;
	
	while(current_number < 100)
	{   
		
		next_number = current_number + previous_number;
		previous_number = current_number;
		current_number = next_number;
		printf(" \n Number: %d \n", current_number);
	}
	
}
