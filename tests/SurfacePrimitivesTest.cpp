// Copyright 2017-2019 the Polygon Mesh Processing Library developers.
// Distributed under a MIT-style license, see LICENSE.txt for details.

#include "gtest/gtest.h"

#include <pmp/algorithms/SurfacePrimitives.h>

using namespace pmp;

TEST(SurfacePrimitivesTest, tetrahedron)
{
    auto mesh = tetrahedron();
    EXPECT_EQ(mesh.n_vertices(), 4);
    EXPECT_EQ(mesh.n_edges(), 6);
    EXPECT_EQ(mesh.n_faces(), 4);
    EXPECT_TRUE(mesh.is_triangle_mesh());
}

TEST(SurfacePrimitivesTest, octahedron)
{
    auto mesh = octahedron();
    EXPECT_EQ(mesh.n_vertices(), 6);
    EXPECT_EQ(mesh.n_edges(), 12);
    EXPECT_EQ(mesh.n_faces(), 8);
    EXPECT_TRUE(mesh.is_triangle_mesh());
}

TEST(SurfacePrimitivesTest, hexahedron)
{
    auto mesh = hexahedron();
    EXPECT_EQ(mesh.n_vertices(), 8);
    EXPECT_EQ(mesh.n_edges(), 12);
    EXPECT_EQ(mesh.n_faces(), 6);
    EXPECT_TRUE(mesh.is_quad_mesh());
}

TEST(SurfacePrimitivesTest, icosahedron)
{
    auto mesh = icosahedron();
    EXPECT_EQ(mesh.n_vertices(), 12);
    EXPECT_EQ(mesh.n_edges(), 30);
    EXPECT_EQ(mesh.n_faces(), 20);
    EXPECT_TRUE(mesh.is_triangle_mesh());
}

TEST(SurfacePrimitivesTest, dodecahedron)
{
    auto mesh = dodecahedron();
    EXPECT_EQ(mesh.n_vertices(), 20);
    EXPECT_EQ(mesh.n_edges(), 30);
    EXPECT_EQ(mesh.n_faces(), 12);
    EXPECT_FALSE(mesh.is_triangle_mesh());
    EXPECT_FALSE(mesh.is_quad_mesh());
}

TEST(SurfacePrimitivesTest, icosphere)
{
    auto mesh = icosphere();
    EXPECT_EQ(mesh.n_vertices(), 642);
    EXPECT_EQ(mesh.n_edges(), 1920);
    EXPECT_EQ(mesh.n_faces(), 1280);
    EXPECT_TRUE(mesh.is_triangle_mesh());
}

TEST(SurfacePrimitivesTest, quad_sphere)
{
    auto mesh = quad_sphere();
    EXPECT_EQ(mesh.n_vertices(), 386);
    EXPECT_EQ(mesh.n_edges(), 768);
    EXPECT_EQ(mesh.n_faces(), 384);
    EXPECT_TRUE(mesh.is_quad_mesh());
}

TEST(SurfacePrimitivesTest, uv_sphere)
{
    auto mesh = uv_sphere();
    EXPECT_EQ(mesh.n_vertices(), 212);
    EXPECT_EQ(mesh.n_edges(), 435);
    EXPECT_EQ(mesh.n_faces(), 225);
    EXPECT_FALSE(mesh.is_triangle_mesh());
    EXPECT_FALSE(mesh.is_quad_mesh());
}
