#pragma once
#include "../../unitysdk.h"

#define MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF117C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int IgnoreProtocolSettingValidationAttribute_TypeDefinitionIndex = 11321;

	class IgnoreProtocolSettingValidationAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_IGNOREPROTOCOLSETTINGVALIDATIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

