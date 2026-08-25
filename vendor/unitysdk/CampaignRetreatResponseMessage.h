#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNRETREATRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C170)

	inline static constexpr unsigned int CampaignRetreatResponseMessage_TypeDefinitionIndex = 2102;

	class CampaignRetreatResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNRETREATRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

