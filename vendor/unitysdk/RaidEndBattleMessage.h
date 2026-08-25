#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidEndBattleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDENDBATTLEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D270)
#define RAIDENDBATTLEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8D5D0)

	inline static constexpr unsigned int RaidEndBattleMessage_TypeDefinitionIndex = 2689;

	class RaidEndBattleMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidEndBattleResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidEndBattleResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RaidEndBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidEndBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

