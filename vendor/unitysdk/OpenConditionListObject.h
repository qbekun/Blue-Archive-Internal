#pragma once
#include "unitysdk.h"

namespace FlatData { class OpenConditionContent; }
namespace MX::GameLogic::Service { class OpenConditionLockReason; }
namespace MX::NetworkProtocol { class OpenConditionEventListResponse; }

#define OPENCONDITIONLISTOBJECT_GET_ALLCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1EC4E00)
#define OPENCONDITIONLISTOBJECT_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1EC4E50)
#define OPENCONDITIONLISTOBJECT_GET_NEEDTOCHECKEVENTHISTORYFORSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x1EC5230)
#define OPENCONDITIONLISTOBJECT_SET_NEEDTOCHECKEVENTHISTORYFORSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x1EC5240)
#define OPENCONDITIONLISTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EC5250)
#define OPENCONDITIONLISTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1EC5440)
#define OPENCONDITIONLISTOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EC5EE0)
#define OPENCONDITIONLISTOBJECT_REFRESH_OFFSET UNITYSDK_OFFSET(0x1EC5470)
#define OPENCONDITIONLISTOBJECT_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1EB7420)
#define OPENCONDITIONLISTOBJECT_SHOWOPENCONDITIONSHORTCUTPOPUP_OFFSET UNITYSDK_OFFSET(0x1EC5F70)
#define OPENCONDITIONLISTOBJECT_OPENSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1EC65E0)
#define OPENCONDITIONLISTOBJECT_CHECK_OFFSET UNITYSDK_OFFSET(0x1EC43D0)
#define OPENCONDITIONLISTOBJECT_CHECK_OFFSET UNITYSDK_OFFSET(0x1EC6660)
#define OPENCONDITIONLISTOBJECT_ISUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EC66F0)
#define OPENCONDITIONLISTOBJECT_GETLOCKMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EC6790)
#define OPENCONDITIONLISTOBJECT_GETLOCKMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EC6880)
#define OPENCONDITIONLISTOBJECT_HASCAMPAIGNSTAGECONDITION_OFFSET UNITYSDK_OFFSET(0x1EC40A0)
#define OPENCONDITIONLISTOBJECT_HASSCENARIOCONDITION_OFFSET UNITYSDK_OFFSET(0x1EC4100)
#define OPENCONDITIONLISTOBJECT_SYNCEVENTLIST_OFFSET UNITYSDK_OFFSET(0x1EC7480)
#define OPENCONDITIONLISTOBJECT_CHECKEVENTOPENCONDITIONSANDSYNC_OFFSET UNITYSDK_OFFSET(0x1EC7810)
#define OPENCONDITIONLISTOBJECT_ISSCENARIOMODEAVAILABLEBYEVENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1EC78A0)
#define OPENCONDITIONLISTOBJECT_ISSCENARIOMODEAVAILABLEBYWORLDRAIDBOSSCLEAR_OFFSET UNITYSDK_OFFSET(0x1EC7920)
#define OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODECONQUESTTILEDBS_OFFSET UNITYSDK_OFFSET(0x1EC74C0)
#define OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODECONQUESTTILEDB_OFFSET UNITYSDK_OFFSET(0x1EC7990)
#define OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODECONQUESTTILEDB_OFFSET UNITYSDK_OFFSET(0x1EC7A50)
#define OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODEWORLDRAIDLOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0x1EC7660)
#define OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODEWORLDRAIDLOCALBOSSDB_OFFSET UNITYSDK_OFFSET(0x1EC7B50)
#define OPENCONDITIONLISTOBJECT_GETLOCKUICONTENT_OFFSET UNITYSDK_OFFSET(0x1EC7CE0)
#define OPENCONDITIONLISTOBJECT_SHOWOPENCONDITIONLOCKPOPUP_OFFSET UNITYSDK_OFFSET(0x1EC3350)
#define OPENCONDITIONLISTOBJECT_SHOWOPENCONDITIONLOCKTOAST_OFFSET UNITYSDK_OFFSET(0x1EC35D0)

	inline static constexpr unsigned int OpenConditionListObject_TypeDefinitionIndex = 1775;

	class OpenConditionListObject : public Il2CppObject
	{
	public:
		Il2CppObject* openConditionList; // 0x10
		Il2CppObject* serverStaticOpenConditions; // 0x18
		Il2CppObject* lockUIList; // 0x20
		Il2CppObject* availableContents; // 0x28
		::System::Boolean _NeedToCheckEventHistoryForScenarioMode_k__BackingField; // 0x30
		Il2CppObject* ScenarioModeOpenConditionEvents; // 0x38
		Il2CppObject* ScenarioModeOpenConditionWorldRaidBossClear; // 0x40

		Il2CppObject* get_AllConditions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_GET_ALLCONDITIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageHistory()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedToCheckEventHistoryForScenarioMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_GET_NEEDTOCHECKEVENTHISTORYFORSCENARIOMODE_OFFSET))(nullptr);
		}

		::System::Void set_NeedToCheckEventHistoryForScenarioMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SET_NEEDTOCHECKEVENTHISTORYFORSCENARIOMODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean IsAvailable(::FlatData::OpenConditionContent* arg)
		{
			return ((::System::Boolean(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_ISAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowOpenConditionShortcutPopup(::System::Int64 arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SHOWOPENCONDITIONSHORTCUTPOPUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* OpenShortcutUI(::FlatData::OpenConditionContent* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_OPENSHORTCUTUI_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Check(::FlatData::OpenConditionContent* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_CHECK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Check(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_CHECK_OFFSET))(str, nullptr);
		}

		::System::Boolean IsUIOpen(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_ISUIOPEN_OFFSET))(str, nullptr);
		}

		::System::String* GetLockMessage(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_GETLOCKMESSAGE_OFFSET))(str, nullptr);
		}

		::System::String* GetLockMessage(::FlatData::OpenConditionContent* arg, ::MX::GameLogic::Service::OpenConditionLockReason* arg2)
		{
			return ((::System::String*(*)(::FlatData::OpenConditionContent*, ::MX::GameLogic::Service::OpenConditionLockReason*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_GETLOCKMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasCampaignStageCondition(::FlatData::OpenConditionContent* arg)
		{
			return ((::System::Boolean(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_HASCAMPAIGNSTAGECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasScenarioCondition(::FlatData::OpenConditionContent* arg)
		{
			return ((::System::Boolean(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_HASSCENARIOCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void SyncEventList(::MX::NetworkProtocol::OpenConditionEventListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::OpenConditionEventListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SYNCEVENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CheckEventOpenConditionsAndSync()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_CHECKEVENTOPENCONDITIONSANDSYNC_OFFSET))(nullptr);
		}

		::System::Boolean IsScenarioModeAvailableByEventContent(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_ISSCENARIOMODEAVAILABLEBYEVENTCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsScenarioModeAvailableByWorldRaidBossClear(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_ISSCENARIOMODEAVAILABLEBYWORLDRAIDBOSSCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void SyncScenarioModeConquestTileDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODECONQUESTTILEDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncScenarioModeConquestTileDB(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODECONQUESTTILEDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncScenarioModeConquestTileDB(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODECONQUESTTILEDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SyncScenarioModeWorldRaidLocalBossDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODEWORLDRAIDLOCALBOSSDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncScenarioModeWorldRaidLocalBossDB(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SYNCSCENARIOMODEWORLDRAIDLOCALBOSSDB_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* GetLockUIContent(::System::String* str)
		{
			return ((::FlatData::OpenConditionContent*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_GETLOCKUICONTENT_OFFSET))(str, nullptr);
		}

		::System::Void ShowOpenConditionLockPopup(::FlatData::OpenConditionContent* arg, ::MX::GameLogic::Service::OpenConditionLockReason* arg2)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::MX::GameLogic::Service::OpenConditionLockReason*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SHOWOPENCONDITIONLOCKPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowOpenConditionLockToast(::FlatData::OpenConditionContent* arg, ::MX::GameLogic::Service::OpenConditionLockReason* arg2)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::MX::GameLogic::Service::OpenConditionLockReason*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONLISTOBJECT_SHOWOPENCONDITIONLOCKTOAST_OFFSET))(arg, arg2, nullptr);
		}

	};

