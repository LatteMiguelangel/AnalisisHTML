#ifndef HTMLINFO_HPP
#define HTMLINFO_HPP
#include <string>
#include <map>
#include <vector>
#include "archive.hpp"

struct EtiquetaInfo {
    bool balanceado;
    std::vector<std::string> etiquetasNoPermitidas;
    std::map<std::string, std::vector<std::string>> atributosPorEtiqueta;
    std::map<std::string, std::vector<std::string>> enlacesPorEtiqueta;
    std::map<std::string, std::vector<std::string>> imagenesPorEtiqueta;
    std::map<std::string, int> contadorEtiquetas;
    int totalEtiquetas = 0;
};

class GuardarInformacion {
    public:
    
    GuardarInformacion();
    void save(EtiquetaInfo info );
    //EtiquetaInfo load( std::string String);

    private:
    std::string structToString(EtiquetaInfo info);
    //EtiquetaInfo stringToStruct( std::string String); 
    EtiquetaInfo info;
};


#endif // HTMLINFO_HPP