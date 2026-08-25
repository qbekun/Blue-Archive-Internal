#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class GearTierUpRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define EQUIPMENTBATCHGROWTHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F5EFD0)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_SET_GEARTIERUPREQUESTDB_OFFSET UNITYSDK_OFFSET(0x1F5EFE0)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_GET_GEARTIERUPREQUESTDB_OFFSET UNITYSDK_OFFSET(0x1F5EFF0)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_GET_DBS_OFFSET UNITYSDK_OFFSET(0x1F5F000)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F010)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5F020)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5F030)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_SET_DBS_OFFSET UNITYSDK_OFFSET(0x1F5F0C0)
#define EQUIPMENTBATCHGROWTHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5F0D0)

	inline static constexpr unsigned int EquipmentBatchGrowthNetworkTask_TypeDefinitionIndex = 2386;

	class EquipmentBatchGrowthNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _DBs_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::GearTierUpRequestDB* _GearTierUpRequestDB_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_GearTierUpRequestDB(::MX::GameLogic::DBModel::GearTierUpRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearTierUpRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_SET_GEARTIERUPREQUESTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::GearTierUpRequestDB* get_GearTierUpRequestDB()
		{
			return ((::MX::GameLogic::DBModel::GearTierUpRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_GET_GEARTIERUPREQUESTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_DBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_GET_DBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_DBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_SET_DBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHGROWTHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

