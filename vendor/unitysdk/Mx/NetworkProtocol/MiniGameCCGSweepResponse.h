#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49CA0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49CB0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF49CC0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49CD0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49CE0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF49CF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGSweepResponse_TypeDefinitionIndex = 11926;

	class MiniGameCCGSweepResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPRESPONSE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

	};
}

