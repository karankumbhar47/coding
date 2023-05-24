#include<iostream>
#include<vector>
#include<array>
#include <bits/stdc++.h>
#include<limits>
#include <string> 

using namespace std;

class Point{
	public:
		int num;
		int parent=0 ;
		int Discover =  2147483647;
		int Final = 2147483647; 
		string color = "white";
		vector<Point*> neighbours;
		Point(int number);
};

Point::Point(int number){
	num = number;
}

void DFS_Visit(Point  pointsArray[],int index,int &time,int size,int &cycle);

void DFS(Point  pointsArray[],int size){
	int time = 0;
	int cycle;
	for(int i =0 ; i<size;i++){
		if( pointsArray[i].color == "white"){
			DFS_Visit(pointsArray,i ,time,size,cycle);
		}
	}	
}

void DFS_Visit(Point  pointsArray[],int index,int &time,int size,int &cycle){
	time += 1;
	pointsArray[index].Discover = time;
	pointsArray[index].color = "gray";
	for(auto n :pointsArray[index].neighbours ){
		if (pointsArray[n->num-1].color == "white"){
			cout<<pointsArray[index].num<<" -> "<<pointsArray[n->num-1].num<<" tree edge"<<endl;
			pointsArray[n->num - 1].parent = pointsArray[index].num ;
			DFS_Visit(pointsArray,n->num - 1,time,size,cycle);
		}
		else{
			if(pointsArray[n->num-1].color=="gray"){
				cycle+=1;
				cout<<pointsArray[index].num<<" -> "<<pointsArray[n->num-1].num<<" backedge"<<endl;
				cout<<"=========================="<<endl;
				cout<<"cycle detected... "<<endl;
				cout<<"number of cycles ==>"<<cycle<<endl;
				cout<<"=========================="<<endl;
			}
			
			else{	
				if(pointsArray[index].Discover<pointsArray[n->num-1].Discover && pointsArray[index].Final>pointsArray[n->num-1].Final){
					cout<<pointsArray[index].num<<" -> "<<pointsArray[n->num-1].num<<" forward edge"<<endl;
				}
				else{
					cout<<pointsArray[index].Discover<<" "<<pointsArray[n->num-1].Discover<<" "<<pointsArray[index].Final<<" "<<pointsArray[n->num-1].Final<<endl;
					cout<<pointsArray[index].num<<" -> "<<pointsArray[n->num-1].num<<" cross edge"<<endl;
				}

			}			
			
		}
	}
	
	pointsArray[index].color= "black";
	time += 1;
	pointsArray[index].Final = time;
	for(int i = 0; i<size ; i++){
		cout<<pointsArray[i].num<<" "<<pointsArray[i].parent<<" "<<pointsArray[i].color<<" "<<pointsArray[i].Discover<<" "<<pointsArray[i].Final<<endl;
	}
	cout<<"=========================="<<endl;

	
}

int graph_1(Point &points[]){
	Point p1(1),p2(2),p3(3),p4(4),p5(5),p6(6),p7(7),p8(8),p9(9);
	int size = 9;
        p1.neighbours.push_back(&p2);
        p1.neighbours.push_back(&p3);
        p1.neighbours.push_back(&p4);
        p2.neighbours.push_back(&p4);
        p3.neighbours.push_back(&p2);
        p4.neighbours.push_back(&p7);
        p6.neighbours.push_back(&p4);
        p7.neighbours.push_back(&p6);
        p5.neighbours.push_back(&p6);
        p5.neighbours.push_back(&p8);
        p5.neighbours.push_back(&p9);
        p8.neighbours.push_back(&p9);
	points[9] = {p1,p2,p3,p4,p5,p6,p7,p8,p9};
	return size;
}


int main(){
	//Point p1(1),p2(2),p3(3),p4(4),p5(5),p6(6),p7(7),p8(8),p9(9);
	//p1.neighbours.push_back(&p2);
	//p1.neighbours.push_back(&p3);
	//p1.neighbours.push_back(&p4);
	//p2.neighbours.push_back(&p4);
	//p3.neighbours.push_back(&p2);
	//p4.neighbours.push_back(&p7);
	//p6.neighbours.push_back(&p4);
	//p7.neighbours.push_back(&p6);
	//p5.neighbours.push_back(&p6);
	//p5.neighbours.push_back(&p8);
	//p5.neighbours.push_back(&p9);
	//p8.neighbours.push_back(&p9);
	//Point points[9] = {p1,p2,p3,p4,p5,p6,p7,p8,p9};
	Point points[];
	int size = graph_1(points);
	DFS(points,size);
	
		
	for(auto point : points){
		cout<<point.num<<" "<<point.color<<" "<<point.Discover<<" "<<point.Final<<endl;
	}
	
	return 0;
}
