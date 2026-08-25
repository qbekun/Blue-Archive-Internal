#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RaidSeasonType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_LASTSETTLEDRANKING_OFFSET UNITYSDK_OFFSET(0xF4C470)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_LASTSETTLEDRANKING_OFFSET UNITYSDK_OFFSET(0xF4C480)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_SEASONTYPE_OFFSET UNITYSDK_OFFSET(0xF4C490)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_CANRECEIVERANKINGREWARD_OFFSET UNITYSDK_OFFSET(0xF4C4A0)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_LASTSETTLEDTIER_OFFSET UNITYSDK_OFFSET(0xF4C4B0)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_CANRECEIVERANKINGREWARD_OFFSET UNITYSDK_OFFSET(0xF4C4C0)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C4D0)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C4E0)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_SEASONTYPE_OFFSET UNITYSDK_OFFSET(0xF4C4F0)
#define MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_LASTSETTLEDTIER_OFFSET UNITYSDK_OFFSET(0xF4C500)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidLoginResponse_TypeDefinitionIndex = 12014;

	class RaidLoginResponse : public Il2CppObject
	{
	public:
		::FlatData::RaidSeasonType* _SeasonType_k__BackingField; // 0x50
		::System::Boolean _CanReceiveRankingReward_k__BackingField; // 0x54
		::System::Int64 _LastSettledRanking_k__BackingField; // 0x58
		Il2CppObject* _LastSettledTier_k__BackingField; // 0x60

		::System::Int64 get_LastSettledRanking()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_LASTSETTLEDRANKING_OFFSET))(nullptr);
		}

		::System::Void set_LastSettledRanking(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_LASTSETTLEDRANKING_OFFSET))(arg, nullptr);
		}

		::FlatData::RaidSeasonType* get_SeasonType()
		{
			return ((::FlatData::RaidSeasonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_SEASONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CanReceiveRankingReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_CANRECEIVERANKINGREWARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LastSettledTier()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_LASTSETTLEDTIER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanReceiveRankingReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_CANRECEIVERANKINGREWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonType(::FlatData::RaidSeasonType* arg)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_SEASONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastSettledTier(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOGINRESPONSE_SET_LASTSETTLEDTIER_OFFSET))(arg, nullptr);
		}

	};
}

