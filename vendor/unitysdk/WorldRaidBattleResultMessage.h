#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WorldRaidBattleResultResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define WORLDRAIDBATTLERESULTMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FAFC00)
#define WORLDRAIDBATTLERESULTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF960)

	inline static constexpr unsigned int WorldRaidBattleResultMessage_TypeDefinitionIndex = 2887;

	class WorldRaidBattleResultMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::WorldRaidBattleResultResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::WorldRaidBattleResultResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::WorldRaidBattleResultResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::WorldRaidBattleResultResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::WorldRaidBattleResultResponse*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

