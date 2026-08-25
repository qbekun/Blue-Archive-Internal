#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define <>C__DISPLAYCLASS98_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x2160E00)
#define <>C__DISPLAYCLASS98_2__APPLYTRANSFORMDIFFTOCHARACTERS_B__2_OFFSET UNITYSDK_OFFSET(0x2162D30)

	inline static constexpr unsigned int <>c__DisplayClass98_2_TypeDefinitionIndex = 3995;

	class <>c__DisplayClass98_2 : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* skillTargetPosition; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS98_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ApplyTransformDiffToCharacters_b__2(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS98_2__APPLYTRANSFORMDIFFTOCHARACTERS_B__2_OFFSET))(arg, nullptr);
		}

	};

