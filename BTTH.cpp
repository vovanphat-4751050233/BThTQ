#include<iostream>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char name[50];
    char birth [10];
    char gender [10];
    float gpa;
} Student ;
typedef struct {
    Student *data;
    int size;
    int capacity;
} Vector;
void vector_init(Vector * v){
    v->size = 0;
    v->capacity = 4;
    v->data = (Student * ) malloc (v->capacity * sizeof(Student));

}
void vector_push_back(Vector * v, Student s){
    if (v->size >= v->capacity){
        v->capacity *=2;
        v->data = (Student *) realloc (v->data,v->capacity *sizeof(Student));
    }
    v->data[v->size++] = s;
}
    void vector_remove_at (Vector*v, int index ){
        if(index < 0 || index >= v->size) return ;
        for(int i = index ; i < v->size -1 ; i++)
        v->data[i] = v->data [i+1];
        v->size --;
    }
void vector_free(Vector *v){
    free (v->data);
    v->data = NULL;
    v->size = 0 ;
    v->capacity = 0 ;
}
void printf_Student (Student s){
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Birth: " << s.birth << std::endl;
    std::cout << "Gender: " << s.gender << std::endl;
    std::cout << "GPA: " << s.gpa << std::endl;
}
void showAll (Vector *v){
if (v->size ==0) {   
    printf ("List rong !\n");
        std::cout << "------------------" << std::endl;
    }
}
void findByName (Vector *v, const char * name){
    for (int i =0 ; i < v->size ; i++){
        if (strcmp (v->data[i].name,name) ==0){
            printf_Student (v->data[i]);
            std::cout << "------------------" << std::endl;
            return ;
        }
    }
    std::cout << "Khong tim thay sinh vien co ten " << name << std::endl;
}
void sortByGPA (Vector *v){
    for (int i =0 ; i < v->size -1 ; i++){
        for (int j = i +1 ; j < v->size ; j++){
            if (v->data[i].gpa > v->data[j].gpa){
                Student temp = v->data[i];
                v->data[i] = v->data[j];
                v->data[j] = temp;
            }
        }
    }
}
void sortByName (Vector *v){
    for (int i =0 ; i < v->size -1 ; i++){
        for (int j = i +1 ; j < v->size ; j++){
            if (strcmp (v->data[i].name,v->data[j].name) >0){
                Student temp = v->data[i];
                v->data[i] = v->data[j];
                v->data[j] = temp;
            }
        }
    }
}
int main (){
    Vector v;
    vector_init(&v);
    Student s1;
    strcpy (s1.name,"Đỗ Thiên Hà");
    strcpy (s1.birth,"2000-01-01");
    strcpy (s1.gender,"Female");
    s1.gpa = 3.5;
    vector_push_back(&v,s1);
    Student s2;
    strcpy (s2.name,"Phùng Minh Tuấn");
    strcpy (s2.birth,"1999-05-12");
    strcpy (s2.gender,"Male");
    s2.gpa = 3.8;
    vector_push_back(&v,s2);
    Student s3;
    strcpy (s3.name,"Nguyễn Văn An");
    strcpy (s3.birth,"2001-09-23");
    strcpy (s3.gender,"Male");
    s3.gpa = 3.2;
    vector_push_back(&v,s3);
    std::cout << "Student list:" << std::endl;
    for(int i = 0 ; i < v.size ; i++){
        printf_Student (v.data[i]);
        std::cout << "------------------" << std::endl;
    }
    std::cout << "Removing student at index 1" << std::endl;
    vector_remove_at(&v,1);
    std::cout << "Updated student list:" << std::endl;
    for(int i = 0 ; i < v.size ; i++){
        printf_Student (v.data[i]);
        std::cout << "------------------" << std::endl;
    }
    vector_free(&v);
    return 0 ;
}              
