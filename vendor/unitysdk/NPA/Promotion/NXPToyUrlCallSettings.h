#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYURLCALLSETTINGS_NXPTOYURLCALLSETTINGSTYPE_VALUEOF_OFFSET UNITYSDK_OFFSET(0x9CCBFE0)
#define NPA_PROMOTION_NXPTOYURLCALLSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC0D0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyUrlCallSettings_TypeDefinitionIndex = 27379;

	class NXPToyUrlCallSettings : public Il2CppObject
	{
	public:
		::System::String* placementId; // 0x10
		::System::String* title; // 0x18
		::System::Int32 exposure; // 0x20
		::System::Int32 type; // 0x24
		::System::String* url; // 0x28

		Il2CppObject* NXPToyUrlCallSettingsType_valueOf(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYURLCALLSETTINGS_NXPTOYURLCALLSETTINGSTYPE_VALUEOF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYURLCALLSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

