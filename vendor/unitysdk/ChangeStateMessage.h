#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CampaignState; }

#define CHANGESTATEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20024F0)

	inline static constexpr unsigned int ChangeStateMessage_TypeDefinitionIndex = 3107;

	class ChangeStateMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::NetworkProtocol::CampaignState* State; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

