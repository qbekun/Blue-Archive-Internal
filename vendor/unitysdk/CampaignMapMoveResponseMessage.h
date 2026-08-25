#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CampaignMapMoveResponse; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F1A650)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1A660)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F1A680)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F1A690)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F1A6A0)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1A6B0)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1A6C0)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1A6E0)
#define CAMPAIGNMAPMOVERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A6F0)

	inline static constexpr unsigned int CampaignMapMoveResponseMessage_TypeDefinitionIndex = 2090;

	class CampaignMapMoveResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CampaignMapMoveResponse* _Response_k__BackingField; // 0x20
		::MX::Campaign::HexaUnit* _Unit_k__BackingField; // 0x28
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x30
		::MX::Campaign::HexLocation* _InputPosition_k__BackingField; // 0x3C

		::MX::Campaign::HexaUnit* get_Unit()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_UNIT_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_InputPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_INPUTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CampaignMapMoveResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CampaignMapMoveResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Unit(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_UNIT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CampaignMapMoveResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CampaignMapMoveResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_InputPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_SET_INPUTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CampaignMapMoveResponse* arg2, ::MX::Campaign::HexaUnit* arg3, ::MX::Campaign::HexLocation* arg4, ::MX::Campaign::HexLocation* arg5)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CampaignMapMoveResponse*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};

