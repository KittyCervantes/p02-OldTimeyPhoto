//Author: Bianca Cervantes
#include<iostream>
#include<string>
#include<vector>
#include"bitmap.h"


int main()
{
        Pixel rgb;
        Bitmap image;
        vector <vector <Pixel> > bmp;


        //ask for bmp formated image from user


        do{
        cout<<"Please upload valid bmp image: "<<endl;
        cin>>image<<endl;
        }
        while(image!=bmp) //check to see if thats right
        

        image.open(image);
        bmp = image.toPixelMatrix();


        //convert pixel to grey scale equivalents
        for( ; ; )
        {

        }
        //find average of component red, green and blue
        //assign rgb average value
        //repeat until all pixels are converted in picture

        //save new picture as oldtimey.bmp

        image.fromPixelMatrix(bmp);
        image.save("machupicchu.bmp");


        return 0;
}







