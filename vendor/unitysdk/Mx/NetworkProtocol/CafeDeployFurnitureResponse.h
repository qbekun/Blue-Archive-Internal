#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_SET_CHANGEDFURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF136D0)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_SET_NEWFURNITURESERVERID_OFFSET UNITYSDK_OFFSET(0xF136E0)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF136F0)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13700)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_NEWFURNITURESERVERID_OFFSET UNITYSDK_OFFSET(0xF13710)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_CHANGEDFURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF13720)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13730)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13740)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeDeployFurnitureResponse_TypeDefinitionIndex = 11367;

	class CafeDeployFurnitureResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		::System::Int64 _NewFurnitureServerId_k__BackingField; // 0x58
		Il2CppObject* _ChangedFurnitureDBs_k__BackingField; // 0x60

		::System::Void set_ChangedFurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_SET_CHANGEDFURNITUREDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_NewFurnitureServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_SET_NEWFURNITURESERVERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NewFurnitureServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_NEWFURNITURESERVERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChangedFurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_CHANGEDFURNITUREDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITURERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

