#pragma once
#include "unitysdk.h"

namespace MX::Data { class MissionInfo; }
namespace FlatData { class GuideMissionTabType; }
namespace FlatData { class MissionCategory; }
namespace FlatData { class MissionCompleteConditionType; }
class MissionContentBase;
namespace MX::GameLogic::DBModel { class MissionProgressDB; }

#define MISSIONCONTENTBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58010)
#define MISSIONCONTENTBASE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E580B0)
#define MISSIONCONTENTBASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E5AAB0)
#define MISSIONCONTENTBASE_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E5AAD0)
#define MISSIONCONTENTBASE_SET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E5AAE0)
#define MISSIONCONTENTBASE_GET_COMPLETECOUNT_OFFSET UNITYSDK_OFFSET(0x1E5AAF0)
#define MISSIONCONTENTBASE_SET_COMPLETECOUNT_OFFSET UNITYSDK_OFFSET(0x1E5AB00)
#define MISSIONCONTENTBASE_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E5AB10)
#define MISSIONCONTENTBASE_SET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E5AB20)
#define MISSIONCONTENTBASE_GET_ISHISTORY_OFFSET UNITYSDK_OFFSET(0x1E5AB30)
#define MISSIONCONTENTBASE_SET_ISHISTORY_OFFSET UNITYSDK_OFFSET(0x1E5AB40)
#define MISSIONCONTENTBASE_GET_ISLIMITED_OFFSET UNITYSDK_OFFSET(0x1E5AB50)
#define MISSIONCONTENTBASE_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1E5AB70)
#define MISSIONCONTENTBASE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1E5AB90)
#define MISSIONCONTENTBASE_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1E5ABB0)
#define MISSIONCONTENTBASE_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1E5ABD0)
#define MISSIONCONTENTBASE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1E5ABF0)
#define MISSIONCONTENTBASE_GET_COMPLETECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1E5AC10)
#define MISSIONCONTENTBASE_GET_COMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1E5AC30)
#define MISSIONCONTENTBASE_GET_TOASTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1E5AC90)
#define MISSIONCONTENTBASE_GET_SHORTCUTS_OFFSET UNITYSDK_OFFSET(0x1E5ACB0)
#define MISSIONCONTENTBASE_GET_ISCOMPLETEEXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x1E5ACD0)
#define MISSIONCONTENTBASE_TRYRESOLVE_OFFSET UNITYSDK_OFFSET(0x1E5ACF0)
#define MISSIONCONTENTBASE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E5ADB0)
#define MISSIONCONTENTBASE_GET_CANSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1E5AFA0)
#define MISSIONCONTENTBASE_GET_ISCOUNTABLE_OFFSET UNITYSDK_OFFSET(0x1E5B270)
#define MISSIONCONTENTBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1E5B670)
#define MISSIONCONTENTBASE_GET_ISLIMITEDREWARDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1E5BB70)
#define MISSIONCONTENTBASE_GET_LOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1E5BB80)
#define MISSIONCONTENTBASE_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1E5BB90)
#define MISSIONCONTENTBASE_GET_TABTYPE_OFFSET UNITYSDK_OFFSET(0x1E5BBA0)
#define MISSIONCONTENTBASE_GET_HASSHORTCUT_OFFSET UNITYSDK_OFFSET(0x1E5BBB0)
#define MISSIONCONTENTBASE_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1E5BC00)
#define MISSIONCONTENTBASE_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x1E5BC40)
#define MISSIONCONTENTBASE_GET_ISEVENTCONTENTMISSION_OFFSET UNITYSDK_OFFSET(0x1E5BC60)
#define MISSIONCONTENTBASE_GET_ISMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0x1E5BCD0)
#define MISSIONCONTENTBASE_GET_ISWELCOMEMISSION_OFFSET UNITYSDK_OFFSET(0x1E5BD40)
#define MISSIONCONTENTBASE_GET_CLOSETIME_OFFSET UNITYSDK_OFFSET(0x1E5BDB0)
#define MISSIONCONTENTBASE_GET_HISTORYIDS_OFFSET UNITYSDK_OFFSET(0x1E5B010)
#define MISSIONCONTENTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE60)
#define MISSIONCONTENTBASE_REQUESTMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0x1E5C020)
#define MISSIONCONTENTBASE_SYNC_OFFSET UNITYSDK_OFFSET(0x1E5C030)
#define MISSIONCONTENTBASE_GET_ISCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5C0E0)
#define MISSIONCONTENTBASE_SET_ISCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5C0F0)
#define MISSIONCONTENTBASE_SWITCHMISSIONREWARDONCONDITION_OFFSET UNITYSDK_OFFSET(0x1E5C100)
#define MISSIONCONTENTBASE_CATEGORIZE_OFFSET UNITYSDK_OFFSET(0x1E5C1C0)
#define MISSIONCONTENTBASE_CHECKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKDAILYLOGINACCUMULATEDCOUNTINTHISWEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKLOGINSPECIFICTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKUNIQUEIDSCOMPLETEDINMISSIONINFOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKACCUMULATEDCOUNTEXCEEDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKACCUMULATEDCOUNTWITHUNIQUEIDSUMEXCEEDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKCURRENTCOUNTEXCEEDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKCURRENTCOUNTWITHUNIQUEIDEXCEEDCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKCURRENTCOUNTEXCEEDCOMPLETECONDITIONCOUNTCASEMATCHESPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKCURRENTCOUNTSHORTCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE_CHECKCURRENTCOUNTGREATOREQUALCOMPLETECONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MISSIONCONTENTBASE__GET_ISCOUNTABLE_B__51_0_OFFSET UNITYSDK_OFFSET(0x1E5C260)

	inline static constexpr unsigned int MissionContentBase_TypeDefinitionIndex = 1719;

	class MissionContentBase : public Il2CppObject
	{
	public:
		::MX::Data::MissionInfo* info; // 0x10
		::System::String* _description; // 0x18
		::System::Int64 _CurrentCount_k__BackingField; // 0x20
		::System::Int64 _CompleteCount_k__BackingField; // 0x28
		::System::Boolean _Complete_k__BackingField; // 0x30
		::System::Boolean _IsHistory_k__BackingField; // 0x31
		::System::Int64 _LoginCount_k__BackingField; // 0x38
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::FlatData::GuideMissionTabType* _TabType_k__BackingField; // 0x48
		::System::Boolean _IsCountChanged_k__BackingField; // 0x4C

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_CURRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_SET_CURRENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CompleteCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_COMPLETECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CompleteCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_SET_COMPLETECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Complete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_COMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_Complete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_SET_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_IsHistory(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_SET_ISHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLimited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISLIMITED_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_REWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Params()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_PARAMS_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Category()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_CATEGORY_OFFSET))(nullptr);
		}

		::FlatData::MissionCompleteConditionType* get_CompleteConditionType()
		{
			return ((::FlatData::MissionCompleteConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_COMPLETECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CompleteConditionCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_COMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_ToastImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_TOASTIMAGEPATH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Shortcuts()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_SHORTCUTS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompleteExtensionTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISCOMPLETEEXTENSIONTIME_OFFSET))(nullptr);
		}

		::System::Boolean TryResolve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_TRYRESOLVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_CANSHOWTOAST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCountable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISCOUNTABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLimitedRewardCategory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISLIMITEDREWARDCATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 get_LoginCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_LOGINCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_SEASONID_OFFSET))(nullptr);
		}

		::FlatData::GuideMissionTabType* get_TabType()
		{
			return ((::FlatData::GuideMissionTabType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_TABTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasShortcut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_HASSHORTCUT_OFFSET))(nullptr);
		}

		::System::Boolean IsEqual(MissionContentBase* arg)
		{
			return ((::System::Boolean(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_ISEQUAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEqual(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_ISEQUAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEventContentMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISEVENTCONTENTMISSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMiniGameMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWelcomeMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISWELCOMEMISSION_OFFSET))(nullptr);
		}

		::System::DateTime* get_CloseTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_CLOSETIME_OFFSET))(nullptr);
		}

		Il2CppObject* get_historyIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_HISTORYIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::MissionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_REQUESTMISSIONREWARD_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::MissionProgressDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MissionProgressDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsCountChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_GET_ISCOUNTCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_IsCountChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_SET_ISCOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void SwitchMissionRewardOnCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_SWITCHMISSIONREWARDONCONDITION_OFFSET))(nullptr);
		}

		::System::Void Categorize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CATEGORIZE_OFFSET))(nullptr);
		}

		::System::Void CheckComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void CheckDailyLoginAccumulatedCountInThisWeek()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKDAILYLOGINACCUMULATEDCOUNTINTHISWEEK_OFFSET))(nullptr);
		}

		::System::Void CheckLoginSpecificTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKLOGINSPECIFICTIME_OFFSET))(nullptr);
		}

		::System::Void CheckUniqueIdsCompletedInMissionInfoParameters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKUNIQUEIDSCOMPLETEDINMISSIONINFOPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void CheckAccumulatedCountExceedCompleteConditionCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKACCUMULATEDCOUNTEXCEEDCOMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void CheckAccumulatedCountWithUniqueIdSumExceedCompleteConditionCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKACCUMULATEDCOUNTWITHUNIQUEIDSUMEXCEEDCOMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void CheckCurrentCountExceedCompleteConditionCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKCURRENTCOUNTEXCEEDCOMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void CheckCurrentCountWithUniqueIdExceedCompleteConditionCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKCURRENTCOUNTWITHUNIQUEIDEXCEEDCOMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void CheckCurrentCountExceedCompleteConditionCountCaseMatchesParameterCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKCURRENTCOUNTEXCEEDCOMPLETECONDITIONCOUNTCASEMATCHESPARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Void CheckCurrentCountShortCompleteConditionCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKCURRENTCOUNTSHORTCOMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void CheckCurrentCountGreatOrEqualCompleteConditionCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE_CHECKCURRENTCOUNTGREATOREQUALCOMPLETECONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean _get_IsCountable_b__51_0(::MX::Data::MissionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONCONTENTBASE__GET_ISCOUNTABLE_B__51_0_OFFSET))(arg, nullptr);
		}

	};

