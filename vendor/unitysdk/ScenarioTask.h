#pragma once
#include "unitysdk.h"

class UIScenarioOption;
class OnScenarioFinish;
class UIScenarioNew;
namespace MX::Data { class BGMPlayInfo; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Audio { class AudioMixerSnapshot; }
class ScenarioLogSystem;
class IScenarioLogProvider;
class ScenarioScriptInfo;
namespace MX::Data::Excel { class ContentsScenarioExcel; }
namespace MX::SaveData { class ScenarioModeContinueSaveDataV2; }

#define SCENARIOTASK_GET_CURRENTID_OFFSET UNITYSDK_OFFSET(0x20304D0)
#define SCENARIOTASK_GET_TEENAGEMODE_OFFSET UNITYSDK_OFFSET(0x20304E0)
#define SCENARIOTASK_GET_CURRENTGROUPS_OFFSET UNITYSDK_OFFSET(0x2030570)
#define SCENARIOTASK_GET_RESUMEBGM_OFFSET UNITYSDK_OFFSET(0x20305F0)
#define SCENARIOTASK_SET_RESUMEBGM_OFFSET UNITYSDK_OFFSET(0x2030600)
#define SCENARIOTASK_GET_CURRENTGROUPDID_OFFSET UNITYSDK_OFFSET(0x2030610)
#define SCENARIOTASK_GET_ISFIRSTSCENARIO_OFFSET UNITYSDK_OFFSET(0x2030620)
#define SCENARIOTASK_GET_GETSKIPPOINTSCRIPTCOUNT_OFFSET UNITYSDK_OFFSET(0x20306E0)
#define SCENARIOTASK_GET_UNLOADONRELEASE_OFFSET UNITYSDK_OFFSET(0x2030780)
#define SCENARIOTASK_SET_UNLOADONRELEASE_OFFSET UNITYSDK_OFFSET(0x2030790)
#define SCENARIOTASK_GET_UNLOADONSTART_OFFSET UNITYSDK_OFFSET(0x20307A0)
#define SCENARIOTASK_SET_UNLOADONSTART_OFFSET UNITYSDK_OFFSET(0x20307B0)
#define SCENARIOTASK_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x20307C0)
#define SCENARIOTASK_GET_SETSCREENVISIBLITYONSTART_OFFSET UNITYSDK_OFFSET(0x20307D0)
#define SCENARIOTASK_SET_SETSCREENVISIBLITYONSTART_OFFSET UNITYSDK_OFFSET(0x20307E0)
#define SCENARIOTASK_GET_USEAUDIOMIXERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x20307F0)
#define SCENARIOTASK_SET_USEAUDIOMIXERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x2030800)
#define SCENARIOTASK_GET_ISSHORTSKIPMESSAGE_OFFSET UNITYSDK_OFFSET(0x2030810)
#define SCENARIOTASK_SET_ISSHORTSKIPMESSAGE_OFFSET UNITYSDK_OFFSET(0x2030820)
#define SCENARIOTASK_GET_LOGPROVIDER_OFFSET UNITYSDK_OFFSET(0x2030830)
#define SCENARIOTASK_GET_ISFIELD_OFFSET UNITYSDK_OFFSET(0x2030840)
#define SCENARIOTASK_SET_ISFIELD_OFFSET UNITYSDK_OFFSET(0x2030850)
#define SCENARIOTASK_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x2030860)
#define SCENARIOTASK_SET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x2030870)
#define SCENARIOTASK_SETFIELDSCENARIO_OFFSET UNITYSDK_OFFSET(0x2030880)
#define SCENARIOTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2030890)
#define SCENARIOTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2030AF0)
#define SCENARIOTASK_CLEAR_OFFSET UNITYSDK_OFFSET(0x2030940)
#define SCENARIOTASK_UNLOAD_OFFSET UNITYSDK_OFFSET(0x2030B20)
#define SCENARIOTASK_GETNEXTSCENARIOUNIQUEID_OFFSET UNITYSDK_OFFSET(0x2030BC0)
#define SCENARIOTASK_GET_CURRENTSCENARIO_OFFSET UNITYSDK_OFFSET(0x2030D70)
#define SCENARIOTASK_GETNEXTSCENARIOWITHSELECTION_OFFSET UNITYSDK_OFFSET(0x2030E10)
#define SCENARIOTASK_HASNEXTSCENARIO_OFFSET UNITYSDK_OFFSET(0x2030FA0)
#define SCENARIOTASK_STARTSCENARIOGROUP_OFFSET UNITYSDK_OFFSET(0x2030FD0)
#define SCENARIOTASK_STARTCONTENTSSCENARIO_OFFSET UNITYSDK_OFFSET(0x2031980)
#define SCENARIOTASK_STARTSCENARIOGROUPCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x20289A0)
#define SCENARIOTASK_STARTSCENARIOGROUPCONTINUE_OFFSET UNITYSDK_OFFSET(0x202E6E0)
#define SCENARIOTASK_GET_LASTPRELOADEDINDEX_OFFSET UNITYSDK_OFFSET(0x2032010)
#define SCENARIOTASK_SET_LASTPRELOADEDINDEX_OFFSET UNITYSDK_OFFSET(0x2032020)
#define SCENARIOTASK_PRELOADRESOURCES_OFFSET UNITYSDK_OFFSET(0x2032030)
#define SCENARIOTASK_GETUIANDLOADALL_OFFSET UNITYSDK_OFFSET(0x2032A90)
#define SCENARIOTASK_PRELOADRESOURCES_OFFSET UNITYSDK_OFFSET(0x2032B50)
#define SCENARIOTASK_PRELOADRESOURCES_OFFSET UNITYSDK_OFFSET(0x2032C50)
#define SCENARIOTASK_INITSOUND_OFFSET UNITYSDK_OFFSET(0x2031A70)
#define SCENARIOTASK_UNINITSOUND_OFFSET UNITYSDK_OFFSET(0x20332B0)
#define SCENARIOTASK_ADVANCESCENARIO_OFFSET UNITYSDK_OFFSET(0x20333E0)
#define SCENARIOTASK_ADVANCEWITHSELECTION_OFFSET UNITYSDK_OFFSET(0x20336C0)
#define SCENARIOTASK_ADVANCELOOP_OFFSET UNITYSDK_OFFSET(0x2033780)
#define SCENARIOTASK_ADVANCEWITHQUESTIONSELECTION_OFFSET UNITYSDK_OFFSET(0x2033910)
#define SCENARIOTASK_FINISHSCENARIO_OFFSET UNITYSDK_OFFSET(0x2031550)
#define SCENARIOTASK_SHOWSCENARIOUI_OFFSET UNITYSDK_OFFSET(0x2031370)
#define SCENARIOTASK_HANDLEBGMANDSOUND_OFFSET UNITYSDK_OFFSET(0x20311A0)
#define SCENARIOTASK_SKIPTOEND_OFFSET UNITYSDK_OFFSET(0x2033A20)
#define SCENARIOTASK_TRYFINDBOOKMARK_OFFSET UNITYSDK_OFFSET(0x2033820)
#define SCENARIOTASK_RELEASEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x2033450)
#define SCENARIOTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2033ED0)
#define SCENARIOTASK__GET_GETSKIPPOINTSCRIPTCOUNT_B__27_0_OFFSET UNITYSDK_OFFSET(0x2034000)
#define SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_0_OFFSET UNITYSDK_OFFSET(0x2034020)
#define SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_1_OFFSET UNITYSDK_OFFSET(0x2034060)
#define SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_2_OFFSET UNITYSDK_OFFSET(0x20340A0)
#define SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_3_OFFSET UNITYSDK_OFFSET(0x20340D0)
#define SCENARIOTASK__GET_CURRENTSCENARIO_B__71_0_OFFSET UNITYSDK_OFFSET(0x2034100)
#define SCENARIOTASK__STARTSCENARIOGROUPCONTINUE_G__PREPARECONTINUETARGET|77_6_OFFSET UNITYSDK_OFFSET(0x2034130)
#define SCENARIOTASK__PRELOADRESOURCES_B__84_0_OFFSET UNITYSDK_OFFSET(0x2034320)
#define SCENARIOTASK__PRELOADRESOURCES_G__ADDRESPATH|85_0_OFFSET UNITYSDK_OFFSET(0x2033120)
#define SCENARIOTASK__HANDLEBGMANDSOUND_B__94_0_OFFSET UNITYSDK_OFFSET(0x2034360)
#define SCENARIOTASK__SKIPTOEND_G__EXECUTE|95_0_OFFSET UNITYSDK_OFFSET(0x2033C80)
#define SCENARIOTASK__TRYFINDBOOKMARK_B__96_0_OFFSET UNITYSDK_OFFSET(0x2034380)
#define SCENARIOTASK__RELEASEPREVIOUS_B__98_0_OFFSET UNITYSDK_OFFSET(0x20343D0)
#define SCENARIOTASK__RELEASEPREVIOUS_G__RELEASEPREV|98_1_OFFSET UNITYSDK_OFFSET(0x2033D30)

