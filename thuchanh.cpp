#include<bits/stdc++.h>
using namespace std;
struct Student{
	char maSV[10];
	char firstName[50];
	char lastName[50];
	float score;
};
struct Node{
	Student infor;
	Node *next;
	
};
typedef Node *Tro;
void ktao(Tro &l){
	l = NULL;
}
int isEmpty(Tro &l){
	return l == NULL;
}
void inputStu(Student &s){
	cout<<"\n Nhap ma sinh vien : ";cin>>s.maSV;
	cout<<"\n Nhap ho dem : ";cin>>s.firstName;
	cout<<"\n Nhap ten sv : ";cin>>s.lastName;
	cout<<"\n Nhap diem trung binh : ";cin>>s.score;
}
void inputList(Tro &l){
	ktao(l);
	Student s;
	Tro p,q;
	int i = 0;
	char answer;
	do{
		cout<<"\n Nhap sv thu "<<i+1<<endl;
		inputStu(s);
		p = new (Node);
		p->infor = s;
		p->next = NULL;
		if(l == NULL){
			l = p;
		}
		else{
			q->next = p;
		}
		q = p;
		i++;
		cout<<"\n Ban co muon nhap them sv (c/k): ";cin>>answer;
	}
	while(answer == 'c');
}
void display(Tro &l){
	if(isEmpty(l)){
		cout<<"\n Danh sach rong ";
		return;
	}
	else{
		Tro q = l;
		int i = 0;
		while( q != NULL){
			Student s =q->infor;
			cout<<"\n STT: "<<i+1;
			cout<<"\n Ma: "<<s.maSV;
			cout<<"\n Ho dem : "<<s.firstName;
			cout<<"\n Ten: "<<s.lastName;
			cout<<"\n Diem tb : "<<s.score;
			q = q->next;
			i++;
		}
	}
}
int main(){
	Tro l;
	inputList(l);
	display(l);
	return 0;
}