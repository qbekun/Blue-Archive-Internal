#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class TimeAttackDungeonEndBattleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define TIMEATTACKDUNGEONENDBATTLERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB980)
#define TIMEATTACKDUNGEONENDBATTLERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FABDA0)
#define TIMEATTACKDUNGEONENDBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FABDB0)

	inline static constexpr unsigned int TimeAttackDungeonEndBattleResponseMessage_TypeDefinitionIndex = 2864;

	class TimeAttackDungeonEndBattleResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::TimeAttackDungeonEndBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

