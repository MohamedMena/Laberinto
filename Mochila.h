#ifndef MOCHILA_H
#define MOCHILA_H


class Mochila
{
    private:
        Elemento* primero;
        int cantidad;

    public:
        Mochila();
        ~Mochila();

        void agregarElemento(string nombreElemento);
        void eliminarElemento(string nombreElemento);
        bool estaVacia();
        Elemento* buscarElemento(string nombreElemento);
};

#endif // MOCHILA_H
