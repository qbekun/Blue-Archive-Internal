#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16400)
#define MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_GET_CLANDBS_OFFSET UNITYSDK_OFFSET(0xF16410)
#define MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16420)
#define MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_SET_CLANDBS_OFFSET UNITYSDK_OFFSET(0xF16430)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanSearchResponse_TypeDefinitionIndex = 11489;

	class ClanSearchResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ClanDBs_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClanDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_GET_CLANDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSEARCHRESPONSE_SET_CLANDBS_OFFSET))(arg, nullptr);
		}

	};
}

