#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class DispatchType; }
namespace MXField::Quest { class FieldQuestProgressInfo; }
namespace MXField::Quest { class FieldQuestStatus; }
namespace MXField::Quest { class QuestStatus; }

#define MXFIELD_QUEST_FIELDQUESTTRACKER_UPDATEQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xEBC690)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_ONFIELDCONDITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xEBC970)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_GET_QUESTSTATUSES_OFFSET UNITYSDK_OFFSET(0xEBC9D0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEBC9E0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEBD1D0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_FILTERQUESTSBYIDS_OFFSET UNITYSDK_OFFSET(0xEBD410)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_LOADDAILYHISTORIES_OFFSET UNITYSDK_OFFSET(0xEBD510)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_GET_DAILYQUESTS_OFFSET UNITYSDK_OFFSET(0xEBDB00)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_GETQUESTPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xEBDB10)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_SETCURRENTDATEQUESTS_OFFSET UNITYSDK_OFFSET(0xEBE350)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_ISINPROGRESSQUEST_OFFSET UNITYSDK_OFFSET(0xEBE7D0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_LOAD_OFFSET UNITYSDK_OFFSET(0xEBE8D0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_COWAITFORLOAD_OFFSET UNITYSDK_OFFSET(0xEBEF30)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_ISCLEARQUEST_OFFSET UNITYSDK_OFFSET(0xEBEFC0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_CLEARQUESTCOMPLETELY_OFFSET UNITYSDK_OFFSET(0xEBF300)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_GET_QUESTSTATUSESBYID_OFFSET UNITYSDK_OFFSET(0xEBF3E0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_SYNC_OFFSET UNITYSDK_OFFSET(0xEBF3F0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_RELEASE_OFFSET UNITYSDK_OFFSET(0xEBFB20)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_REFRESHQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xEBC9B0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_GET_HASSTATUSCHANGEDQUEST_OFFSET UNITYSDK_OFFSET(0xEBFCE0)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_CLEARQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xEBD060)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_PROCESSQUESTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xEBFC50)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_ISQUESTSTATUSMATCH_OFFSET UNITYSDK_OFFSET(0xEBE850)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_BUILDQUESTHISTORYBYSKIP_OFFSET UNITYSDK_OFFSET(0xEBFD20)
#define MXFIELD_QUEST_FIELDQUESTTRACKER_TRYGETPROGRESSQUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xEBE1A0)

namespace MXField::Quest
{
	inline static constexpr unsigned int FieldQuestTracker_TypeDefinitionIndex = 10836;

	class FieldQuestTracker : public Il2CppObject
	{
	public:
		Il2CppObject* _DailyQuests_k__BackingField; // 0x10
		Il2CppObject* _QuestStatusesById_k__BackingField; // 0x18
		Il2CppObject* _QuestStatuses_k__BackingField; // 0x20
		Il2CppObject* DisabledQuests; // 0x28
		Il2CppObject* InProgressQuests; // 0x30
		Il2CppObject* ClearQuests; // 0x38
		Il2CppObject* CurrentDateQuests; // 0x40
		Il2CppObject* statusChangedQuestQueue; // 0x48

		::System::Void UpdateQuestStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_UPDATEQUESTSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean OnFieldConditionChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_ONFIELDCONDITIONCHANGED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_QuestStatuses()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_GET_QUESTSTATUSES_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* FilterQuestsByIds(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_FILTERQUESTSBYIDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadDailyHistories(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_LOADDAILYHISTORIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DailyQuests()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_GET_DAILYQUESTS_OFFSET))(nullptr);
		}

		::MXField::Quest::FieldQuestProgressInfo* GetQuestProgressInfo()
		{
			return ((::MXField::Quest::FieldQuestProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_GETQUESTPROGRESSINFO_OFFSET))(nullptr);
		}

		::System::Void SetCurrentDateQuests(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_SETCURRENTDATEQUESTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInProgressQuest(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_ISINPROGRESSQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void Load(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForLoad()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_COWAITFORLOAD_OFFSET))(nullptr);
		}

		::System::Boolean IsClearQuest(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_ISCLEARQUEST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearQuestCompletely()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_CLEARQUESTCOMPLETELY_OFFSET))(nullptr);
		}

		Il2CppObject* get_QuestStatusesById()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_GET_QUESTSTATUSESBYID_OFFSET))(nullptr);
		}

		::System::Void Sync(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void RefreshQuestStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_REFRESHQUESTSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasStatusChangedQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_GET_HASSTATUSCHANGEDQUEST_OFFSET))(nullptr);
		}

		::System::Void ClearQuestStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_CLEARQUESTSTATUS_OFFSET))(nullptr);
		}

		::System::Void ProcessQuestStatusChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_PROCESSQUESTSTATUSCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean IsQuestStatusMatch(::System::Int64 arg, ::MXField::Quest::QuestStatus* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MXField::Quest::QuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_ISQUESTSTATUSMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BuildQuestHistoryBySkip(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_BUILDQUESTHISTORYBYSKIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetProgressQuestGroupId(int64_t&* arg)
		{
			return ((::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTTRACKER_TRYGETPROGRESSQUESTGROUPID_OFFSET))(arg, nullptr);
		}

	};
}

