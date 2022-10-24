#pragma once

#include "triangle.h"
#include "transformInfo.h"

#include <vector>

namespace fst
{
    class Mesh : public Triangular
    {
    public:
        Mesh(const std::vector<Triangle>& triangles, int material_id);
        Mesh(std::vector<Triangle>&& triangles, int material_id);
        Mesh(std::vector<Triangle>&& triangles, int material_id, std::vector<TransformInfo> transformInfos, int textureId);

        bool intersect(const Ray& ray, HitRecord& hit_record, float max_distance) const override;
        bool intersectShadowRay(const Ray& ray, float max_distance) const override;

        std::vector<Triangle> m_triangles;

        std::vector<TransformInfo> transformInfos;

        int textureId;

    private:

        int m_material_id;
    };
}
