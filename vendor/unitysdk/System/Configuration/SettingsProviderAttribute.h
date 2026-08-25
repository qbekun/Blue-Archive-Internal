#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6E60)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6E70)
#define SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_GET_PROVIDERTYPENAME_OFFSET UNITYSDK_OFFSET(0x9AB6E80)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsProviderAttribute_TypeDefinitionIndex = 30047;

	class SettingsProviderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_ProviderTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROVIDERATTRIBUTE_GET_PROVIDERTYPENAME_OFFSET))(nullptr);
		}

	};
}

