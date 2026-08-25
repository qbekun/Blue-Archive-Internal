#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentMapMoveResponse; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F6D6F0)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6D700)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F6D710)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F6D720)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D730)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F6D7B0)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6D7C0)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6D7D0)
#define EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6D7F0)

	inline static constexpr unsigned int EventContentMapMoveResponseMessage_TypeDefinitionIndex = 2486;

	class EventContentMapMoveResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentMapMoveResponse* _Response_k__BackingField; // 0x20
		::MX::Campaign::HexaUnit* _Unit_k__BackingField; // 0x28
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x30
		::MX::Campaign::HexLocation* _InputPosition_k__BackingField; // 0x3C

		::System::Void set_Response(::MX::NetworkProtocol::EventContentMapMoveResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentMapMoveResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaUnit* get_Unit()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_UNIT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::EventContentMapMoveResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentMapMoveResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentMapMoveResponse* arg2, ::MX::Campaign::HexaUnit* arg3, ::MX::Campaign::HexLocation* arg4, ::MX::Campaign::HexLocation* arg5)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentMapMoveResponse*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_Unit(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_UNIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_InputPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_SET_INPUTPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_InputPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVERESPONSEMESSAGE_GET_INPUTPOSITION_OFFSET))(nullptr);
		}

	};

