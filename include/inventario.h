#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "producto.h"

#include <stddef.h>

typedef struct
{
    Producto *productos;
    size_t cantidad;
    size_t capacidad;
} Inventario;

void inventario_inicializar(Inventario *inventario);
void inventario_liberar(Inventario *inventario);
int inventario_agregar_producto(Inventario *inventario, const Producto *producto);
int inventario_buscar_por_codigo(const Inventario *inventario, const char *codigo);
int inventario_buscar_por_nombre(const Inventario *inventario, const char *texto);
int inventario_actualizar_producto(Inventario *inventario, size_t indice, const Producto *producto_actualizado);
int inventario_eliminar_producto(Inventario *inventario, const char *codigo);
void inventario_recalcular_utilidades(Inventario *inventario);
double inventario_calcular_utilidad_total(const Inventario *inventario);

#endif
