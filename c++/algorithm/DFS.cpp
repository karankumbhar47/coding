#include<iostream>
#include<vector>
#include<array>
#include <bits/stdc++.h>
#include <string> 

using namespace std;

class Point{
	public:
		int num;
		int parent=0 ;
		int Discover=-1; 
		int Final=-1;
		string color = "white";
		vector<Point*> neighbours;
		Point(int number);
};

Point::Point(int number){
	num = number;
}

void DFS_Visit(Point  pointsArray[],int index,int &time,int size);

void DFS(Point  pointsArray[],int size){
	int time = 0;
	for(int i =0 ; i<size;i++){
		if( pointsArray[i].color == "white"){
			DFS_Visit(pointsArray,i ,time,size);
		}
	}	
}

void DFS_Visit(Point  pointsArray[],int index,int &time,int size){
	time += 1;
	pointsArray[index].Discover = time;
	pointsArray[index].color = "gray";
	for(auto n :pointsArray[index].neighbours ){
		if (pointsArray[n->num-1].color == "white"){
			pointsArray[n->num - 1].parent = pointsArray[index].num ;
			DFS_Visit(pointsArray,n->num - 1,time,size);
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

int main(){
	Point p1(1),p2(2),p3(3),p4(4),p5(5),p6(6),p7(7),p8(8),p9(9);
	p1.neighbours.push_back(&p2);
	p1.neighbours.push_back(&p3);
	p1.neighbours.push_back(&p4);
	p2.neighbours.push_back(&p4);
	p3.neighbours.push_back(&p2);
	p4.neighbours.push_back(&p7);
	p6.neighbours.push_back(&p4);
	p6.neighbours.push_back(&p7);
	p7.neighbours.push_back(&p6);
	p5.neighbours.push_back(&p6);
	p5.neighbours.push_back(&p8);
	p5.neighbours.push_back(&p9);
	p8.neighbours.push_back(&p9);
	Point points[9] = {p1,p2,p3,p4,p5,p6,p7,p8,p9};

	for(auto element : p2.neighbours){
		cout << element->num << " "; 
	}
	cout<<endl;

	DFS(points,9);
	
		
	for(auto point : points){
		cout<<point.num<<" "<<point.color<<" "<<point.Discover<<" "<<point.Final<<endl;
	}
	
	return 0;
}
