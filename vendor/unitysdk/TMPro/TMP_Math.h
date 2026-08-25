#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define TMPRO_TMP_MATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA11F360)
#define TMPRO_TMP_MATH_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0xA11F3C0)
#define TMPRO_TMP_MATH_MOD_OFFSET UNITYSDK_OFFSET(0xA11F3F0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Math_TypeDefinitionIndex = 33617;

	class TMP_Math : public Il2CppObject
	{
	public:
		::System::Single FLOAT_MAX; // 0x0
		::System::Single FLOAT_MIN; // 0x0
		::System::Int32 INT_MAX; // 0x0
		::System::Int32 INT_MIN; // 0x0
		::System::Single FLOAT_UNSET; // 0x0
		::System::Int32 INT_UNSET; // 0x0
		::UnityEngine::Vector2* MAX_16BIT; // 0x0
		::UnityEngine::Vector2* MIN_16BIT; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATH_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Approximately(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATH_APPROXIMATELY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Mod(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATH_MOD_OFFSET))(arg, arg, nullptr);
		}

	};
}

