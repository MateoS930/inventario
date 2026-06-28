#ifndef IO_H
#define IO_H

#include "inventario.h"

int io_cargar_csv(Inventario *inventario, const char *ruta_archivo);
int io_guardar_csv(const Inventario *inventario, const char *ruta_archivo);
int io_resolver_ruta_default(char *buffer, size_t buffer_size, const char *argv0);

#endif
