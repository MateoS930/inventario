#include "producto.h"

#include <ctype.h>
#include <string.h>

void producto_calcular_utilidad(Producto *producto)
{
    if (producto == NULL)
    {
        return;
    }

    producto->utilidad_calculada = (producto->precio_venta - producto->precio_compra) * producto->cantidad;
}

int producto_es_codigo_valido(const char *codigo)
{
    size_t i;
    size_t longitud;

    if (codigo == NULL)
    {
        return 0;
    }

    longitud = strlen(codigo);
    if (longitud == 0 || longitud > 15)
    {
        return 0;
    }

    for (i = 0; i < longitud; ++i)
    {
        if (!isalnum((unsigned char)codigo[i]))
        {
            return 0;
        }
    }

    return 1;
}

int producto_es_nombre_valido(const char *nombre)
{
    if (nombre == NULL)
    {
        return 0;
    }

    return strlen(nombre) > 0 && strlen(nombre) <= 63;
}

int producto_es_categoria_valida(const char *categoria)
{
    if (categoria == NULL)
    {
        return 0;
    }

    return strlen(categoria) > 0 && strlen(categoria) <= 63;
}

int producto_es_precio_valido(double precio_compra, double precio_venta)
{
    return precio_compra > 0.0 && precio_venta > precio_compra;
}

int producto_es_cantidad_valida(int cantidad)
{
    return cantidad >= 0;
}
