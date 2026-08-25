#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6350)
#define SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9AB6360)

namespace System::Configuration
{
	inline static constexpr unsigned int DefaultSettingValueAttribute_TypeDefinitionIndex = 30025;

	class DefaultSettingValueAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_DEFAULTSETTINGVALUEATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

