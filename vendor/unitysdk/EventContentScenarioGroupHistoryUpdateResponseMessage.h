#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentScenarioGroupHistoryUpdateResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F70610)
#define EVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F70650)
#define EVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F70660)

	inline static constexpr unsigned int EventContentScenarioGroupHistoryUpdateResponseMessage_TypeDefinitionIndex = 2507;

	class EventContentScenarioGroupHistoryUpdateResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentScenarioGroupHistoryUpdateResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentScenarioGroupHistoryUpdateResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentScenarioGroupHistoryUpdateResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentScenarioGroupHistoryUpdateResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentScenarioGroupHistoryUpdateResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EventContentScenarioGroupHistoryUpdateResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentScenarioGroupHistoryUpdateResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

