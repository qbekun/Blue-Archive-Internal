#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class GearTierUpRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_GET_EQUIPMENTBATCHGROWTHREQUESTDBS_OFFSET UNITYSDK_OFFSET(0xF43820)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43830)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_SET_EQUIPMENTBATCHGROWTHREQUESTDBS_OFFSET UNITYSDK_OFFSET(0xF43840)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_SET_GEARTIERUPREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF43850)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_GET_GEARTIERUPREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF43860)
#define MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43870)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentBatchGrowthRequest_TypeDefinitionIndex = 11677;

	class EquipmentBatchGrowthRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _EquipmentBatchGrowthRequestDBs_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::GearTierUpRequestDB* _GearTierUpRequestDB_k__BackingField; // 0x48

		Il2CppObject* get_EquipmentBatchGrowthRequestDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_GET_EQUIPMENTBATCHGROWTHREQUESTDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentBatchGrowthRequestDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_SET_EQUIPMENTBATCHGROWTHREQUESTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_GearTierUpRequestDB(::MX::GameLogic::DBModel::GearTierUpRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearTierUpRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_SET_GEARTIERUPREQUESTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::GearTierUpRequestDB* get_GearTierUpRequestDB()
		{
			return ((::MX::GameLogic::DBModel::GearTierUpRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_GET_GEARTIERUPREQUESTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTBATCHGROWTHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

