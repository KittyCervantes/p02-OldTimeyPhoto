//Author: Bianca Cervantes

#include<iostream>
#include<string>
#include<vector>
#include"bitmap.h"

using namespace std;

int main()
{
        Pixel rgb;
        int color;
        string usrimage;
        Bitmap  bmpimage;
        vector <vector <Pixel> > bmp;

        bmp.resize(1);

        //ask for bmp formated image from user
        do{
                cout<<"Please upload valid 24 bit depth bmp image: "<<endl;
                cin>>usrimage;
        bmpimage.open(usrimage);
        }
        while(bmpimage.isImage() == false); //check to see if thats right
 
        bmp = bmpimage.toPixelMatrix(); //"bmpimage" or "image" here?

        //convert pixel to grey scale equivalents

        for(int row=0;row<usrimage.size();row++)
        {

        
                for(int column=0;column<usrimage.size();column++)
                {
                rgb = bmp[row][column]; 
                color=(rgb.red + rgb.green + rgb.blue)/3;
                
                               
                }
       
       }
        //find average of component red, green and blue
        //assign rgb average value
        //repeat until all pixels are converted in picture

        //save new picture as oldtimey.bmp
        bmpimage.fromPixelMatrix(bmp);
        bmpimage.save("oldtimey.bmp");


        return 0;
}







