
#include "Robocop.h"

Robocop::Robocop(){
    string nome= "";
    int id = 0;
    int velocidade = 80; // O ROBOCOP pode ter uma velocidade de no máximo 80 km/h
    bool atirar = false;
    bool mover = false;
    bool parar = false;
    bool perseguicao = false;
    bool prender = false;
    bool revista = false;
}

Robocop::Robocop(const string nome,const int id,const int velocidade, bool atirar, bool mover, bool parar, bool perseguicao, bool prender, bool revista) {
    Robocop::nome = nome;
    Robocop::id = id;
    Robocop::velocidade = velocidade;
    Robocop::mover = mover;
    Robocop::parar = parar;
    Robocop::perseguicao = perseguicao;
    Robocop::prender = prender;
    Robocop::revista = revista;
    Robocop::atirar = atirar;
}

string Robocop::getNome(string *nome){
    return nome;
}
const inline void Robocop::setNome(string nome){
        string NOME;
    nome = NOME; // diferenciaçao com letra maiuscula porque sao variaveis diferentes.
    cout<<" O nome e: "<< nome << "" <<endl;
}
string Robocop::getNome(){
    return nome;
}


int Robocop::getID(){
    return id;
}

void Robocop::setMover() {
    Robocop::mover = mover;
}

bool Robocop::getMover(){ 
    return mover;
}
bool Robocop::getParar(){
    return parar;
 }

const int Robocop::VelocidadeMaxima(int *velocidade){
    Robocop::velocidade = *velocidade;
}
void Robocop::setAtirar(){ 
    Robocop::atirar = atirar;
}
bool Robocop::getAtirar(){ 
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

