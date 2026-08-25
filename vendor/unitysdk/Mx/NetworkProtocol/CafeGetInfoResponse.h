#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13550)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_LOCKEDFURNITUREUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF13560)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF13570)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13580)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF13590)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF135A0)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_LOCKEDFURNITUREUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF135B0)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF135C0)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF135D0)
#define MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF135E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeGetInfoResponse_TypeDefinitionIndex = 11363;

	class CafeGetInfoResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		Il2CppObject* _CafeDBs_k__BackingField; // 0x58
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x60
		Il2CppObject* _LockedFurnitureUniqueIds_k__BackingField; // 0x68

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_LockedFurnitureUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_LOCKEDFURNITUREUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CafeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_CAFEDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_LockedFurnitureUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_LOCKEDFURNITUREUNIQUEIDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFORESPONSE_SET_CAFEDBS_OFFSET))(arg, nullptr);
		}

	};
}

