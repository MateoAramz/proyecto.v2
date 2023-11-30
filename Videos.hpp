#include <iostream>
#include <string>
#ifndef VIDEO_HPP
#define VIDEO_HPP


class Video {
public:
    Video();
    Video(int id, std::string name, int dur);
    virtual ~Video(); // Destructor virtual
    virtual void MostrarCalificacion();
    void setCalificacion(int cal);
    int getCalificacion();
    std::string getNombre();
    void Reproduce();
    friend std::ostream &operator<<(std::ostream &out, const Video &t);
    virtual void MuestraVideo() = 0;
    virtual std::string getGenero() = 0;

protected:
    int ID;
    std::string Nombre;
    int Duracion;
    int Calificacion;
};

#endif
