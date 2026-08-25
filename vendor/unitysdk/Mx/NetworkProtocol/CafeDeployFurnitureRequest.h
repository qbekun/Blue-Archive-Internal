#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_SET_FURNITUREDB_OFFSET UNITYSDK_OFFSET(0xF13670)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13680)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13690)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF136A0)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF136B0)
#define MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_GET_FURNITUREDB_OFFSET UNITYSDK_OFFSET(0xF136C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeDeployFurnitureRequest_TypeDefinitionIndex = 11366;

	class CafeDeployFurnitureRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::FurnitureDB* _FurnitureDB_k__BackingField; // 0x48

		::System::Void set_FurnitureDB(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_SET_FURNITUREDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* get_FurnitureDB()
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEDEPLOYFURNITUREREQUEST_GET_FURNITUREDB_OFFSET))(nullptr);
		}

	};
}

