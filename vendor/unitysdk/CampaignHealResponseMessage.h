#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNHEALRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F19F00)

	inline static constexpr unsigned int CampaignHealResponseMessage_TypeDefinitionIndex = 2087;

	class CampaignHealResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

