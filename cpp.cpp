#include<iostream>
#include<fstream>
extern int total;
using namespace std;
class subject{
	public:
      int sub1;
      int sub2;
      int sub3;
      int sub4;
	 int getcutoff(int sub1,int sub2,int sub3);
	 
	 
	 
};
int subject::getcutoff(int sub1,int sub2,int sub3){

	 	return sub1+(sub2+sub3)/2;
}

int main()
{	
	subject group1;
	subject group2;
	subject group3;
	int serial_no[5],group,cutoff1,preference,course_code[10],artsandscience[9],password;
	char name[50],age[5],pnumber[20],city[90],fname[90],state[20],mail[30],data[100];
	cout<<"\t\t\t\tTHADHUN UNIVERSITY"<<endl;
	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
	begin:{
	cout<<"1.LOGIN \n2.ALREADY A USER\n3.EXIT APPLICATION"<<endl;
	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
	cout<<"ENTER THE SERIAL NUMBER YOU WANT TO ENTER"<<endl;
	cin>>serial_no[1];}
	switch(serial_no[1]){
		case 1:{
		cout<<"ENTER YOUR NAME:"<<endl;
		cin.getline(name,50);
			cin.getline(name,50);
		cout<<"ENTER YOUR AGE:"<<endl;
		cin.getline(age,5);
	    cout<<"ENTER YOUR FATHERS  NAME:"<<endl;
	    cin.getline(fname,90);
	    cout<<"ENTER YOUR PHONE NUMBER:"<<endl;
	    cin.getline(pnumber,20);
	    cout<<"ENTER YOUR EMAIL ADDRESS:"<<endl;
	    cin.getline(mail,30);
	    cout<<"ENTER YOUR STATE:"<<endl;
	    cin.getline(state,20);
	    cout<<"ENTER YOUR CITY:"<<endl;
	    cin.getline(city,90);
	    cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
	    cout<<"YOUR REGESTRAYION ID :790444"<<endl;
	    cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
		cout<<"YOUR REGESTRATION HAS BEEN COMPLETED"<<endl;
		cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
		cout<<"1.COURSE DETAILS\n2.HOSTEL DETAILS\n3.PLACEMENTS"<<endl;
		cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
		cout<<"ENTER THE SERIAL NUMBER YOU WANT TO GO"<<endl;
		cin>>serial_no[2];
		switch(serial_no[2]){
		
			case 1:{
				cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
				cout<<"ENTER THE GROUP YOU STUDIED"<<endl;
		        cout<<"1.BIOLOGY-MATHS"<<endl;
		        cout<<"2.COMPUTER-MATHS"<<endl;
		        cout<<"3.COMMERCE"<<endl;
		        cout<<"4.OTHER"<<endl;
		        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
		        cout<<"ENTER THE SERIAL NUMBER"<<endl;
		        cin>>group;
		        //if(group=1)
			    switch(group){
			    case 1:	{
			    	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
		        	cout<<"IF YOU WANT TO CALCULATE THE BIOLOGY CUTOFF PRESS 1\nIF YOU WANT TO CALCULATE THE MATHS CUTOFF PRESS 2\n"<<endl;
		        	cin>>preference;
		        	switch(preference){
					
						case 1:{
							cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
			                cout<<"ENTER THE MARKS OF THE FOLLOWING SUBJECT"<<endl;
			                cout<<"BIOLOGY:";
         			        cin>>group1.sub1;
        			        cout<<"PHYSICS:";
		        	        cin>>group1.sub2;
			                cout<<"CHEMISTRY:";
        			        cin>>group1.sub3;
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cutoff1=group1.getcutoff(group1.sub1,group1.sub2,group1.sub3);
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"YOUR CUTOFF="<<cutoff1<<endl;
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"WE HAVE THREE COLLEGES UNDER OUR UNIVERSITY"<<endl;
        			        cout<<"1.THADHUN COLLEGE OF TECH\n2.THADHUN COLLEGE OF ARTS AND SCIENCE\n3.THADHUN MEDICAL COLLEGE\n";
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"PRESS THE NUMBER OF THE COLLEGE YOU NEE TO JOIN\n";
        			        cin>>serial_no[4];
        			        switch(serial_no[4]){
							
							    case 1:{
        			        		courseselection1:{
        			        			cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        		cout<<"COURSES OFFERED IN 'THADHUN COLLEGE OF TECH'"<<endl;
        			        		cout<<"#BIOMEDICAL ENGINEERING------>COURSE CODE-160\n\n#BIOMECHANICAL ENGINEERING------>COURSE CODE-150\n\n#BIOCHEMICAL ENGINEERING------>COURSE CODE-175\n\n#BIOLOGICAL SYSTEM ENGINEERING------>COURSE CODE-170\n\n#BIOFORMATICS ENGINEERING------>COURSE CODE-140\n\n";
        			        		cout<<"ENTER THE COURSE CODE IN WHICH YOU WANT TO ENTER"<<endl;
        			        		cin>>course_code[2];
        			        		cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        		switch(course_code[2]){
									
        			        			case 160:{
        			        				if(course_code[2]<cutoff1){
											cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        					 cout<<"THE ANNUAL FEE FOR THE BIOMEDICAL ENGINEERING IS------>100000 Rs\n";
        			        					 goto begin;
									}
											else
									{
										cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												cout<<"YOUR CUTOFF IS NOT ENOUGH FOR THIS COURSE. TRY OTHER COURSES\n";
												cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												goto courseselection1;
									}
											break;}
									
										case 150:{
											
											if(course_code[2]<cutoff1){
											cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												cout<<"THE ANNUAL FEE FOR THE BIOMECHANICAL ENGINEERING IS------>90000 Rs\n";
												goto begin;
									}
											else{
											cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
                                          		cout<<"YOUR CUTOFF IS NOT ENOUGH FOR THIS COURSE. TRY OTHER COURSES\n";
												goto courseselection1;}
											
											break;}
										case 170:{
											
        			        				if(course_code[2]<cutoff1)
									{
										cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        					 cout<<"THE ANNUAL FEE FOR THE BIOLOGICAL SYSTEM ENGINEERING IS------>80000 Rs\n";
        			        					 goto begin;
								}
											else
											{
											cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												cout<<"YOUR CUTOFF IS NOT ENOUGH FOR THIS COURSE. TRY OTHER COURSES\n";
												cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												goto courseselection1;
									}
											break;}
									
										case 175:{
									
											if(course_code[2]<cutoff1)
							{				
							cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												cout<<"THE ANNUAL FEE FOR THE BIOCHEMICAL ENGINEERING IS------>110000 Rs\n";
												goto begin;
							}
											else
									{
										cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
                                          		cout<<"YOUR CUTOFF IS NOT ENOUGH FOR THIS COURSE. TRY OTHER COURSES\n";
                                          		cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												goto courseselection1;
								}
											break;}
									
									   case 140:{
									   
											if(course_code[2]<cutoff1)
											{
												cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												cout<<"THE ANNUAL FEE FOR THE BIOFORMATICS ENGINEERING IS------>50000 Rs\n";
												cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												goto begin;
									}
										else{
										cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
                                          		cout<<"YOUR CUTOFF IS NOT ENOUGH FOR THIS COURSE. TRY OTHER COURSES\n";
                                          		cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
												goto courseselection1;}
										
											break;}
							    }//closing bracket of the course selection
                                		}//course selection through course code oda switch oda closing bracket
									break;}//thadhun college of tech oda (case 1) closing bracket
					            case 2:{
					            	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
					            	cout<<"COURSES OFFERED N 'THADHUN ARTS AND SCIENCE COLLEGE'"<<endl;
					            	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
					            	cout<<"B.Sc BIOTECHNOLOGY---------->35000 Rs PER ANUM\n\nB.Sc MICROBIOLOGY------------>50000 Rs PER ANUM\n\nB.Sc BIOCHEMISTRY------------->30000 Rs PER ANUM\n\nB.Sc BOTANY------------->25000 Rs PER ANU\n\nB.Sc ZOOLOGY-------------->25000 Rs PER ANUM "<<endl;
					            	goto begin;
									break;
								}
								case 3:{
									cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
									cout<<"COURSES OFFERED I N 'THADHUN MEDICAL COLLEGE'(WITHOUT NEET)"<<endl;
									cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
									cout<<"B.Pharm---------->1.5 LAKKS per AMNUM\n\nB.sc. NURSING------------->1.5 LAKHS PER ANUM\n\nBPT------------>1 LAKHS per ANUM\n\nB.sc. CARDIAC TECHNOLOGY------------>3 LAKHS PER ANUM\n\n B.sc.PHYSICIAN ASSISTANT----------->3.45 LAKHS PER ANUM\n\nB.ASLP------------>2 LAKSH PER ANUM\n\nB.Sc.OPERATION THEATRE & ANAESTHESIA TECHNOLOGY------------->4 LAKHS PER ANUM"<<endl;
									goto begin;
									break;
								} 		
						        }//college switch oda closing bracket
							
                            
							        			      
							break;}//preference biology cutoff(case 1)oda closeing bracket
							
					
						case 2:{
							cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
							cout<<"ENTER THE MARKS OF THE FOLLOWING SUBJECT"<<endl;
			                cout<<"MATHS";
         			        cin>>group1.sub1;
        			        cout<<"PHYSICS";
		        	        cin>>group1.sub2;
			                cout<<"CHEMISTRY";
        			        cin>>group1.sub3;
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cutoff1=group1.getcutoff(group1.sub1,group1.sub2,group1.sub3);
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"YOUR CUTOFF="<<cutoff1<<endl;
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"1.THADHUN COLLEGE OF TECH\n2.THADHUN COLLEGE OF ARTS AND SCIENCE\n3.THADHUN MEDICAL COLLEGE\n";
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"COURSES OFFERED IN THE THADHUN COLLEGE OF TECH"<<endl;
        			        courseselection:{
        			        	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"#BE-MECHANICAL ENGINNERING----->COURSE CODE-120\n#BE-CIVIL ENGINEERING------>COURSE CODE-121\n#BE-ELECTRICAL ENGINEERING------>COURSE CODE-122\n#BE-CHEMICAL ENGINEERING------->COURSE CODE-125\n#BE-ELECTRONICS AND COMMUNICATION ENGINEERING------->COURSE CODE-170\n#BE-AUTOMOBILE ENGINEERING-------->COURSE CODE-124\n#BE-AERONAUTICAL ENGINEERING--------->COURSE CODE-130\n#BE-COMPUTER SCIENCE AND ENGINEERING---------->COURSE CODE-190\n#BE-MECHATRONICS ENGINEERING-------->COURSE CODE-136\n#BE-TEXTILE ENGINEERING-------->COURSE CODE-120\n#BTECH-ARTIFICIAL INTELEGENCE AND DATA SCIENCE--------->COURSE CODE-175\n#BE-EEE-------->COURSE CODE-165\n#BE-ELECTRONICS AND INSTRUMENTATION ENGINEERING----------->COURSE CODE-160\n";
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"ENTER THE 'COURSE CODE'OF THE COURSE YOU WANT TO JOIN\n";
							cin>>course_code[1];   		}	        
        			        if(course_code[1]<cutoff1)
							{
							cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        	      cout<<"#BE-MECHANICAL ENGINNERING----->COURSE CODE-120-------->FEES=Rs90000 per YEAR\n\n#BE-CIVIL ENGINEERING------>COURSE CODE-121-------->FEES=Rs90000 per YEAR\n\n#BE-ELECTRICAL ENGINEERING------>COURSE CODE-122-------->FEES=Rs90000 per YEAR\n\n#BE-CHEMICAL ENGINEERING------->COURSE CODE-125-------->FEES=Rs90000 per YEAR\n\n#BE-ELECTRONICS AND COMMUNICATION ENGINEERING------->COURSE CODE-170-------->FEES=Rs150000 per YEAR\n\n#BE-AUTOMOBILE ENGINEERING-------->COURSE CODE-124-------->FEES=Rs90000 per YEAR\n\n#BE-AERONAUTICAL ENGINEERING--------->COURSE CODE-130-------->FEES=Rs150000 per YEAR\n\n#BE-COMPUTER SCIENCE AND ENGINEERING---------->COURSE CODE-190-------->FEES=Rs200000 per YEAR\n\n#BE-MECHATRONICS ENGINEERING-------->COURSE CODE-136-------->FEES=Rs100000 per YEAR\n\n#BE-TEXTILE ENGINEERING-------->COURSE CODE-120-------->FEES=Rs70000 per YEAR\n\n#BTECH-ARTIFICIAL INTELEGENCE AND DATA SCIENCE--------->COURSE CODE-175-------->FEES=Rs170000 per YEAR\n\n#BE-EEE-------->COURSE CODE-165-------->FEES=Rs150000 per YEAR\n\n#BE-ELECTRONICS AND INSTRUMENTATION ENGINEERING----------->COURSE CODE-160-------->FEES=Rs110000 per YEAR\n\n";
        			        	      goto begin;
            				}
        			        else
			            	{
							cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;			
							cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        	cout<<"YOUR CUTOFF IS NOT ENOUGH FOR THE COURSE CODE YOU ENTERED\n";
        			        	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        	cout<<"PLEASE TRY OTHER COURSES"<<endl;
        			        	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        	goto courseselection;
			               }
        		
        			
		    				break;}// preference maths cutoff (case 2)oda closing bracket
		    			
		    	}//calculate the group maths cutoff or bio cutoff switch oda close bracket
		    	
		    	break;}//group 1 oda closing bracked 
		    	case 2:{
		    		cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
		    			cout<<"ENTER THE MARKS OF THE FOLLOWING SUBJECT"<<endl;
		    			cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
			                cout<<"MATHS";
         			        cin>>group1.sub1;
        			        cout<<"PHYSICS";
		        	        cin>>group1.sub2;
			                cout<<"CHEMISTRY";
        			        cin>>group1.sub3;
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cutoff1=group1.getcutoff(group1.sub1,group1.sub2,group1.sub3);
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"YOUR CUTOFF="<<cutoff1<<endl;
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"1.THADHUN COLLEGE OF TECH\n2.THADHUN COLLEGE OF ARTS AND SCIENCE\n3.THADHUN MEDICAL COLLEGE\n";
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"COURSES OFFERED IN THE THADHUN COLLEGE OF TECH"<<endl;
        			        course:{
        			        cout<<"#BE-MECHANICAL ENGINNERING----->COURSE CODE-120\n#BE-CIVIL ENGINEERING------>COURSE CODE-121\n#BE-ELECTRICAL ENGINEERING------>COURSE CODE-122\n#BE-CHEMICAL ENGINEERING------->COURSE CODE-125\n#BE-ELECTRONICS AND COMMUNICATION ENGINEERING------->COURSE CODE-170\n#BE-AUTOMOBILE ENGINEERING-------->COURSE CODE-124\n#BE-AERONAUTICAL ENGINEERING--------->COURSE CODE-130\n#BE-COMPUTER SCIENCE AND ENGINEERING---------->COURSE CODE-190\n#BE-MECHATRONICS ENGINEERING-------->COURSE CODE-136\n#BE-TEXTILE ENGINEERING-------->COURSE CODE-120\n#BTECH-ARTIFICIAL INTELEGENCE AND DATA SCIENCE--------->COURSE CODE-175\n#BE-EEE-------->COURSE CODE-165\n#BE-ELECTRONICS AND INSTRUMENTATION ENGINEERING----------->COURSE CODE-160\n";
        			        cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        cout<<"ENTER THE 'COURSE CODE'OF THE COURSE YOU WANT TO JOIN\n";
							cin>>course_code[1];   		}	        
        			        if(course_code[1]<cutoff1)
							{
					cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;		
        			        	      cout<<"#BE-MECHANICAL ENGINNERING----->COURSE CODE-120-------->FEES=Rs90000 per YEAR\n\n#BE-CIVIL ENGINEERING------>COURSE CODE-121-------->FEES=Rs90000 per YEAR\n\n#BE-ELECTRICAL ENGINEERING------>COURSE CODE-122-------->FEES=Rs90000 per YEAR\n\n#BE-CHEMICAL ENGINEERING------->COURSE CODE-125-------->FEES=Rs90000 per YEAR\n\n#BE-ELECTRONICS AND COMMUNICATION ENGINEERING------->COURSE CODE-170-------->FEES=Rs150000 per YEAR\n\n#BE-AUTOMOBILE ENGINEERING-------->COURSE CODE-124-------->FEES=Rs90000 per YEAR\n\n#BE-AERONAUTICAL ENGINEERING--------->COURSE CODE-130-------->FEES=Rs150000 per YEAR\n\n#BE-COMPUTER SCIENCE AND ENGINEERING---------->COURSE CODE-190-------->FEES=Rs200000 per YEAR\n\n#BE-MECHATRONICS ENGINEERING-------->COURSE CODE-136-------->FEES=Rs100000 per YEAR\n\n#BE-TEXTILE ENGINEERING-------->COURSE CODE-120-------->FEES=Rs70000 per YEAR\n\n#BTECH-ARTIFICIAL INTELEGENCE AND DATA SCIENCE--------->COURSE CODE-175-------->FEES=Rs170000 per YEAR\n\n#BE-EEE-------->COURSE CODE-165-------->FEES=Rs150000 per YEAR\n\n#BE-ELECTRONICS AND INSTRUMENTATION ENGINEERING----------->COURSE CODE-160-------->FEES=Rs110000 per YEAR\n\n";
        			        	      goto begin;
            				}
        			        else
			            	{			
			            	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
        			        	cout<<"YOUR CUTOFF IS NOT ENOUGH FOR THE COURSE CODE YOU ENTERED\n";
        			        	cout<<"PLEASE TRY OTHER COURSES"<<endl;
        			        	goto course;
			               }
        		cout<<"IF YOU JOIN OUR ATRS AND SCIENCE COLLEGE PRESS ANY NUMBER GREATER THAN ZERO"<<endl;
        		cin>>artsandscience[1];{
        		if(0<artsandscience[1]){
        			goto thadhunarts;
				}
				else{
					cout<<"THANK YOU!!!"<<endl;
					goto begin;
				}
			}
					break;	}//group 2 (case 2 of group) oda closing bracket
			case 3:{
				thadhunarts:{
					cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
				cout<<"COURSES OFFERED IN THE'THADHUN ARTS AND SCIENCE COLLEGE'"<<endl;
				cout<<"1.ATRS,HUMANITIES,AND SOCIAL SCIENCES\n2.COMMERCE\n3.COMPUTER APPLICATION AND IT\n4.EDUCATION\n5.ENGINEERING AND ARCHITECTURE\n6.HOSPITALITY AND TOURISIM\n7.MANAGEMENT AND BUSINESS ADMINISTRATION\n8.SCIENCES\n"<<endl;
				cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
				cout<<"ENTER THE SERIAL NUMBER YOU WANTED TO ENTER"<<endl;
				cin>>artsandscience[2];}
				switch (artsandscience[2]){
					case 1:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"B.Lit----------------->20000 Rs PER ANUM\n\nBA ENGLISH----------------->15000 Rs PER ANUM\n\nBA TAMIL----------------->15000 Rs PER ANUM"<<endl;
						 goto begin;
						break;
					}
					case 2:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"B.Com----------------->10000 Rs PER ANUM\n\nB.Com COMPUTER APPLICATION------------------->15000 Rs PER ANUM"<<endl;
						 goto begin;
						break;
					}
					case 3:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"B.Sc COMPUTER SCIENCE------------------>25000 Rs PER ANUM\n\nBCA------------------->25000 Rs PER ANUM"<<endl;
						 goto begin;
						break;
					}
					case 4:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"B.Sc PHYSICAL EDUCATION--------------->10000 Rs PER ANUM"<<endl;
						 goto begin;
						break;
					}
					case 5:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"B.Sc ELECTRONICS AND COMMUNICATION--------------->25000 Rs PER ANUM"<<endl;
						 goto begin;
						break;
					}
					case 6:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"B.Sc HOTEL MANAGEMENT AND CATERING SCIENCE--------------->15000 Rs PER ANUM"<<endl;
						 goto begin;
						break;
					}
					case 7:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"BBA------------>20000 Rs PER ANUM"<<endl;
						 goto begin;
						break;
					}
					case 8:{
						cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"B.Sc BIOTECHNOLOGY--------------->30000 Rs PER ANUM\n\nB.Sc BOTANY----------------->15000 Rs PER ANUM\n\nB.Sc ZOOLOGY------------------>15000 Rs PER ANUM\n\nB.Sc MATHEMATICS ------------------->10000 Rs PER ANUM\n\nB.Sc PHYSICS---------------->10000 Rs PER ANUM\n\nB.Sc CHEMISTRY------------------>10000 Rs PER ANUM\n\n"<<endl;
						 goto begin;
						break;
					}
				}//group 3(case 3)ku ulla irruka switch oda closing bracket
				
				
				break;}//group 3(case 3)oda closing bracket
			
                }//group switch oda closing bracket
		    	
			break;}//course details (case 1)
			case 2:{
				cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
				hostel:{
				cout<<"THERE ARE TWO TYPES OF HOSTEL AC AND NON AC\nPRESS 1 FOR AC AND 2 FOR NON AC"<<endl;
				cin>>artsandscience[3];}
				{
				if(artsandscience[3]=1){
					cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
					cout<<"2 BED======>150000 Rs PER ANUM----->including food\n\n3 BED======>140000 Rs PER ANUM------>including food\n\n4 BED======>125000 Rs PER ANUM------>including food"<<endl;
					cout<<"***#WE HAVE FREE WIFI FACILITIES ALL OVER THE CAMPUS#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"***#WE HAVE INTERNATIONAL LEVEL FOOD WHICH IS GOVERNMENT APPROVED#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"***#WE HAVE NEAT AND CLEAN ENVIROINMENT#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"***#LAUNDRY IS AVAILABLE Rs 7000 PER YEAR#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					goto begin;
				}
				else{
					cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
						cout<<"2 BED======>250000 Rs PER ANUM----->including food\n\n3 BED======>240000 Rs PER ANUM------>including food\n\n4 BED======>225000 Rs PER ANUM------>including food"<<endl;
					cout<<"***#WE HAVE FREE WIFI FACILITIES ALL OVER THE CAMPUS#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"***#WE HAVE INTERNATIONAL LEVEL FOOD WHICH IS GOVERNMENT APPROVED#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"***#WE HAVE NEAT AND CLEAN ENVIROINMENT#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"***#LAUNDRY IS AVAILABLE Rs 7000 PER YEAR#***\n";
					cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
					goto begin;
				}
			}//if else oda closing bracket
								
				
				break;}//hostel details
			case 3:{
				placements:{
				cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
				cout<<"COGNIZANT====>30 LAKHS PER ANUM-----3 STUDENTS HAVE BEEN PLACED IN 2021\n\nWIPRO====>23 LAKHS PER ANUM-----3 STUDENTS HAVE BEEN PLACED IN 2021\n\nDXC====>15 LAKHS PER ANUM-----23 STUDENTS HAVE BEEN PLACED IN 2021\n\nTCS====>32 LAKHS PER ANUM-----11 STUDENTS HAVE BEEN PLACED IN 2021\n\nCAPGEMINI====>25 LAKHS PER ANUM-----8 STUDENTS HAVE BEEN PLACED IN 2021\n\nMPHASIS====>16 LAKHS PER ANUM-----26 STUDENTS HAVE BEEN PLACED IN 2021\n\nHEXAWARE====>7LAKHS PER ANUM-----38 STUDENTS HAVE BEEN PLACED IN 2021\n\nATOS====>9 LAKHS PER ANUM-----16 STUDENTS HAVE BEEN PLACED IN 2021\n\nQUEST ====>5 LAKHS PER ANUM-----57 STUDENTS HAVE BEEN PLACED IN 2021\n\nTECH MAHINDRA====>4 LAKHS PER ANUM-----20 STUDENTS HAVE BEEN PLACED IN 2021\n\nSASKEN====>6 LAKHS PER ANUM-----45 STUDENTS HAVE BEEN PLACED IN 2021\n\nZOHO====18 LAKHS PER ANUM-----10 STUDENTS HAVE BEEN PLACED IN 2021\n\nFACE PREP====>16.5 LAKHS PER ANUM-----12 STUDENTS HAVE BEEN PLACED IN 2021\n\nAVA SOFT====>3 LAKHS PER ANUM-----19 STUDENTS HAVE BEEN PLACED IN 2021\n\n";				
			}
				goto begin;
				break;
			}
		  }//course details oda switch

			break;}//first switch oda case1
    case 2:{
    	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
    	filehandling:{
    	cout<<"ENTER YOUR PASSWORD\n";
    	cin>>password;}
    {
		if(password==790444)	
    	{
		
    	ofstream outfile;
    	outfile.open("afile.txt");
    	outfile<<"YOUR DETAILS"<<endl;
    	outfile<<"NAME:";
    	outfile<<name<<endl;
    	outfile<<"AGE:";
    	outfile<<age<<endl;
    	outfile<<"FATHERS NAME:";
    	outfile<<fname<<endl;
    	outfile<<"FATHERS NAME:";
    	outfile<<pnumber<<endl;
    	outfile<<"EMAIL ID";
    	outfile<<mail<<endl;
    	outfile<<"STATE";
    	outfile<<state<<endl;
    	outfile<<"CITY:";
    	outfile<<city<<endl;
    	outfile.close();
    	ifstream infile;
    	infile.open("afile.txt");
    	
    //	cout>>"YOUR DETAILS">>endl;
    //	cout>>"NAME:"
    	cout<<name<<endl;
    //	cout>>"AGE:"
    	cout<<age<<endl;
    //		cout>>"FATHERS NAME:";
    	cout<<fname<<endl;
    //	cout>>"PHONE NUMBER:";
    	cout<<pnumber<<endl;
      //  cout>>"EMAIL:";	
    	cout<<mail<<endl;
    	//	cout>>"STATE:";
    	cout<<state<<endl;
    	//cout>>"CITY";
    	cout<<city<<endl;
    	
    	infile>>name;
    	
    	infile>>age;
    
    	infile>>fname;
    	
    	infile>>pnumber;
    	
    	infile>>mail;
    
    	infile>>state;
    	
    	infile>>city;
    /*	cout<<name<<endl;
    	cout<<age<<endl;
    	cout<<fname<<endl;
    	cout<<pnumber<<endl;
    	cout<<mail<<endl;
    	cout<<state<<endl;
    	cout<<city<<endl;*/
    	
    	infile.close();
    	cout<<"1.HOSTEL DETAILS\n2.PLACEMENTS\n3.EXIT APPLICATION\n";
    	cout<<"ENTER THE SERIAL NUMBER YOU WANT TO ENTER\n";
    	cin>>artsandscience[5];
    	switch(artsandscience[5]){
    		case 1:{
    			goto hostel;
				break;
			}
			case 2:{
				goto placements;
				break;
			}
			case 3:{
				goto exit;
				break;
			}
		}
    }
    else{
    	cout<<"YOUR PASSWORD IS WRONG.\nPLEASE RETRY...\n";
    	
    	goto filehandling;
	}}
    	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
    	goto begin;
				break;
	}
case 3:{
	exit:{
	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
	cout<<"THANK YOU FOR VISITING OUR UNIVERSITY\n";
	cout<<"*************^^^^^^^^^^^^^**********************^^^^^^^^^^^^^^^********************^^^^^^^^^^^^^***************"<<endl;
}
	break;
}
}//main switch
	return 0;
}
