#include<stdio.h>
#include<string.h>


	
typedef struct studentinformation{
	char stdname[32];
	char fatname[32];
	int yob;
	int regnum;
	char bldgrp[4];
	char mobnum [20];
}stdinfo;
void details(stdinfo s){
	
	printf("Student Name : %s\n",s.stdname);
	printf("Father Name : %s\n",s.fatname);
	printf("Year of birth : %d\n",s.yob);
	printf("Register number : %d\n",s.regnum);
	printf("Blood group : %s\n",s.bldgrp);
	printf("Mobile number : %s\n",s.mobnum);
}
int main(){
	stdinfo std[32]= {
 {"Sanskriti_Singh","Raju",2007,29357,"A+","+91 9753673577"},
 {"Ramchandra_Rajput","Rahul",2006,29358,"O-","+91 9753673256"},
 {"Mahesh_Sharma","Harish",2008,29359,"AB+","+91 9753637837"},
 {"premanandh_Ramachari","Pratham",2003,29360,"O-","+91 9753672247"},
 {"Aarav_Sharma","Rakesh",2002,29361,"A+","+91 9784512367"},
 {"Diya_Patil","Mahesh",2004,29362,"B+","+91 9845621378"},
 {"Rohan_Verma","Suresh",2001,29363,"O+","+91 9732145689"},
 {"Sneha_Reddy","Anil",2003,29364,"AB+","+91 9658741236"},
 {"Kunal_Yadav","Pradeep",2002,29365,"B-","+91 9874512365"},
 {"Meera_Nair","Sanjay",2005,29366,"O-","+91 9765423187"},
 {"Aditya_Kulkarni","Vijay",2003,29367,"A-","+91 9642135789"},
 {"Pooja_Singh","Rajesh",2004,29368,"AB-","+91 9812456732"},
 {"Rahul_Gowda","Manjunath",2001,29369,"B+","+91 9745632189"},
 {"Ananya_Iyer","Ramesh",2005,29370,"O+","+91 9632587412"},
 {"Vikram_Chauhan","Dinesh",2002,29371,"A+","+91 9753124687"},
 {"Kavya_Joshi","Mohan",2004,29372,"B-","+91 9867452318"},
 {"Harshith_Shetty","Ganesh",2003,29373,"AB+","+91 9712365487"},
 {"Neha_Agarwal","Sunil",2001,29374,"O-","+91 9823146758"},
 {"Yash_Pandey","Mukesh",2002,29375,"A-","+91 9685741236"},
 {"Ishita_Rao","Prakash",2005,29376,"B+","+91 9798456123"},
 {"Arjun_Mehta","Kiran",2003,29377,"O+","+91 9674123589"},
 {"Sanjana_Hegde","Ravindra",2004,29378,"AB-","+91 9841236752"},
 {"Nikhil_Jain","Ashok",2001,29379,"A+","+91 9725631489"},
 {"Ritika_Mishra","Deepak",2002,29380,"B+","+91 9614782356"},
 {"Devansh_Rathod","Mahendra",2003,29381,"O-","+91 9832145768"},
 {"Priya_Chopra","Naresh",2005,29382,"AB+","+91 9741258369"},
 {"Shreyas_Bhat","Umesh",2004,29383,"A-","+91 9654781232"},
 {"Tanvi_Deshmukh","Ajay",2002,29384,"B-","+91 9785632147"},
 {"Krishna_Malhotra","Harish",2001,29385,"O+","+91 9698741253"},
 };	
 strcpy(std[31].stdname,"Abhishek_Gudasi");
	strcpy(std[31].fatname,"Mahaveer");
	std[31].yob=2007;
	std[31].regnum=29356;
	strcpy(std[31].bldgrp,"A+");
	strcpy(std[31].mobnum,"+91 9753673456"); 
	// taking input from user
	
	int roll_no;
	label:
	printf("enter a roll number of a student : \n");
	scanf("%d",&roll_no);
	if(roll_no<=31&&roll_no>=0){
	details(std[roll_no]);
	}
	else {
		printf("the roll number is invalid please enter a valid roll number\n \n ");
		goto label;
	}
	return 0;
}