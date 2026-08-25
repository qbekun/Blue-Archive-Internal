#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFE8E0)
#define SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_SET_SWITCHLEVELTYPE_OFFSET UNITYSDK_OFFSET(0x9AFE910)

namespace System::Diagnostics
{
	inline static constexpr unsigned int SwitchLevelAttribute_TypeDefinitionIndex = 29241;

	class SwitchLevelAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* type; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_SwitchLevelType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHLEVELATTRIBUTE_SET_SWITCHLEVELTYPE_OFFSET))(arg, nullptr);
		}

	};
}

