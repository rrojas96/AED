#include <iostream>
int main()
{
	char nombre[20] = "Rodrigo";		
	int edad = 22;				
	bool esMayor;			
	char sexo='M';					
    std::cout <<"Señor "<<nombre<<"\n";				
	std::cout <<"Tiene "<<edad<<" de edad" <<"\n";	
	esMayor = edad >= 18;		
	if(esMayor==true)		
	{
		std::cout <<"Usted es mayor de edad. ";
		if (sexo == 'M')				
			std::cout <<"Es hombre. ";		
	}
}
