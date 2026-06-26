#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <stddef.h>

typedef struct
{
    char codigo[16];
    char nombre[64];
    char categoria[64];
    double precio_compra;
    double precio_venta;
    int cantidad;
    double utilidad_calculada;
} Producto;

void producto_calcular_utilidad(Producto *producto);
int producto_es_codigo_valido(const char *codigo);
int producto_es_nombre_valido(const char *nombre);
int producto_es_categoria_valida(const char *categoria);
int producto_es_precio_valido(double precio_compra, double precio_venta);
int producto_es_cantidad_valida(int cantidad);

#endif
