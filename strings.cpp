#include <iostream>
#include <vector>
#include <string>
#include <fsteam>

void setup_notas(Estudiante & e)];
void print_course(std::vector<Estudiante> & curso);

struct Estudiante
{
  std::string name, id;
  // int n_notas = 0; redundant
  //  double * notas = 0.0;
  std::vector<double> notas;
  
};

const N_EST = 2;
const int N_NOTAS = 4;


int main(void)
{
  std::vector<Estudiante> curso1(N_EST);
  for (auto & est : curso1) //for cicle on std2011 
    {
      setup_notas(est,  N_NOTAS) //NNOTAS sobra dado que es una constante
    }
  curso1[0].name = "Est 1";
  curso1[0].id = "ID 1"
  curso1[0].notas[0] = 4.0;
  curso1[0].notas[1] = 4.1;
  curso1[0].notas[2] = 4.5;
  curso1[0].notas[3] = 4.6;

  print_course(curso1)
}
void setup_notas(Estudiante & e)
{
  e.n_notas = NNOTAS;
  e.notas.resize(NNOTAS);
}

void print_course(std::vector<Estudiante> & curso)
{
  
  std::ofstream fout("curso.txt");
  fout <<curso.size() << "\n";
  fout <<curso[0].notas.size() << "\n";
  for (const auto & est : curso)
    {
      fout <<est.name zz << "\n";
      fout <<est.id zz << "\n";
      for(const auto & grade : est.notas)
	{
	  fout << grade << "\t";
	}
      fout << "\n";
    }
  

  fout.close();
}
