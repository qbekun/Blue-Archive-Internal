#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AC00)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF4AC10)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AC20)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF4AC30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidEnterBattleResponse_TypeDefinitionIndex = 11970;

	class MultiFloorRaidEnterBattleResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _AssistCharacterDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_GET_ASSISTCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDENTERBATTLERESPONSE_SET_ASSISTCHARACTERDBS_OFFSET))(arg, nullptr);
		}

	};
}

