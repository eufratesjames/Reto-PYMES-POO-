#include <iostream>
#include <stdlib.h>

using namespace std;

class PYME {
	private:
		string nombre, razon_social, direccion, nombre_del_director;
		int num_trabajadores;
		float pesos_generados;
	public:
		PYME();
		void setNombre(string);
		void setRazon_S(string);
		void setDir(string);
		void setCEO(string);
		void setNumTrab(int);
		void setPesosGen(float);
		string getNombre();//de la 19 a la 25 no son tan necesarios xd
		string getRazonS();
		string getDir();
		string getCEO();
		int getNumTrab();
		float getPesosGen();
		void mostrarPYME();
		void mostrarPYMEdatos();
		void setPYMEdatos(string, string, string);
		
};

PYME::PYME(){
		
}

void PYME::setNombre(string _nombre){
	nombre = _nombre;
}

void PYME::setRazon_S(string _raz){
	razon_social = _raz;
}

void PYME::setDir(string _direccion){
	direccion = _direccion;
}

void PYME::setCEO(string _nombreCEO){
	nombre_del_director = _nombreCEO;
}

void PYME::setNumTrab(int _trab){
	num_trabajadores= _trab;
}

void PYME::setPesosGen(float _dinerogen){
	pesos_generados = _dinerogen;
}

void PYME::mostrarPYME(){
	cout<<"NOMBRE"<<"\t"<<"RAZON S."<<"\t"<<"DIRECCION"<<"\t"<<"NOMBRE DEL DIRECTOR"<<"\t"<<"NO. EMPLEADOS"<<"\t"<<"PESOS GENERADOS"<<endl;
	cout<<nombre<<"\t"<<razon_social<<"\t"<<direccion<<"\t"<<nombre_del_director<<"\t"<<num_trabajadores<<"\t"<<pesos_generados<<endl;
}

void PYME::mostrarPYMEdatos(){
    cout<<"NOMBRE EMPRESA"<<"\t"<<"RAZON S. EMPRESA"<<"\t"<<"DIRECCION EMPRESA"<<endl;
	cout<<nombre<<"\t"<<razon_social<<"\t"<<direccion<<<<endl;			
}

void PYME::setPYMEdatos(string _nombreEmp, string _razon, string _direccion1){
	nombre = _nombreEmp;
	razon_social = _razon;
	direccion = _direccion;
}

class Empleado: public PYME {
		private:
			string nombreEmp, edadEmp, puestoEmp;
			int edad, sueldo;
		public:
			void setnombreEmp(string);
			void setEdadEmp(int);
			void set_puestoEmp(string);
			void set_edad(int);
			void set_sueldo(int);		
};




int main(){
	return 0;	
	
}

