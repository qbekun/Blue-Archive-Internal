#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16C40)
#define MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_GET_CLANASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0xF16C50)
#define MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16C60)
#define MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_SET_CLANASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0xF16C70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanMyAssistListResponse_TypeDefinitionIndex = 11517;

	class ClanMyAssistListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ClanAssistSlotDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClanAssistSlotDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_GET_CLANASSISTSLOTDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ClanAssistSlotDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMYASSISTLISTRESPONSE_SET_CLANASSISTSLOTDBS_OFFSET))(arg, nullptr);
		}

	};
}

