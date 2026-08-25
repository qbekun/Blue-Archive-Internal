#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF487E0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF487F0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48800)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48810)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF48820)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF48830)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameShootingSweepResponse_TypeDefinitionIndex = 11878;

	class MiniGameShootingSweepResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPRESPONSE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

	};
}

