/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Joseph Araya Moore / joedarayamo@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>
#include <string>

LibroCalificaciones::LibroCalificaciones(){
    
}

LibroCalificaciones::LibroCalificaciones(const std::string curso,int CAL[ESTUDIANTES][EXAMENES]){
    setNombreCurso(curso);
    for(int i=0;i<ESTUDIANTES;i++ ){
        for(int j=0;j<EXAMENES;j++){
            calificaciones[i][j]=CAL[i][j];
        }
    }
}

int LibroCalificaciones::obtenerNotaMinima(){
    int notaMin=calificaciones[0][0];
    for(int i=0;i<ESTUDIANTES;i++ ){
        for(int j=0;j<EXAMENES;j++){
            if(notaMin >= calificaciones[i][j]){
                notaMin = calificaciones[i][j];
            }
        }
    }
    return notaMin;
}

int LibroCalificaciones::obtenerNotaMaxima(){
    int notaMax=calificaciones[0][0];
    for(int i=0;i<ESTUDIANTES;i++ ){
        for(int j=0;j<EXAMENES;j++){
            if(notaMax <= calificaciones[i][j]){
                notaMax = calificaciones[i][j];
            }
        }
    }
    return notaMax;
}


double LibroCalificaciones::obtenerPromedio(int est){
    int Prom=0;
    int cont=0;
    for(int j=1;j<EXAMENES;j++){
        Prom+=calificaciones[est][j];
        cont++;
    }  
    return Prom/cont;
}

std::string LibroCalificaciones::obtenerReporteNotas(){
    int cant=1;
    std::string notas = "\n Las Notas del curso [Programacion 1] son:\n\t\t\t";
    while(cant <= EXAMENES){
        notas = notas + "\tExamen" + std::to_string(cant) + "\t";
        cant++;
    }
    notas = notas + "\tPromedio";
    for(int i=0;i<ESTUDIANTES;i++ ){
        notas = notas +"\nEstudiante("+ std::to_string(i+1) +")\t\t\t";
        for(int j=0;j<EXAMENES;j++){
            notas = notas + std::to_string(calificaciones[i][j]) +"\t\t";
        }
        notas = notas + std::to_string(obtenerPromedio(i));
    }
    return notas;
}

std::string LibroCalificaciones::obtenerReporteNotasMaxMin(){
    std::string reporte;
    reporte ="\nLa nota minima es: [" + std::to_string(obtenerNotaMinima()) + "]\n";
    reporte +="\nLa nota maxima es: [" + std::to_string(obtenerNotaMaxima()) + "]\n";
    
    return reporte;
}

void LibroCalificaciones::setNombreCurso(std::string nombreCurso) {
        this->nombreCurso = nombreCurso;
    }

std::string LibroCalificaciones::getNombreCurso(){
        return nombreCurso;
    }

