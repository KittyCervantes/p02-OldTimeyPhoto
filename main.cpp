//Author: Bianca Cervantes
#include<iostream>
#include<string>
#include<vector>
#include"bitmap.h"


int main()
{
        Pixel rgb;
        Bitmap  bmpimage;
        vector <vector <Pixel> > bmp;

        //ask for bmp formated image from user
        do{
                cout<<"Please upload valid 24 bit depth bmp image: "<<endl;
                cin>>bmpimage<<endl;
        }
        while(bmpimage!=*.bmp) //check to see if thats right
                image.open(bmpimage);
        bmp = bmpimage.toPixelMatrix();//would I put "bmpimage" or "image" here?

        //convert pixel to grey scale equivalents

        for(Pixel row=0;row<bmpimage.size();row++)
        {


                for(Pixel column=0;column<bmpimage.size();column++)
                {

                }
       
       }
        //find average of component red, green and blue
        //assign rgb average value
        //repeat until all pixels are converted in picture

        //save new picture as oldtimey.bmp
        image.fromPixelMatrix(bmp);
        image.save("oldtimey.bmp");


        return 0;
}







