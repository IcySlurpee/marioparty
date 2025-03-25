#include "common.h"

f32 Vec3SqDistance(Vec* arg0) {
    return (arg0->x * arg0->x) + (arg0->y * arg0->y) + (arg0->z * arg0->z);
}
