#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ScenarioMapMoveResponse; }
namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIOMAPMOVERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F98C00)
#define SCENARIOMAPMOVERESPONSEMESSAGE_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F98C80)
#define SCENARIOMAPMOVERESPONSEMESSAGE_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F98C90)
#define SCENARIOMAPMOVERESPONSEMESSAGE_SET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F98CA0)
#define SCENARIOMAPMOVERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F98CB0)
#define SCENARIOMAPMOVERESPONSEMESSAGE_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F98CC0)
#define SCENARIOMAPMOVERESPONSEMESSAGE_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F98CD0)
#define SCENARIOMAPMOVERESPONSEMESSAGE_GET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F98CF0)
#define SCENARIOMAPMOVERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F98D10)

	inline static constexpr unsigned int ScenarioMapMoveResponseMessage_TypeDefinitionIndex = 2765;

	class ScenarioMapMoveResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ScenarioMapMoveResponse* _Response_k__BackingField; // 0x20
		::MX::Campaign::HexaUnit* _Unit_k__BackingField; // 0x28
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x30
		::MX::Campaign::HexLocation* _InputPosition_k__BackingField; // 0x3C

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ScenarioMapMoveResponse* arg2, ::MX::Campaign::HexaUnit* arg3, ::MX::Campaign::HexLocation* arg4, ::MX::Campaign::HexLocation* arg5)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ScenarioMapMoveResponse*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Unit(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_SET_UNIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_InputPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_SET_INPUTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ScenarioMapMoveResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ScenarioMapMoveResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaUnit* get_Unit()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_GET_UNIT_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_InputPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_GET_INPUTPOSITION_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ScenarioMapMoveResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ScenarioMapMoveResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

