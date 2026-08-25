#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13870)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13880)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13890)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF138A0)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF138B0)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF138C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRemoveFurnitureResponse_TypeDefinitionIndex = 11371;

	class CafeRemoveFurnitureResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x58

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITURERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

