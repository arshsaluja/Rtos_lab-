// A)

#include<stdio.h>
int globe=88;
int main()
{
	static int jay=898;
	return 0;
}

// B)

#include <stdio.h> 
int global; 
int main(void) 
{ 
	return 0; 
}

// C)

#include <stdio.h> 
int global;
int main(void) 
{ 
	static int i;
	return 0; 
}

// D)

#include <stdio.h> 
int global
int main(void) 
{ 
	static int i = 100; 
	return 0; 
} 

// E)

#include <stdio.h> 
int global = 10; /* initialized global variable stored in DS*/
int main(void) 
{ 
	static int i = 100; /* Initialized static variable stored in DS*/
	return 0; 
}
