#pragma once /*Diretivo de de compilação que serve 
para fazer com que o ficheiro atual seja apenas incluido 
uma unica vez durante o processo de compilação */

class Ponto {
	private:
		int id;
		int x;
		int y;
		
		public:
			void setId(int val);
			int getId();
			void setX(int val);
			int getX();
			void setY(int val);
			int getY ();
};