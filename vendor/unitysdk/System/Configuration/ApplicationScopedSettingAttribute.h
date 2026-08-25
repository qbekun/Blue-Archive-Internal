#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_APPLICATIONSCOPEDSETTINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5220)

namespace System::Configuration
{
	inline static constexpr unsigned int ApplicationScopedSettingAttribute_TypeDefinitionIndex = 30009;

	class ApplicationScopedSettingAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPLICATIONSCOPEDSETTINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

