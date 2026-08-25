#pragma once
#include "../../../unitysdk.h"

class GroundGrid;
namespace MX::Logic::Battles::StageSaveData { class StageSaveData; }
namespace MX::Logic::Battles { class Ground; }
namespace MX::Logic::BattleEntities { class BattleEntityIdProvider; }
namespace MX::Logic::Battles { class GroundStage; }
namespace UnityEngine { class Vector3; }
class GroundVector3;

#define MX_LOGIC_SERVICES_GROUNDFACTORY_LOADGRID_OFFSET UNITYSDK_OFFSET(0x1098D90)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_LOADSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1099570)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_CREATEGROUND_OFFSET UNITYSDK_OFFSET(0x1099730)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_CREATEGROUND_OFFSET UNITYSDK_OFFSET(0x1099F20)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_LOADLAYER_OFFSET UNITYSDK_OFFSET(0x1099440)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEGRID_OFFSET UNITYSDK_OFFSET(0x1098EB0)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_MAKESTAGEBYSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x10997C0)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEFORMATIONS_OFFSET UNITYSDK_OFFSET(0x1099FA0)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEPRELOADTABLE_OFFSET UNITYSDK_OFFSET(0x109A110)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_ADDOBSTACLENAME_OFFSET UNITYSDK_OFFSET(0x109B2C0)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEEVENTLIST_OFFSET UNITYSDK_OFFSET(0x109B4F0)
#define MX_LOGIC_SERVICES_GROUNDFACTORY_CONVERTVECTOR3_OFFSET UNITYSDK_OFFSET(0x109B590)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int GroundFactory_TypeDefinitionIndex = 12968;

	class GroundFactory : public Il2CppObject
	{
	public:
		GroundGrid* LoadGrid(::System::String* str)
		{
			return ((GroundGrid*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_LOADGRID_OFFSET))(str, nullptr);
		}

		::MX::Logic::Battles::StageSaveData::StageSaveData* LoadStageSaveData(::System::String* str)
		{
			return ((::MX::Logic::Battles::StageSaveData::StageSaveData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_LOADSTAGESAVEDATA_OFFSET))(str, nullptr);
		}

		::MX::Logic::Battles::Ground* CreateGround(::MX::Logic::BattleEntities::BattleEntityIdProvider* arg, ::System::String* str, ::System::String* str2)
		{
			return ((::MX::Logic::Battles::Ground*(*)(::MX::Logic::BattleEntities::BattleEntityIdProvider*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_CREATEGROUND_OFFSET))(arg, str, str2, nullptr);
		}

		::MX::Logic::Battles::Ground* CreateGround(::MX::Logic::BattleEntities::BattleEntityIdProvider* arg, ::System::String* str, ::MX::Logic::Battles::StageSaveData::StageSaveData* arg2)
		{
			return ((::MX::Logic::Battles::Ground*(*)(::MX::Logic::BattleEntities::BattleEntityIdProvider*, ::System::String*, ::MX::Logic::Battles::StageSaveData::StageSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_CREATEGROUND_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void LoadLayer(GroundGrid* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(GroundGrid*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_LOADLAYER_OFFSET))(arg, arg2, nullptr);
		}

		GroundGrid* MakeGrid(::Il2CppArray<::System::Object*>* arg)
		{
			return ((GroundGrid*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEGRID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundStage* MakeStageByStageSaveData(::MX::Logic::BattleEntities::BattleEntityIdProvider* arg, GroundGrid* arg2, ::MX::Logic::Battles::StageSaveData::StageSaveData* arg3)
		{
			return ((::MX::Logic::Battles::GroundStage*(*)(::MX::Logic::BattleEntities::BattleEntityIdProvider*, GroundGrid*, ::MX::Logic::Battles::StageSaveData::StageSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_MAKESTAGEBYSTAGESAVEDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* MakeFormations(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEFORMATIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MakePreloadTable(::MX::Logic::Battles::StageSaveData::StageSaveData* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::StageSaveData::StageSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEPRELOADTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddObstacleName(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_ADDOBSTACLENAME_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* MakeEventList(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_MAKEEVENTLIST_OFFSET))(str, nullptr);
		}

		::UnityEngine::Vector3* ConvertVector3(GroundVector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(GroundVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_GROUNDFACTORY_CONVERTVECTOR3_OFFSET))(arg, nullptr);
		}

	};
}

