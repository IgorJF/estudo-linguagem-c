#include <stdio.h>
#include <SDL2/SDL.h>
#include "camera.h"

tCamera3d *criaCamera();

void defineCamera(tCamera3d *camera, float posX, float posY, float posZ, float focX, float focY, float focZ, float cimX, float cimY, float cimZ);

void desalocaCamera(tCamera3d *objeto);
