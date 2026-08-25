#pragma once
#include "unitysdk.h"

class AttendResultProcess;
class MomotalkHistory;
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::Data { class AcademyData; }
namespace MX::GameLogic::DBModel { class MomoTalkOutLineDB; }
namespace MX::Data { class AcademyMessageData; }
class UIFavorGrowthDirecting;

#define MOMOTALKINFOCOMPONENT_SENDSYNC_OFFSET UNITYSDK_OFFSET(0x1EBDE90)
#define MOMOTALKINFOCOMPONENT_TRYGETNEXTGROUPFAVORSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1EBDFF0)
#define MOMOTALKINFOCOMPONENT_TRYGETOUTLINEDB_OFFSET UNITYSDK_OFFSET(0x1EBE430)
#define MOMOTALKINFOCOMPONENT_TRYGETFAVORSCHEDULERECORDS_OFFSET UNITYSDK_OFFSET(0x1EBE490)
#define MOMOTALKINFOCOMPONENT_ONATTENDRESULTPROCESSFINISH_OFFSET UNITYSDK_OFFSET(0x1EBE500)
#define MOMOTALKINFOCOMPONENT_ONFEEDBACKFINISH_OFFSET UNITYSDK_OFFSET(0x1EBE8E0)
#define MOMOTALKINFOCOMPONENT_CACHEATTENDRESULT_OFFSET UNITYSDK_OFFSET(0x1EBF430)
#define MOMOTALKINFOCOMPONENT_GETLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EBF4D0)
#define MOMOTALKINFOCOMPONENT_SYNCMESSAGEGROUPSBYCACHE_OFFSET UNITYSDK_OFFSET(0x1EBF5B0)
#define MOMOTALKINFOCOMPONENT_GET_TOTALOUTLINECOUNT_OFFSET UNITYSDK_OFFSET(0x1EBF670)
#define MOMOTALKINFOCOMPONENT_GETCHARACTERMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1EBF7B0)
#define MOMOTALKINFOCOMPONENT_CACHEMESSAGEGROUPS_OFFSET UNITYSDK_OFFSET(0x1EBF840)
#define MOMOTALKINFOCOMPONENT_SET_FAVORSCHEDULERECORDS_OFFSET UNITYSDK_OFFSET(0x1EBF900)
#define MOMOTALKINFOCOMPONENT_TRYGETCHOICEDB_OFFSET UNITYSDK_OFFSET(0x1EBF910)
#define MOMOTALKINFOCOMPONENT_NOMESSAGEFROMANYCHARACTER_OFFSET UNITYSDK_OFFSET(0x1EBF970)
#define MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_2_OFFSET UNITYSDK_OFFSET(0x1EBFD50)
#define MOMOTALKINFOCOMPONENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBFD80)
#define MOMOTALKINFOCOMPONENT__ONCLICKATTENDSCHEDULE_B__47_0_OFFSET UNITYSDK_OFFSET(0x1EBFE40)
#define MOMOTALKINFOCOMPONENT_GET_FAVORSCHEDULERECORDS_OFFSET UNITYSDK_OFFSET(0x1EC0150)
#define MOMOTALKINFOCOMPONENT_HASUNREADMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EC0160)
#define MOMOTALKINFOCOMPONENT_GET_TOTALHISTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1EBF2F0)
#define MOMOTALKINFOCOMPONENT_HAVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EBFC90)
#define MOMOTALKINFOCOMPONENT_HAVEATTENDEDFAVORSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1EC0300)
#define MOMOTALKINFOCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EC03B0)
#define MOMOTALKINFOCOMPONENT_TRYGETHISTORIES_OFFSET UNITYSDK_OFFSET(0x1EC0570)
#define MOMOTALKINFOCOMPONENT_CLEARATTENDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x1EBE8D0)
#define MOMOTALKINFOCOMPONENT_NEEDTOSYNC_OFFSET UNITYSDK_OFFSET(0x1EC05D0)
#define MOMOTALKINFOCOMPONENT_GETHISTORY_OFFSET UNITYSDK_OFFSET(0x1EC0620)
#define MOMOTALKINFOCOMPONENT_ONFAVORSCENARIOHISTORYSYNC_OFFSET UNITYSDK_OFFSET(0x1EC0710)
#define MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_4_OFFSET UNITYSDK_OFFSET(0x1EC07D0)
#define MOMOTALKINFOCOMPONENT_CALCHISTORY_OFFSET UNITYSDK_OFFSET(0x1EBEBD0)
#define MOMOTALKINFOCOMPONENT_SYNCMOMOTALKCHOICES_OFFSET UNITYSDK_OFFSET(0x1EC07F0)
#define MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_1_OFFSET UNITYSDK_OFFSET(0x1EC11B0)
#define MOMOTALKINFOCOMPONENT_GETOUTLINEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EC12D0)
#define MOMOTALKINFOCOMPONENT_BUILDHISTORIES_OFFSET UNITYSDK_OFFSET(0x1EC08A0)
#define MOMOTALKINFOCOMPONENT_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EC16D0)
#define MOMOTALKINFOCOMPONENT_SYNCMOMOTALKOUTLINES_OFFSET UNITYSDK_OFFSET(0x1EC1750)
#define MOMOTALKINFOCOMPONENT_REFRESHRESERVED_OFFSET UNITYSDK_OFFSET(0x1EC19A0)
#define MOMOTALKINFOCOMPONENT_REQUESTATTENDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1EC0720)
#define MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_0_OFFSET UNITYSDK_OFFSET(0x1EC1AD0)
#define MOMOTALKINFOCOMPONENT_SYNCFAVORRECORDS_OFFSET UNITYSDK_OFFSET(0x1EC1990)
#define MOMOTALKINFOCOMPONENT_GETUNREADMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x1EC0180)
#define MOMOTALKINFOCOMPONENT_ONCLICKATTENDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1EC1B60)
#define MOMOTALKINFOCOMPONENT_GETNEXTFAVORSCHEDULES_OFFSET UNITYSDK_OFFSET(0x1EC1D70)
#define MOMOTALKINFOCOMPONENT_ONFAVORSCENARIOFINISH_OFFSET UNITYSDK_OFFSET(0x1EBFEF0)

	inline static constexpr unsigned int MomotalkInfoComponent_TypeDefinitionIndex = 1757;

	class MomotalkInfoComponent : public Il2CppObject
	{
	public:
		Il2CppObject* momotalkOutlines; // 0x10
		Il2CppObject* momotalkChoices; // 0x18
		Il2CppObject* momotalkHistories; // 0x20
		Il2CppObject* reservedCharacterServerIds; // 0x28
		Il2CppObject* _FavorScheduleRecords_k__BackingField; // 0x30
		Il2CppObject* ScheduleInfoCache; // 0x38
		Il2CppObject* emblemRewardCache; // 0x48
		Il2CppObject* syncCache; // 0x50
		Il2CppObject* FavorScheduleResult; // 0x58

		::System::Void SendSync(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_SENDSYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetNextGroupFavorSchedule(Il2CppObject* arg, ::MX::Data::AcademyFavorScheduleData&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::MX::Data::AcademyFavorScheduleData&*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_TRYGETNEXTGROUPFAVORSCHEDULE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetOutlineDB(::System::Int64 arg, ::MX::GameLogic::DBModel::MomoTalkOutLineDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::MomoTalkOutLineDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_TRYGETOUTLINEDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetFavorScheduleRecords(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_TRYGETFAVORSCHEDULERECORDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAttendResultProcessFinish(AttendResultProcess* arg)
		{
			((::System::Void(*)(AttendResultProcess*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_ONATTENDRESULTPROCESSFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void OnFeedbackFinish(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_ONFEEDBACKFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void CacheAttendResult(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_CACHEATTENDRESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::DateTime* GetLastMessage(::System::Int64 arg)
		{
			return ((::System::DateTime*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GETLASTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncMessageGroupsByCache(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_SYNCMESSAGEGROUPSBYCACHE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalOutlineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GET_TOTALOUTLINECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetCharacterMessageCount(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GETCHARACTERMESSAGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void CacheMessageGroups(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_CACHEMESSAGEGROUPS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_FavorScheduleRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_SET_FAVORSCHEDULERECORDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetChoiceDB(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_TRYGETCHOICEDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean NoMessageFromAnyCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_NOMESSAGEFROMANYCHARACTER_OFFSET))(nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__46_2(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_2_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void _OnClickAttendSchedule_b__47_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT__ONCLICKATTENDSCHEDULE_B__47_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_FavorScheduleRecords()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GET_FAVORSCHEDULERECORDS_OFFSET))(nullptr);
		}

		::System::Boolean HasUnreadMessage(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_HASUNREADMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalHistoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GET_TOTALHISTORYCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean HaveMessage(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_HAVEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HaveAttendedFavorSchedule(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_HAVEATTENDEDFAVORSCHEDULE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetHistories(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_TRYGETHISTORIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearAttendResultCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_CLEARATTENDRESULTCACHE_OFFSET))(nullptr);
		}

		::System::Boolean NeedToSync(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_NEEDTOSYNC_OFFSET))(arg, nullptr);
		}

		MomotalkHistory* GetHistory(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((MomotalkHistory*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GETHISTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnFavorScenarioHistorySync(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_ONFAVORSCENARIOHISTORYSYNC_OFFSET))(arg, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__46_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_4_OFFSET))(nullptr);
		}

		::System::Void CalcHistory(::System::Int64 arg, ::System::Int64 arg2, ::MX::GameLogic::DBModel::CharacterDB* arg3, ::MX::Data::AcademyData* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::GameLogic::DBModel::CharacterDB*, ::MX::Data::AcademyData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_CALCHISTORY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SyncMomotalkChoices(::System::Int64 arg, ::MX::GameLogic::DBModel::MomoTalkOutLineDB* arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::MomoTalkOutLineDB*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_SYNCMOMOTALKCHOICES_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__46_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_1_OFFSET))(nullptr);
		}

		::MX::Data::AcademyMessageData* GetOutlineMessage(::System::Int64 arg)
		{
			return ((::MX::Data::AcademyMessageData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GETOUTLINEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void BuildHistories(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_BUILDHISTORIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsLastMessage(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_ISLASTMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncMomotalkOutlines(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_SYNCMOMOTALKOUTLINES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshReserved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_REFRESHRESERVED_OFFSET))(nullptr);
		}

		::System::Void RequestAttendSchedule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_REQUESTATTENDSCHEDULE_OFFSET))(nullptr);
		}

		::System::Void _OnAttendResultProcessFinish_b__46_0(UIFavorGrowthDirecting* arg)
		{
			((::System::Void(*)(UIFavorGrowthDirecting*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT__ONATTENDRESULTPROCESSFINISH_B__46_0_OFFSET))(arg, nullptr);
		}

		::System::Void SyncFavorRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_SYNCFAVORRECORDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUnreadMessageCount(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GETUNREADMESSAGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAttendSchedule(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_ONCLICKATTENDSCHEDULE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNextFavorSchedules()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_GETNEXTFAVORSCHEDULES_OFFSET))(nullptr);
		}

		::System::Void OnFavorScenarioFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKINFOCOMPONENT_ONFAVORSCENARIOFINISH_OFFSET))(nullptr);
		}

	};

