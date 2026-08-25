#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_SET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF4D420)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D430)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D440)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_GET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF4D450)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidOpponentListResponse_TypeDefinitionIndex = 12046;

	class RaidOpponentListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _OpponentUserDBs_k__BackingField; // 0x50

		::System::Void set_OpponentUserDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_SET_OPPONENTUSERDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_OpponentUserDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTRESPONSE_GET_OPPONENTUSERDBS_OFFSET))(nullptr);
		}

	};
}