	inline static constexpr unsigned int ScenarioTask_TypeDefinitionIndex = 3230;

	class ScenarioTask : public Il2CppObject
	{
	public:
		UIScenarioOption* SCENARIO_OPTION; // 0x0
		::System::Int64 InvalidScenarioId; // 0x0
		::System::Int64 currentGroupdId; // 0x10
		::System::Int64 currentId; // 0x18
		::System::Int64 TUTORIAL_0_GROUP_ID; // 0x0
		::System::Int64 TUTORIAL_0_SELECT_SKIP_INDEX; // 0x0
		Il2CppObject* continuousGroups; // 0x20
		OnScenarioFinish* OnFinish; // 0x28
		::System::Boolean continuous; // 0x30
		UIScenarioNew* uiScenario; // 0x38
		::MX::Data::BGMPlayInfo* bgmPlayInfoPrev; // 0x40
		::System::Boolean _ResumeBGM_k__BackingField; // 0x48
		::System::Boolean _UnloadOnRelease_k__BackingField; // 0x49
		::System::Boolean _UnloadOnStart_k__BackingField; // 0x4A
		::System::Int32 PreloadAmount; // 0x4C
		::UnityEngine::Coroutine* preloadCoroutine; // 0x50
		::System::Boolean _SetScreenVisiblityOnStart_k__BackingField; // 0x58
		::System::Boolean _UseAudioMixerSnapshot_k__BackingField; // 0x59
		::UnityEngine::Audio::AudioMixerSnapshot* backupSnapshot; // 0x60
		::System::Boolean _IsShortSkipMessage_k__BackingField; // 0x68
		ScenarioLogSystem* logSystem; // 0x70
		::System::Boolean _IsField_k__BackingField; // 0x78
		::System::Boolean _IsClientOnly_k__BackingField; // 0x79
		::System::Int64 _LastPreloadedIndex_k__BackingField; // 0x80
		Il2CppObject* bgToRelease; // 0x88

