#pragma once
#include "../unitysdk.h"

#define SYSTEM_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0x935C8B0)
#define SYSTEM_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0x935C990)
#define SYSTEM_MATHF_.CCTOR_OFFSET UNITYSDK_OFFSET(0x935CA70)

namespace System
{
	inline static constexpr unsigned int MathF_TypeDefinitionIndex = 23794;

	class MathF : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* roundPower10Single; // 0x0
		::System::Single singleRoundLimit; // 0x8

		::System::Single Max(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHF_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Min(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHF_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATHF_.CCTOR_OFFSET))(nullptr);
		}

	};
}

