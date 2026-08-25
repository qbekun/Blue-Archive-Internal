#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class TimeAttackDungeonSweepResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define TIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FAD6B0)
#define TIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD3E0)
#define TIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FAD6C0)

	inline static constexpr unsigned int TimeAttackDungeonSweepResponseMessage_TypeDefinitionIndex = 2873;

	class TimeAttackDungeonSweepResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::TimeAttackDungeonSweepResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::TimeAttackDungeonSweepResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::TimeAttackDungeonSweepResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::TimeAttackDungeonSweepResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::TimeAttackDungeonSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::TimeAttackDungeonSweepResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TimeAttackDungeonSweepResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

