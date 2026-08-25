#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF44050)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44060)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF44070)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF44080)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44090)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF440A0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF440B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF440C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentSubStageResultRequest_TypeDefinitionIndex = 11693;

	class EventContentSubStageResultRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Boolean _PassCheckCharacter_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x50

		::System::Void set_PassCheckCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean get_PassCheckCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBSTAGERESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

	};
}

