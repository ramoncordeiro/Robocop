
#include "Robocop.h"

Robocop::Robocop(string) {
    setNome(nome);
}
inline void Robocop::setNome(string nome){
        //string NOME;
    //nome = NOME; // diferenciaçao com letra maiuscula porque sao variaveis diferentes.
    cout<<" O nome e: "<< nome << "" <<endl;
}
string Robocop::getNome(){
    return nome;
}

void Robocop::setID(int ID){
    cout<<" O nome e: "<< ID << "" <<endl;
    }
int Robocop::getID(){
    return id;
}

void Robocop::setMover() {
    Robocop::mover = mover;
}

bool Robocop::getMover(){ //Caso de Analisar COMO os outros que precisam. ATIRAR
    return mover;
}
bool Robocop::getParar(){// Caso similar ao do ATIRAR, analisar
    return parar;
 }

int Robocop::VelocidadeMaxima(int *velocidade){
    Robocop::velocidade = *velocidade;
}
void Robocop::setAtirar(){ //COnstrutor com Parametro Defaults
    Robocop::atirar = atirar;
}
bool Robocop::getAtirar(){ // 
      return atirar;
}


bool Robocop::getFazerRevista(){
    return revista;
}

bool Robocop::getPerseguicao(){ 
    return perseguicao;
}

void Robocop::getPrender(){ 
    return prender;
}


Robocop::Robocop(const Robocop& orig) {
}

Robocop::~Robocop() {
}

