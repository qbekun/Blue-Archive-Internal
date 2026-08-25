#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13910)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF13920)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13930)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13940)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13950)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF13960)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRemoveAllFurnitureResponse_TypeDefinitionIndex = 11373;

	class CafeRemoveAllFurnitureResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x58

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITURERESPONSE_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

	};
}

