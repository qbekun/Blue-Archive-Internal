#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF431A0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF431B0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_GET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF431C0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_SET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF431D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidOpponentListResponse_TypeDefinitionIndex = 11658;

	class EliminateRaidOpponentListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _OpponentUserDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_OpponentUserDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_GET_OPPONENTUSERDBS_OFFSET))(nullptr);
		}

		::System::Void set_OpponentUserDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDOPPONENTLISTRESPONSE_SET_OPPONENTUSERDBS_OFFSET))(arg, nullptr);
		}

	};
}

