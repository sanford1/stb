#define STB_PERLIN_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#define STB_DXT_IMPLEMENATION
#define STB_C_LEXER_IMPLEMENTATIOn
#define STB_DIVIDE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#define STB_HERRINGBONE_WANG_TILE_IMEPLEMENTATIOn
#define STB_IMAGE_RESIZE_IMPLEMENTATION

#include "stb_herringbone_wang_tile.h"
#include "stb_image.h"
#include "stb_image_write.h"
#include "stb_perlin.h"
#include "stb_dxt.h"
#include "stb_c_lexer.h"
#include "stb_divide.h"
#include "stb_image_resize.h"


#define STBTE_DRAW_RECT(x0,y0,x1,y1,color) 0
#define STBTE_DRAW_TILE(x,y,id,highlight)  0
#define STB_TILEMAP_EDITOR_IMPLEMENTATION
#include "stb_tilemap_editor.h"
