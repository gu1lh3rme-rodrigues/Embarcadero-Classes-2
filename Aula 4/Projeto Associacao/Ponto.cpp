#pragma once
#include "Ponto.h"
//Ponto.H header of Ponto.cpp, who's the 'body' of the page


void Ponto:: Ponto(int _id, int _x, int _y){
		id = _id;
		x = _x;
		y = _y;
	
			
		int Ponto:: getId(){
			return id;
		}
			
		int Ponto:: getX(){
			return x;
		}
			
		int Ponto:: getY(){
			return y;
		}
		//Set---------------------------------------
			
		void Ponto:: setId(int _id){
			id = _id;
		}
			
		void Ponto:: setX(int _x){
			id = _id;
		}
			
		void Ponto:: setY(int _y){
			y = _y;
		}
}		