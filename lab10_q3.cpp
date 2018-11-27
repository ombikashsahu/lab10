

#include<iostream>
using namespace std;

class Rectangle {
   public:
      double length;         // Length of a rectangle
      double breadth;        // Breadth of a rectangle

      // Member functions declaration
      double getArea(void);
      double getPerimeter(void);
      void setLength( double len );
      void setBreadth( double bre );    
};

// Member functions definitions
double Rectangle::getArea(void) {
   return length * breadth;
}

double Rectangle::getPerimeter(void) {
   return 2*(length + breadth);
}


void Rectangle::setLength( double len ) {
   length = len;
}

void Rectangle::setBreadth( double bre ) {
   breadth = bre;
}


// Main function for the program
int main() {
   Rectangle Rectangle1;                
   Rectangle Rectangle2;                
   double Area1 = 0.0;    
   double Perimeter1 = 0.0;     
   double Area2 = 0.0;     
   double Perimeter2 = 0.0;     
   
   double len,bre;
   cout<<"enter length for rect1: ";
   cin>>len;
   cout<<"enter breadth for rect1: ";
   cin>>bre;

// rectangle 1 specification
   Rectangle1.setLength(len); 
   Rectangle1.setBreadth(bre); 

   // area of box 1
   Area1 = Rectangle1.getArea();
   cout << "Area of Rectangle1 : " << Area1 <<endl;

   // perimeter of box 1
   Perimeter1 = Rectangle1.getPerimeter();
   cout << "Perimeter of Rectangle1 : " << Perimeter1 <<endl;

    double len1,bre1;
   cout<<"enter length for rect2: ";
   cin>>len1;
   cout<<"enter breadth for rect2: ";
   cin>>bre1;
 
   // Rectangle 2 specification
   Rectangle2.setLength(len1); 
   Rectangle2.setBreadth(bre1); 
 
   // area of box 2
   Area2 = Rectangle2.getArea();
   cout << "Area of Rectangle2 : " << Area2 <<endl;

   // perimeter of box 2
   Perimeter2 = Rectangle2.getPerimeter();
   cout << "Perimeter of Rectangle2 : " << Perimeter2 <<endl;


   //for area comparision
   if(Area1==Area2)
    {
     cout<<"area of both rectangles are same"<<endl; 
    }
   else if(Area1 < Area2)
    {
     cout<<"area of rectangle1 is less than the rectangle2"<<endl; 
    }
   else
    {
     cout<<"area of rectangle1 is more than the rectangle2"<<endl; 
    }

    //for perimeter comparision
   if(Perimeter1==Perimeter2)
    {
     cout<<"perimeter of both rectangles are same"<<endl; 
    }
   else if(Perimeter1 < Perimeter2)
    {
     cout<<"Perimeter of rectangle 1 is less than the rectangle2"<<endl; 
    }
   else
    {
     cout<<"Perimeter of rectangle 1 is more than the rectangle2"<<endl; 
    }

return 0;
}
