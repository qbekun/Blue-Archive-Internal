#pragma once
#include "unitysdk.h"

class GroundNode;
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define <>C__DISPLAYCLASS98_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2160DF0)
#define <>C__DISPLAYCLASS98_1__APPLYTRANSFORMDIFFTOCHARACTERS_B__1_OFFSET UNITYSDK_OFFSET(0x2162CF0)

	inline static constexpr unsigned int <>c__DisplayClass98_1_TypeDefinitionIndex = 3994;

	class <>c__DisplayClass98_1 : public Il2CppObject
	{
	public:
		GroundNode* targetNode; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS98_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ApplyTransformDiffToCharacters_b__1(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS98_1__APPLYTRANSFORMDIFFTOCHARACTERS_B__1_OFFSET))(arg, nullptr);
		}

	};

