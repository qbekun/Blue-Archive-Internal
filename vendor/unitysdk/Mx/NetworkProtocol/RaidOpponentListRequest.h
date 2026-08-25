#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RankingSearchType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D360)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_ISUPPER_OFFSET UNITYSDK_OFFSET(0xF4D370)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_RANK_OFFSET UNITYSDK_OFFSET(0xF4D380)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D390)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_ISFIRSTREQUEST_OFFSET UNITYSDK_OFFSET(0xF4D3A0)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_SEARCHTYPE_OFFSET UNITYSDK_OFFSET(0xF4D3B0)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xF4D3C0)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_ISFIRSTREQUEST_OFFSET UNITYSDK_OFFSET(0xF4D3D0)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xF4D3E0)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_ISUPPER_OFFSET UNITYSDK_OFFSET(0xF4D3F0)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_SEARCHTYPE_OFFSET UNITYSDK_OFFSET(0xF4D400)
#define MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_RANK_OFFSET UNITYSDK_OFFSET(0xF4D410)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidOpponentListRequest_TypeDefinitionIndex = 12045;

	class RaidOpponentListRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _Rank_k__BackingField; // 0x40
		Il2CppObject* _Score_k__BackingField; // 0x50
		::System::Boolean _IsUpper_k__BackingField; // 0x60
		::System::Boolean _IsFirstRequest_k__BackingField; // 0x61
		::FlatData::RankingSearchType* _SearchType_k__BackingField; // 0x64

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUpper()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_ISUPPER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsFirstRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_ISFIRSTREQUEST_OFFSET))(arg, nullptr);
		}

		::FlatData::RankingSearchType* get_SearchType()
		{
			return ((::FlatData::RankingSearchType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_SEARCHTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Score(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_SCORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFirstRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_ISFIRSTREQUEST_OFFSET))(nullptr);
		}

		Il2CppObject* get_Score()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_GET_SCORE_OFFSET))(nullptr);
		}

		::System::Void set_IsUpper(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_ISUPPER_OFFSET))(arg, nullptr);
		}

		::System::Void set_SearchType(::FlatData::RankingSearchType* arg)
		{
			((::System::Void(*)(::FlatData::RankingSearchType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_SEARCHTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rank(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDOPPONENTLISTREQUEST_SET_RANK_OFFSET))(arg, nullptr);
		}

	};
}

