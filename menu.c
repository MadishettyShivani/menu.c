#include<stdio.h>
main()
{
	int choice;
	printf("enter a number from 1 to 5 and let me give you a delicious food item\n");
	scanf("%d",&choice);
	switch(choice) 
	{
	    case 1:{
	    		printf("CHICKEN BIRYANI\nRs300");
			break;
		}
		case 2:{ 
		    	printf("EGG BIRYANI\nRs250 ");
		    break;
		}
		case 3:{ 
		    	printf("PANEER BUTTER MASALA\nRs240 ");
			break;
		} 
		case 4:{  
		        printf("FISH FINGERS\nRs150");
			break;
		}
		case 5:{ 
		    	printf("HOT WINGS\nRs500");
			break;
		}
		default: printf("please enter a number only from 1 to 5");					
	}
}
