#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_GET_MINIGAMEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF48220)
#define MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48230)
#define MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48240)
#define MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_SET_MINIGAMEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF48250)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameStageListResponse_TypeDefinitionIndex = 11860;

	class MiniGameStageListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MiniGameHistoryDBs_k__BackingField; // 0x50

		Il2CppObject* get_MiniGameHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_GET_MINIGAMEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_MiniGameHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESTAGELISTRESPONSE_SET_MINIGAMEHISTORYDBS_OFFSET))(arg, nullptr);
		}

	};
}

