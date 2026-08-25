#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class IFieldStage; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MXField::Task { class FieldBattleEndTask; }
namespace MX::Logic::Data { class BattleSetting; }

#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_GET_CURRENTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xED3AE0)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_SET_CURRENTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xED3AF0)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xED3B00)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_ISCLEARSTAGE_OFFSET UNITYSDK_OFFSET(0xED3B10)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0xED3BE0)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0xED3EB0)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_ENTERSTAGE_OFFSET UNITYSDK_OFFSET(0xED4040)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_CHECKSETFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0xED41F0)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_CO_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xED4590)
#define MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xED4640)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldContentStageObject_TypeDefinitionIndex = 10939;

	class FieldContentStageObject : public Il2CppObject
	{
	public:
		Il2CppObject* stageHistoryDBs; // 0x10
		::MX::Data::IFieldStage* _CurrentStageInfo_k__BackingField; // 0x18

		::MX::Data::IFieldStage* get_CurrentStageInfo()
		{
			return ((::MX::Data::IFieldStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_GET_CURRENTSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_CurrentStageInfo(::MX::Data::IFieldStage* arg)
		{
			((::System::Void(*)(::MX::Data::IFieldStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_SET_CURRENTSTAGEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Boolean IsClearStage(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_ISCLEARSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void EnterStage(::MX::Data::IFieldStage* arg, ::MXField::Task::FieldBattleEndTask* arg2)
		{
			((::System::Void(*)(::MX::Data::IFieldStage*, ::MXField::Task::FieldBattleEndTask*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_ENTERSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckSetFixedEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_CHECKSETFIXEDECHELON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_StartBattle(::MX::Logic::Data::BattleSetting* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_CO_STARTBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCONTENTSTAGEOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

