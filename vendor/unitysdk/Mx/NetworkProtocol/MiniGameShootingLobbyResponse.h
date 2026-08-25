#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48620)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48630)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_GET_HISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF48640)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_SET_HISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF48650)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameShootingLobbyResponse_TypeDefinitionIndex = 11872;

	class MiniGameShootingLobbyResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _HistoryDBs_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_HistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_GET_HISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_HistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGLOBBYRESPONSE_SET_HISTORYDBS_OFFSET))(arg, nullptr);
		}

	};
}

