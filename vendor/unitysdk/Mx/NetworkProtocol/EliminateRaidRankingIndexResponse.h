#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_GET_RANKBRACKETS_OFFSET UNITYSDK_OFFSET(0xF43360)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43370)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43380)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_SET_RANKBRACKETS_OFFSET UNITYSDK_OFFSET(0xF43390)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidRankingIndexResponse_TypeDefinitionIndex = 11664;

	class EliminateRaidRankingIndexResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _RankBrackets_k__BackingField; // 0x50

		Il2CppObject* get_RankBrackets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_GET_RANKBRACKETS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RankBrackets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDRANKINGINDEXRESPONSE_SET_RANKBRACKETS_OFFSET))(arg, nullptr);
		}

	};
}

