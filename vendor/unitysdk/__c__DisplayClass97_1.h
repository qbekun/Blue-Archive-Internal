#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define <>C__DISPLAYCLASS97_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2162AB0)
#define <>C__DISPLAYCLASS97_1__APPLYTRANSFORMDIFFTOOBSTACLES_B__1_OFFSET UNITYSDK_OFFSET(0x2162C50)

	inline static constexpr unsigned int <>c__DisplayClass97_1_TypeDefinitionIndex = 3992;

	class <>c__DisplayClass97_1 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::GroundObstacle* target; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS97_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ApplyTransformDiffToObstacles_b__1(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS97_1__APPLYTRANSFORMDIFFTOOBSTACLES_B__1_OFFSET))(arg, nullptr);
		}

	};

