#include <iostream>
#include <string.h>
using namespace std;
using std::string;

        
        
#ifndef ROBOCOP_H
#define	ROBOCOP_H

class Robocop {
public:
    Robocop();//construtor
    inline Robocop(string nome, int id, int velocidade, bool atirar, bool parar, bool perseguicao, bool prender, bool revista, bool );
    const inline void setNome();
    string getNome();
    int getID();
    //void setID();
    void setMover();
    bool getMover();
    bool getParar();
    const int VelocidadeMaxima(int *velocidade);
    void setAtirar();
    bool getAtirar();
    bool getFazerRevista();
    bool getPerseguicao();
    bool getPrender();
    
    Robocop(const Robocop& orig);
    virtual ~Robocop();
private:
    string nome;
    int id;
    int velocidade;
    bool atirar;
    bool mover;
    bool parar;
    bool perseguicao;
    bool prender;
    bool revista;
};

#endif	/* ROBOCOP_H */

