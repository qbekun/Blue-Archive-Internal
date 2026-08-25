#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_CONQUESTTILEDB_OFFSET UNITYSDK_OFFSET(0xF3FFC0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET UNITYSDK_OFFSET(0xF3FFD0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_CONQUESTTILEDB_OFFSET UNITYSDK_OFFSET(0xF3FFE0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF3FFF0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40000)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF40010)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40020)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40030)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40040)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_DISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0xF40050)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_DISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0xF40060)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET UNITYSDK_OFFSET(0xF40070)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestConquerResponse_TypeDefinitionIndex = 11544;

	class ConquestConquerResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConquestTileDB* _ConquestTileDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConquestInfoDB* _ConquestInfoDB_k__BackingField; // 0x60
		Il2CppObject* _ConquestEventObjectDBWrapper_k__BackingField; // 0x68
		Il2CppObject* _DisplayInfos_k__BackingField; // 0x70

		::System::Void set_ConquestTileDB(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_CONQUESTTILEDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConquestEventObjectDBWrapper()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestTileDB* get_ConquestTileDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestTileDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_CONQUESTTILEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestInfoDB* get_ConquestInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_CONQUESTINFODB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConquestInfoDB(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_CONQUESTINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_DisplayInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_GET_DISPLAYINFOS_OFFSET))(nullptr);
		}

		::System::Void set_DisplayInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_DISPLAYINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConquestEventObjectDBWrapper(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERRESPONSE_SET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET))(arg, nullptr);
		}

	};
}

