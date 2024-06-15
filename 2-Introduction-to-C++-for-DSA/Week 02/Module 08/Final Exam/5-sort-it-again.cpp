#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int english_marks; 

};

int main() {
    int n;
    cin >> n;
    Student students[n];
    for(int i=0; i<n; i++) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].english_marks;
    }
    //sort by total marks only
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(students[i].english_marks < students[j].english_marks) {
                swap(students[i], students[j]);
            }
            else if(students[i].english_marks == students[j].english_marks) {
                if(students[i].math_marks < students[j].math_marks) {
                    swap(students[i], students[j]);
                }
                else if(students[i].math_marks == students[j].math_marks) {
                    if(students[i].id > students[j].id) {
                        swap(students[i], students[j]);
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].english_marks << endl;
    }
}