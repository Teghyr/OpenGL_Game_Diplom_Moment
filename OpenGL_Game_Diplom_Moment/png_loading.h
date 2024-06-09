#ifndef LOADERS_PNG_LOADING_H_
#define LOADERS_PNG_LOADING_H_
#include <lpng1643/png.h>
#include <string>

class Texture;

extern Texture* load_texture(std::string filename);

#endif /* LOADERS_PNG_LOADING_H_ */
