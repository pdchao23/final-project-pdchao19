//
// Created by Preston Chao on 4/21/20.
//

#ifndef FINALPROJECT_WallSMASHER_PADDLE_H
#define FINALPROJECT_WallSMASHER_PADDLE_H

#include "cinder/Color.h"
#include <Box2D/Box2d.h>

namespace blocksmasher {

struct SceneObject {
 public:
  // pass in a pointer to the particle
  // private:
  // store a pointer to the particle in the physics world from the main app
  b2Body* body;
  ci::Color color;
  float scalar = 50.0f;
  std::string tag;
};

struct Ball : public SceneObject {
 public:
  void setup();
  void draw();

 private:
  float radius;
};

struct Block : public SceneObject {
 public:
  void setup();
  void draw();

// private:
  float halfHeight;
  float halfWidth;
};

struct Paddle : public SceneObject {
 public:
  void setup();
  void draw();

// private:
  float halfHeight;
  float halfWidth;
};

}  // namespace blocksmasher
#endif  // FINALPROJECT_PADDLE_H