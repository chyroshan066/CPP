#include<iostream>
#include<string>

using namespace std;

class Media{
    protected:
        string title, publication;
    public:
        virtual void readData(){
            //cin.ignore();
            cout<< "Enter title: ";
            getline(cin, title);
            //cin.ignore();
            cout<< "Enter the name of the publication: ";
            getline(cin, publication);
            //cin.ignore();
        }
        virtual void showData(){
            cout<< "Title: "<< title<< endl;
            cout<< "Publication: "<< publication<< endl;
        }
};

class Book: public Media{
    private:
        int no_of_pages;
    public:
        void readData(){
            cout<< endl<< "Enter data for book: "<< endl;
            Media::readData();
            cout<< "Enter the number of pages: ";
            cin>> no_of_pages;
        }
        void showData(){
            cout<< endl<< "Data for book: "<< endl;
            Media::showData();
            cout<< "Number of pages: "<< no_of_pages<< endl;
        }
};

class DVD: public Media{
    private:
        int hr, min, sec;
    public:
        void readData(){
            cout<< endl<< "Enter data for DVD: "<< endl;
            Media::readData();
            cout<< "Enter time duration: "<< endl;
            cout<< "Hour: ";
            cin>> hr;
            cout<< "Minute: ";
            cin>> min;
            cout<< "Second: ";
            cin>> sec;
        }
        void showData(){
            cout<< endl<< "Data for DVD: "<< endl;
            Media::showData();
            cout<< "Duration: "<< hr<< "hr "<< min<< "min "<< sec<< "sec"<< endl;
        }
};

int main()
{
    Media media;
    Book book;
    DVD dvd;
    Media* mptr[3] = {&media, &book, &dvd};
    for(int i=0; i<3; i++){
        if(i == 0){
            cout<< endl<< "Enter data for media: "<< endl;
            mptr[i] -> readData();
        }
        else
            mptr[i] -> readData();
    }
    for(int i=0; i<3; i++){
        if(i == 0){
            cout<< endl<< "Data for media: "<< endl;
            mptr[i] -> showData();
        }
        else
            mptr[i] -> showData();
    }
    return 0;
}