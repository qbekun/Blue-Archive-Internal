#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidEndBattleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDENDBATTLEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5B3A0)
#define ELIMINATERAIDENDBATTLEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5B6D0)

	inline static constexpr unsigned int EliminateRaidEndBattleMessage_TypeDefinitionIndex = 2359;

	class EliminateRaidEndBattleMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidEndBattleResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidEndBattleResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidEndBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidEndBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

