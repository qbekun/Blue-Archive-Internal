#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_GET_ADDEDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF48580)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48590)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF485A0)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_SET_ADDEDHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF485B0)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF485C0)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF485D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameMissionMultipleRewardResponse_TypeDefinitionIndex = 11870;

	class MiniGameMissionMultipleRewardResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _AddedHistoryDBs_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		Il2CppObject* get_AddedHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_GET_ADDEDHISTORYDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AddedHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_SET_ADDEDHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

