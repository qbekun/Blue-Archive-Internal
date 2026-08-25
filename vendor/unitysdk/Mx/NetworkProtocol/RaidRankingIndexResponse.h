#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_SET_RANKBRACKETS_OFFSET UNITYSDK_OFFSET(0xF4D5E0)
#define MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D5F0)
#define MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D600)
#define MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_GET_RANKBRACKETS_OFFSET UNITYSDK_OFFSET(0xF4D610)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidRankingIndexResponse_TypeDefinitionIndex = 12052;

	class RaidRankingIndexResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _RankBrackets_k__BackingField; // 0x50

		::System::Void set_RankBrackets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_SET_RANKBRACKETS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_RankBrackets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDRANKINGINDEXRESPONSE_GET_RANKBRACKETS_OFFSET))(nullptr);
		}

	};
}

