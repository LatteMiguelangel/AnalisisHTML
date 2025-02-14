#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <map>
#include <string>
#include <vector>
#include "storage/htmlInfo.hpp"

class AnalisisHTML {
    public:

    AnalisisHTML();
    void init(std::string texto);
    EtiquetaInfo analizarHTML(const std::string texto);

    private:
    GuardarInformacion info = GuardarInformacion();
    std::map<std::string, std::vector<std::string>> obtenerAtributos(const std::string& match);
    std::vector<std::string> encontrarCoincidencias(std::string texto,std::string expresionRegular) ;
    std::string obtenerPrimeraPalabra(const std::string& texto);
    std::string obtenerUltimosDosCaracteres(const std::string& str);
    std::vector<std::string> joinVectors(std::vector<std::string>& vector1,  std::vector<std::string>& vector2);
};

#endif  // ENGINE_HPP
