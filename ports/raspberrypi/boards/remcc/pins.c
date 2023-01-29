#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_RECORD), MP_ROM_PTR(&pin_GPIO2) },
    { MP_ROM_QSTR(MP_QSTR_GP2), MP_ROM_PTR(&pin_GPIO2) },
    
    { MP_ROM_QSTR(MP_QSTR_BOOT), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_GP3), MP_ROM_PTR(&pin_GPIO3) },

    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_GP8), MP_ROM_PTR(&pin_GPIO8) },

    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_GP9), MP_ROM_PTR(&pin_GPIO9) },
    
    { MP_ROM_QSTR(MP_QSTR_TEMP), MP_ROM_PTR(&pin_GPIO11) },
    { MP_ROM_QSTR(MP_QSTR_GP11), MP_ROM_PTR(&pin_GPIO11) },
    
    { MP_ROM_QSTR(MP_QSTR_SDA1), MP_ROM_PTR(&pin_GPIO22) },
    { MP_ROM_QSTR(MP_QSTR_GP22), MP_ROM_PTR(&pin_GPIO22) },

    { MP_ROM_QSTR(MP_QSTR_SCL1), MP_ROM_PTR(&pin_GPIO23) },
    { MP_ROM_QSTR(MP_QSTR_GP23), MP_ROM_PTR(&pin_GPIO23) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
