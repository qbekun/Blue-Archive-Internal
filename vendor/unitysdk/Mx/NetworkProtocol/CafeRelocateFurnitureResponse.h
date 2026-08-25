#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF137B0)
#define MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_SET_RELOCATEDFURNITUREDB_OFFSET UNITYSDK_OFFSET(0xF137C0)
#define MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF137D0)
#define MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_GET_RELOCATEDFURNITUREDB_OFFSET UNITYSDK_OFFSET(0xF137E0)
#define MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF137F0)
#define MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13800)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRelocateFurnitureResponse_TypeDefinitionIndex = 11369;

	class CafeRelocateFurnitureResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::FurnitureDB* _RelocatedFurnitureDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RelocatedFurnitureDB(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_SET_RELOCATEDFURNITUREDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* get_RelocatedFurnitureDB()
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_GET_RELOCATEDFURNITUREDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERELOCATEFURNITURERESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

	};
}

