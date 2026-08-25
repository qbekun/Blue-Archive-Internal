#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Timeline { class DiscreteTime; }
namespace UnityEngine::Timeline { class MarkerList; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class IMarker; }
namespace UnityEngine::Playables { class IPlayableAsset; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_TRACKASSET_ONBEFORETRACKSERIALIZE_OFFSET UNITYSDK_OFFSET(0xA1975E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONAFTERTRACKDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA1975F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0xA197600)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA197610)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA197780)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0xA197C10)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONCLIPPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xA197C50)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONCLIPPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xA197D40)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONTRACKANIMATIONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xA197E30)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONTRACKANIMATIONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xA197F20)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_START_OFFSET UNITYSDK_OFFSET(0xA198010)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_END_OFFSET UNITYSDK_OFFSET(0xA1953E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA198250)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTED_OFFSET UNITYSDK_OFFSET(0xA198310)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_MUTED_OFFSET UNITYSDK_OFFSET(0xA198320)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA194F90)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_TIMELINEASSET_OFFSET UNITYSDK_OFFSET(0xA195800)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xA198330)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0xA198340)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPS_OFFSET UNITYSDK_OFFSET(0xA18FA80)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CLIPS_OFFSET UNITYSDK_OFFSET(0xA18C7D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA198350)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCLIPS_OFFSET UNITYSDK_OFFSET(0xA1898A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCURVES_OFFSET UNITYSDK_OFFSET(0xA198440)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISSUBTRACK_OFFSET UNITYSDK_OFFSET(0xA18CE50)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA198510)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCHILDTRACKS_OFFSET UNITYSDK_OFFSET(0xA18C8B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CUSTOMPLAYABLETYPENAME_OFFSET UNITYSDK_OFFSET(0xA1987E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_CUSTOMPLAYABLETYPENAME_OFFSET UNITYSDK_OFFSET(0xA1987F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CURVES_OFFSET UNITYSDK_OFFSET(0xA198800)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_CURVES_OFFSET UNITYSDK_OFFSET(0xA198810)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_DEFAULTCURVESNAME_OFFSET UNITYSDK_OFFSET(0xA198820)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_ASSET_OFFSET UNITYSDK_OFFSET(0xA198850)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_ASSETOWNER_OFFSET UNITYSDK_OFFSET(0xA198860)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_TARGETTRACK_OFFSET UNITYSDK_OFFSET(0xA198870)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_SUBTRACKSOBJECTS_OFFSET UNITYSDK_OFFSET(0xA198880)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA198890)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1988A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA1988B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_SUPPORTSNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xA198A80)
#define UNITYENGINE_TIMELINE_TRACKASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0xA198B20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECURVES_OFFSET UNITYSDK_OFFSET(0xA198C20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xA198CE0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA198D60)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEDEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xA198DB0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_TRACKASSET_DELETECLIP_OFFSET UNITYSDK_OFFSET(0xA199090)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0xA1991A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKER_OFFSET UNITYSDK_OFFSET(0xA1994E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERS_OFFSET UNITYSDK_OFFSET(0xA197C20)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERCOUNT_OFFSET UNITYSDK_OFFSET(0xA1984C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKER_OFFSET UNITYSDK_OFFSET(0xA199740)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIP_OFFSET UNITYSDK_OFFSET(0xA199800)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEANDADDNEWCLIPOFTYPE_OFFSET UNITYSDK_OFFSET(0xA199060)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPOFTYPE_OFFSET UNITYSDK_OFFSET(0xA199BA0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0xA19A0C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMASSET_OFFSET UNITYSDK_OFFSET(0xA199D90)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERSRAW_OFFSET UNITYSDK_OFFSET(0xA19A670)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARMARKERS_OFFSET UNITYSDK_OFFSET(0xA19A680)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADDMARKER_OFFSET UNITYSDK_OFFSET(0xA19A750)
#define UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKERRAW_OFFSET UNITYSDK_OFFSET(0xA19A830)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETTIMERANGEHASH_OFFSET UNITYSDK_OFFSET(0xA19A910)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADDCLIP_OFFSET UNITYSDK_OFFSET(0xA1923F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATENOTIFICATIONSPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA19ACF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xA19B400)
#define UNITYENGINE_TIMELINE_TRACKASSET_COMPILECLIPS_OFFSET UNITYSDK_OFFSET(0xA19BB50)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERCOMPILABLETRACKS_OFFSET UNITYSDK_OFFSET(0xA19C260)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xA19B070)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEMIXERPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xA19C660)
#define UNITYENGINE_TIMELINE_TRACKASSET_CONFIGURETRACKANIMATION_OFFSET UNITYSDK_OFFSET(0xA19C040)
#define UNITYENGINE_TIMELINE_TRACKASSET_SORTCLIPS_OFFSET UNITYSDK_OFFSET(0xA19CD80)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARCLIPSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA19CEC0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARSUBTRACKSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA19CF50)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCLIPMOVE_OFFSET UNITYSDK_OFFSET(0xA1917D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATENEWCLIPCONTAINERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA19A350)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xA196850)
#define UNITYENGINE_TIMELINE_TRACKASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0xA19CFD0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVESUBTRACK_OFFSET UNITYSDK_OFFSET(0xA194830)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVECLIP_OFFSET UNITYSDK_OFFSET(0xA192380)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETEVALUATIONTIME_OFFSET UNITYSDK_OFFSET(0xA1903E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETSEQUENCETIME_OFFSET UNITYSDK_OFFSET(0xA190820)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA19D1F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETGAMEOBJECTBINDING_OFFSET UNITYSDK_OFFSET(0xA189B30)
#define UNITYENGINE_TIMELINE_TRACKASSET_VALIDATECLIPTYPE_OFFSET UNITYSDK_OFFSET(0xA199930)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xA189A10)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPDATEDURATION_OFFSET UNITYSDK_OFFSET(0xA1980C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CALCULATEITEMSHASH_OFFSET UNITYSDK_OFFSET(0xA18FF20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA19DAC0)
#define UNITYENGINE_TIMELINE_TRACKASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0xA197B50)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETNOTIFICATIONDURATION_OFFSET UNITYSDK_OFFSET(0xA190840)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0xA1898F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xA19DDD0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ISCOMPILABLE_OFFSET UNITYSDK_OFFSET(0xA19DDF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPDATECHILDTRACKCACHE_OFFSET UNITYSDK_OFFSET(0xA1985C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_HASH_OFFSET UNITYSDK_OFFSET(0xA19E200)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPSHASH_OFFSET UNITYSDK_OFFSET(0xA19D940)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETANIMATIONCLIPHASH_OFFSET UNITYSDK_OFFSET(0xA18FE50)
#define UNITYENGINE_TIMELINE_TRACKASSET_HASNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xA19D1C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILENOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xA19C620)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCREATEMIXERRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA19B750)
#define UNITYENGINE_TIMELINE_TRACKASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1895A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA19E350)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_TypeDefinitionIndex = 36267;

	class TrackAsset : public Il2CppObject
	{
	public:
		::System::Int32 k_LatestVersion; // 0x0
		::System::Int32 m_Version; // 0x18
		::UnityEngine::AnimationClip* m_AnimClip; // 0x20
		TransientBuildData* s_BuildData; // 0x0
		::System::String* kDefaultCurvesName; // 0x0
		Il2CppObject* OnClipPlayableCreate; // 0x18
		Il2CppObject* OnTrackAnimationPlayableCreate; // 0x20
		::System::Boolean m_Locked; // 0x28
		::System::Boolean m_Muted; // 0x29
		::System::String* m_CustomPlayableFullTypename; // 0x30
		::UnityEngine::AnimationClip* m_Curves; // 0x38
		::UnityEngine::Playables::PlayableAsset* m_Parent; // 0x40
		Il2CppObject* m_Children; // 0x48
		::System::Int32 m_ItemsHash; // 0x50
		::Il2CppArray<::System::Object*>* m_ClipsCache; // 0x58
		::UnityEngine::Timeline::DiscreteTime* m_Start; // 0x60
		::UnityEngine::Timeline::DiscreteTime* m_End; // 0x68
		::System::Boolean m_CacheSorted; // 0x70
		Il2CppObject* m_SupportsNotifications; // 0x71
		::Il2CppArray<::System::Object*>* s_EmptyCache; // 0x28
		Il2CppObject* m_ChildTrackCache; // 0x78
		Il2CppObject* s_TrackBindingTypeAttributeCache; // 0x30
		Il2CppObject* m_Clips; // 0x80
		::UnityEngine::Timeline::MarkerList* m_Markers; // 0x88

		::System::Void OnBeforeTrackSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONBEFORETRACKSERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnAfterTrackDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONAFTERTRACKDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnUpgradeFromVersion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONUPGRADEFROMVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UpgradeToLatestVersion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UPGRADETOLATESTVERSION_OFFSET))(nullptr);
		}

		::System::Void add_OnClipPlayableCreate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONCLIPPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnClipPlayableCreate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONCLIPPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnTrackAnimationPlayableCreate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONTRACKANIMATIONPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnTrackAnimationPlayableCreate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONTRACKANIMATIONPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Double get_start()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_START_OFFSET))(nullptr);
		}

		::System::Double get_end()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_END_OFFSET))(nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_muted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTED_OFFSET))(nullptr);
		}

		::System::Void set_muted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_MUTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_mutedInHierarchy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTEDINHIERARCHY_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineAsset* get_timelineAsset()
		{
			return (return (::UnityEngine::Timeline::TimelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_TIMELINEASSET_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableAsset* get_parent()
		{
			return (return (::UnityEngine::Playables::PlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_parent(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_PARENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetClips()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_clips()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_CLIPS_OFFSET))(nullptr);
		}

		::System::Boolean get_isEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean get_hasClips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCLIPS_OFFSET))(nullptr);
		}

		::System::Boolean get_hasCurves()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCURVES_OFFSET))(nullptr);
		}

		::System::Boolean get_isSubTrack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ISSUBTRACK_OFFSET))(nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_OUTPUTS_OFFSET))(nullptr);
		}

		Il2CppObject* GetChildTracks()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCHILDTRACKS_OFFSET))(nullptr);
		}

		::System::String* get_customPlayableTypename()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_CUSTOMPLAYABLETYPENAME_OFFSET))(nullptr);
		}

		::System::Void set_customPlayableTypename(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_CUSTOMPLAYABLETYPENAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::AnimationClip* get_curves()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_CURVES_OFFSET))(nullptr);
		}

		::System::Void set_curves(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_CURVES_OFFSET))(arg, nullptr);
		}

		::System::String* UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_DEFAULTCURVESNAME_OFFSET))(nullptr);
		}

		::UnityEngine::Object* UnityEngine.Timeline.ICurvesOwner.get_asset()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_ASSET_OFFSET))(nullptr);
		}

		::UnityEngine::Object* UnityEngine.Timeline.ICurvesOwner.get_assetOwner()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_ASSETOWNER_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* UnityEngine.Timeline.ICurvesOwner.get_targetTrack()
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE.TIMELINE.ICURVESOWNER.GET_TARGETTRACK_OFFSET))(nullptr);
		}

		Il2CppObject* get_subTracksObjects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_SUBTRACKSOBJECTS_OFFSET))(nullptr);
		}

		::System::Boolean get_locked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKED_OFFSET))(nullptr);
		}

		::System::Void set_locked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_LOCKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_lockedInHierarchy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKEDINHIERARCHY_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsNotifications()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_SUPPORTSNOTIFICATIONS_OFFSET))(nullptr);
		}

		::System::Void __internalAwake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___INTERNALAWAKE_OFFSET))(nullptr);
		}

		::System::Void CreateCurves(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECURVES_OFFSET))(str, nullptr);
		}

		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATETRACKMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateDefaultClip()
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEDEFAULTCLIP_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip()
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIP_OFFSET))(nullptr);
		}

		::System::Boolean DeleteClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_DELETECLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type* arg, ::System::Double arg)
		{
			return (return (::UnityEngine::Timeline::IMarker*(*)(::System::Type*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEMARKER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateMarker(::System::Double arg)
		{
			return (return (Il2CppObject*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEMARKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean DeleteMarker(::UnityEngine::Timeline::IMarker* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::IMarker*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMarkers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERS_OFFSET))(nullptr);
		}

		::System::Int32 GetMarkerCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::IMarker* GetMarker(::System::Int32 arg)
		{
			return (return (::UnityEngine::Timeline::IMarker*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip(::System::Type* arg)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateAndAddNewClipOfType(::System::Type* arg)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEANDADDNEWCLIPOFTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClipOfType(::System::Type* arg)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPOFTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset* arg)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::UnityEngine::Playables::IPlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMPLAYABLEASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClipFromAsset(::UnityEngine::ScriptableObject* arg)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMASSET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMarkersRaw()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERSRAW_OFFSET))(nullptr);
		}

		::System::Void ClearMarkers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CLEARMARKERS_OFFSET))(nullptr);
		}

		::System::Void AddMarker(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADDMARKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean DeleteMarkerRaw(::UnityEngine::ScriptableObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKERRAW_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTimeRangeHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETTIMERANGEHASH_OFFSET))(nullptr);
		}

		::System::Void AddClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADDCLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::Playables::Playable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATENOTIFICATIONSPLAYABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg, ::UnityEngine::Playables::Playable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, Il2CppObject*, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLEGRAPH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CompileClips(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_COMPILECLIPS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GatherCompilableTracks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GATHERCOMPILABLETRACKS_OFFSET))(arg, nullptr);
		}

		::System::Void GatherNotifications(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GATHERNOTIFICATIONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEMIXERPLAYABLEGRAPH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConfigureTrackAnimation(Il2CppObject* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CONFIGURETRACKANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SortClips()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SORTCLIPS_OFFSET))(nullptr);
		}

		::System::Void ClearClipsInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CLEARCLIPSINTERNAL_OFFSET))(nullptr);
		}

		::System::Void ClearSubTracksInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CLEARSUBTRACKSINTERNAL_OFFSET))(nullptr);
		}

		::System::Void OnClipMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONCLIPMOVE_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateNewClipContainerInternal()
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATENEWCLIPCONTAINERINTERNAL_OFFSET))(nullptr);
		}

		::System::Void AddChild(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_MOVELASTTRACKBEFORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveSubTrack(::UnityEngine::Timeline::TrackAsset* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVESUBTRACK_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVECLIP_OFFSET))(arg, nullptr);
		}

		::System::Void GetEvaluationTime(double&* arg, double&* arg)
		{
			((::System::Void(*)(double&*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETEVALUATIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSequenceTime(double&* arg, double&* arg)
		{
			((::System::Void(*)(double&*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETSEQUENCETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETGAMEOBJECTBINDING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateClipType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_VALIDATECLIPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIP_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDuration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UPDATEDURATION_OFFSET))(nullptr);
		}

		::System::Int32 CalculateItemsHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CALCULATEITEMSHASH_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::Timeline::TimelineClip* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_INVALIDATE_OFFSET))(nullptr);
		}

		::System::Double GetNotificationDuration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETNOTIFICATIONDURATION_OFFSET))(nullptr);
		}

		::System::Boolean CanCompileClips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPS_OFFSET))(nullptr);
		}

		::System::Boolean CanCreateTrackMixer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCREATETRACKMIXER_OFFSET))(nullptr);
		}

		::System::Boolean IsCompilable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ISCOMPILABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateChildTrackCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UPDATECHILDTRACKCACHE_OFFSET))(nullptr);
		}

		::System::Int32 Hash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_HASH_OFFSET))(nullptr);
		}

		::System::Int32 GetClipsHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPSHASH_OFFSET))(nullptr);
		}

		::System::Int32 GetAnimationClipHash(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETANIMATIONCLIPHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasNotifications()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_HASNOTIFICATIONS_OFFSET))(nullptr);
		}

		::System::Boolean CanCompileNotifications()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILENOTIFICATIONS_OFFSET))(nullptr);
		}

		::System::Boolean CanCreateMixerRecursive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCREATEMIXERRECURSIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

