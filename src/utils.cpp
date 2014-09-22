#include "dgl.hpp"



std::string         dgl_func_name   (uint16_t id) {
    if (id & gles2_partition)
        return gles2_name   (id ^ id & gles2_partition);
    if (id & egl_partition  )
        return egl_name     (id ^ id & egl_partition);
    return "unknown";
}



exec_func_t         dgl_exec_func(uint16_t id) {
    if (id & gles2_partition)
        return gles2_exec   (id ^ id & gles2_partition);
    if (id & egl_partition  )
        return egl_exec     (id ^ id & egl_partition);
    return nullptr;
}
