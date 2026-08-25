#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNENTERTACTICRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F18CD0)

	inline static constexpr unsigned int CampaignEnterTacticResponseMessage_TypeDefinitionIndex = 2079;

	class CampaignEnterTacticResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

