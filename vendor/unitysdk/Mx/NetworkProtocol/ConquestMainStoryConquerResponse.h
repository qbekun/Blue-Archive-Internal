#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF410C0)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF410D0)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_CONQUESTTILEDB_OFFSET UNITYSDK_OFFSET(0xF410E0)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_DISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0xF410F0)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF41100)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_CONQUESTTILEDB_OFFSET UNITYSDK_OFFSET(0xF41110)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41120)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF41130)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_DISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0xF41140)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF41150)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestMainStoryConquerResponse_TypeDefinitionIndex = 11574;

	class ConquestMainStoryConquerResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConquestTileDB* _ConquestTileDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConquestInfoDB* _ConquestInfoDB_k__BackingField; // 0x60
		Il2CppObject* _DisplayInfos_k__BackingField; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestInfoDB* get_ConquestInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_CONQUESTINFODB_OFFSET))(nullptr);
		}

		::System::Void set_ConquestTileDB(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_CONQUESTTILEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_DisplayInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_DISPLAYINFOS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestTileDB* get_ConquestTileDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestTileDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_CONQUESTTILEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ConquestInfoDB(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_CONQUESTINFODB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DisplayInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_GET_DISPLAYINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

