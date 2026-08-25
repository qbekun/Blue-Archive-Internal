#pragma once
#include "../../unitysdk.h"

#define MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONUNTILATTRIBUTE_SET_DATE_OFFSET UNITYSDK_OFFSET(0xF117D0)
#define MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONUNTILATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF117E0)
#define MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONUNTILATTRIBUTE_GET_DATE_OFFSET UNITYSDK_OFFSET(0xF11830)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int IgnoreProtocolSettingValidationUntilAttribute_TypeDefinitionIndex = 11322;

	class IgnoreProtocolSettingValidationUntilAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Date_k__BackingField; // 0x10

		::System::Void set_Date(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONUNTILATTRIBUTE_SET_DATE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONUNTILATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Date()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONUNTILATTRIBUTE_GET_DATE_OFFSET))(nullptr);
		}

	};
}