		::System::Int64 get_CurrentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_CURRENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_TeenageMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_TEENAGEMODE_OFFSET))(nullptr);
		}

		Il2CppObject* get_currentGroups()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_CURRENTGROUPS_OFFSET))(nullptr);
		}

		::System::Boolean get_ResumeBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_RESUMEBGM_OFFSET))(nullptr);
		}

		::System::Void set_ResumeBGM(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_RESUMEBGM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentGroupdId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_CURRENTGROUPDID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFirstScenario()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_ISFIRSTSCENARIO_OFFSET))(nullptr);
		}

		::System::Int32 get_GetSkipPointScriptCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_GETSKIPPOINTSCRIPTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_UnloadOnRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_UNLOADONRELEASE_OFFSET))(nullptr);
		}

		::System::Void set_UnloadOnRelease(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_UNLOADONRELEASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UnloadOnStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_UNLOADONSTART_OFFSET))(nullptr);
		}

		::System::Void set_UnloadOnStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_UNLOADONSTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_ISLOADING_OFFSET))(nullptr);
		}

		::System::Boolean get_SetScreenVisiblityOnStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_SETSCREENVISIBLITYONSTART_OFFSET))(nullptr);
		}

		::System::Void set_SetScreenVisiblityOnStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_SETSCREENVISIBLITYONSTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseAudioMixerSnapshot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_USEAUDIOMIXERSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void set_UseAudioMixerSnapshot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_USEAUDIOMIXERSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsShortSkipMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_ISSHORTSKIPMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_IsShortSkipMessage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_ISSHORTSKIPMESSAGE_OFFSET))(arg, nullptr);
		}

		IScenarioLogProvider* get_LogProvider()
		{
			return ((IScenarioLogProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_LOGPROVIDER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_ISFIELD_OFFSET))(nullptr);
		}

		::System::Void set_IsField(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_ISFIELD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_ISCLIENTONLY_OFFSET))(nullptr);
		}

		::System::Void set_IsClientOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_ISCLIENTONLY_OFFSET))(arg, nullptr);
		}

		::System::Void SetFieldScenario(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SETFIELDSCENARIO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_UNLOAD_OFFSET))(nullptr);
		}

		::System::Int64 GetNextScenarioUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GETNEXTSCENARIOUNIQUEID_OFFSET))(nullptr);
		}

		ScenarioScriptInfo* get_currentScenario()
		{
			return ((ScenarioScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_CURRENTSCENARIO_OFFSET))(nullptr);
		}

		::System::Int64 GetNextScenarioWithSelection(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GETNEXTSCENARIOWITHSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasNextScenario()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_HASNEXTSCENARIO_OFFSET))(nullptr);
		}

		::System::Void StartScenarioGroup(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_STARTSCENARIOGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartContentsScenario(::MX::Data::Excel::ContentsScenarioExcel* arg, OnScenarioFinish* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ContentsScenarioExcel*, OnScenarioFinish*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_STARTCONTENTSSCENARIO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartScenarioGroupContinuous(::Il2CppArray<::System::Object*>* arg, OnScenarioFinish* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, OnScenarioFinish*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_STARTSCENARIOGROUPCONTINUOUS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartScenarioGroupContinue(::Il2CppArray<::System::Object*>* arg, OnScenarioFinish* arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::MX::SaveData::ScenarioModeContinueSaveDataV2* arg5)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, OnScenarioFinish*, ::System::Int32, ::System::Boolean, ::MX::SaveData::ScenarioModeContinueSaveDataV2*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_STARTSCENARIOGROUPCONTINUE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_LastPreloadedIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GET_LASTPRELOADEDINDEX_OFFSET))(nullptr);
		}

		::System::Void set_LastPreloadedIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SET_LASTPRELOADEDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void PreloadResources(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_PRELOADRESOURCES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* GetUIAndLoadAll(Il2CppObject* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_GETUIANDLOADALL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PreloadResources(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_PRELOADRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void PreloadResources(ScenarioScriptInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_PRELOADRESOURCES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitSound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_INITSOUND_OFFSET))(nullptr);
		}

		::System::Void UninitSound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_UNINITSOUND_OFFSET))(nullptr);
		}

		::System::Void AdvanceScenario()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_ADVANCESCENARIO_OFFSET))(nullptr);
		}

		::System::Void AdvanceWithSelection(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_ADVANCEWITHSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void AdvanceLoop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_ADVANCELOOP_OFFSET))(nullptr);
		}

		::System::Void AdvanceWithQuestionSelection(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_ADVANCEWITHQUESTIONSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenario()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_FINISHSCENARIO_OFFSET))(nullptr);
		}

		::System::Void ShowScenarioUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SHOWSCENARIOUI_OFFSET))(arg, nullptr);
		}

		::System::Void HandleBGMAndSound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_HANDLEBGMANDSOUND_OFFSET))(nullptr);
		}

		::System::Void SkipToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_SKIPTOEND_OFFSET))(nullptr);
		}

		::System::Boolean TryFindBookmark(int64_t&* arg)
		{
			return ((::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_TRYFINDBOOKMARK_OFFSET))(arg, nullptr);
		}

		::System::Void ReleasePrevious()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_RELEASEPREVIOUS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _get_GetSkipPointScriptCount_b__27_0(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__GET_GETSKIPPOINTSCRIPTCOUNT_B__27_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetNextScenarioUniqueId_b__69_0(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetNextScenarioUniqueId_b__69_1(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetNextScenarioUniqueId_b__69_2(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetNextScenarioUniqueId_b__69_3(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__GETNEXTSCENARIOUNIQUEID_B__69_3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _get_currentScenario_b__71_0(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__GET_CURRENTSCENARIO_B__71_0_OFFSET))(arg, nullptr);
		}

		::System::Void _StartScenarioGroupContinue_g__PrepareContinueTarget|77_6(::System::Int64 arg, <>c__DisplayClass77_1&* arg2)
		{
			((::System::Void(*)(::System::Int64, <>c__DisplayClass77_1&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__STARTSCENARIOGROUPCONTINUE_G__PREPARECONTINUETARGET|77_6_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _PreloadResources_b__84_0(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__PRELOADRESOURCES_B__84_0_OFFSET))(arg, nullptr);
		}

		::System::Void _PreloadResources_g__AddResPath|85_0(::System::String* str, ScenarioScriptInfo* arg, <>c__DisplayClass85_0&* arg2)
		{
			((::System::Void(*)(::System::String*, ScenarioScriptInfo*, <>c__DisplayClass85_0&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__PRELOADRESOURCES_G__ADDRESPATH|85_0_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Boolean _HandleBGMAndSound_b__94_0(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__HANDLEBGMANDSOUND_B__94_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SkipToEnd_g__Execute|95_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__SKIPTOEND_G__EXECUTE|95_0_OFFSET))(nullptr);
		}

		::System::Boolean _TryFindBookmark_b__96_0(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__TRYFINDBOOKMARK_B__96_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ReleasePrevious_b__98_0(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__RELEASEPREVIOUS_B__98_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ReleasePrevious_g__ReleasePrev|98_1(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTASK__RELEASEPREVIOUS_G__RELEASEPREV|98_1_OFFSET))(arg, nullptr);
		}

	};

