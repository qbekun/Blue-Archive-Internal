#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNPORTALRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AEA0)

	inline static constexpr unsigned int CampaignPortalResponseMessage_TypeDefinitionIndex = 2093;

	class CampaignPortalResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

