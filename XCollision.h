﻿#pragma once
#include "cocos/math/Vec2.h"

namespace xmath
{
	namespace collision
	{
		enum class ColliderType : uint8_t
		{
			Circle = 0,
			OBB,
			Ellipse,
			Diamond,
			Triangle,
			Point,
			ColliderTypeNum
		};

		bool check(const cocos2d::Vec2& p0, float a0, float b0, float rot0, ColliderType t0,
			const cocos2d::Vec2& p1, float a1, float b1, float rot1, ColliderType t1);
	}
}
