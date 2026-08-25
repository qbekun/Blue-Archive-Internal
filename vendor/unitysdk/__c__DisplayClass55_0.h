#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define <>C__DISPLAYCLASS55_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E9380)
#define <>C__DISPLAYCLASS55_0__APPLYPOSITIONTRANSFORMDIFF_B__0_OFFSET UNITYSDK_OFFSET(0x13EBA90)

	inline static constexpr unsigned int <>c__DisplayClass55_0_TypeDefinitionIndex = 14587;

	class <>c__DisplayClass55_0 : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* position; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ApplyPositionTransformDiff_b__0(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_0__APPLYPOSITIONTRANSFORMDIFF_B__0_OFFSET))(arg, nullptr);
		}

	};

