#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF4A400)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A410)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_SET_PERKS_OFFSET UNITYSDK_OFFSET(0xF4A420)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A430)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4A440)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_PERKS_OFFSET UNITYSDK_OFFSET(0xF4A450)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A460)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF4A470)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGBuyPerkResponse_TypeDefinitionIndex = 11946;

	class MiniGameCCGBuyPerkResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _Perks_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		Il2CppObject* _EventContentCollectionDBs_k__BackingField; // 0x60

		::System::Void set_EventContentCollectionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_Perks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_SET_PERKS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Perks()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_PERKS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentCollectionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKRESPONSE_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(nullptr);
		}

	};
}

