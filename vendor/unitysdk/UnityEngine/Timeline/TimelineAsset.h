#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class MarkerTrack; }
namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class DiscreteTime; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0xA192880)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET UNITYSDK_OFFSET(0xA192890)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA1928A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0xA192FE0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET UNITYSDK_OFFSET(0xA193260)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0xA1932C0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET UNITYSDK_OFFSET(0xA1932D0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA1932E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA193390)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA193830)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA193A80)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA193ED0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET UNITYSDK_OFFSET(0xA193FD0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET UNITYSDK_OFFSET(0xA193810)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET UNITYSDK_OFFSET(0xA194030)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET UNITYSDK_OFFSET(0xA194070)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET UNITYSDK_OFFSET(0xA193F00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0xA193AD0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET UNITYSDK_OFFSET(0xA193860)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET UNITYSDK_OFFSET(0xA194090)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET UNITYSDK_OFFSET(0xA194530)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET UNITYSDK_OFFSET(0xA194540)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA194550)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET UNITYSDK_OFFSET(0xA1946A0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1948B0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA194A90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA194AA0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0xA194AF0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA194C70)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET UNITYSDK_OFFSET(0xA195160)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0xA194650)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEFIXEDDURATIONWITHITEMSDURATION_OFFSET UNITYSDK_OFFSET(0xA195280)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEITEMSDURATION_OFFSET UNITYSDK_OFFSET(0xA192A60)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA1941E0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0xA1954F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET UNITYSDK_OFFSET(0xA195C00)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET UNITYSDK_OFFSET(0xA195F90)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0xA196660)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET UNITYSDK_OFFSET(0xA195990)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET UNITYSDK_OFFSET(0xA196510)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET UNITYSDK_OFFSET(0xA195E10)
#define UNITYENGINE_TIMELINE_TIMELINEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA196950)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset_TypeDefinitionIndex = 36263;

	class TimelineAsset : public Il2CppObject
	{
	public:
		::System::Int32 k_LatestVersion; // 0x0
		::System::Int32 m_Version; // 0x18
		Il2CppObject* m_Tracks; // 0x20
		::System::Double m_FixedDuration; // 0x28
		::Il2CppArray<::System::Object*>* m_CacheOutputTracks; // 0x30
		Il2CppObject* m_CacheRootTracks; // 0x38
		::Il2CppArray<::System::Object*>* m_CacheFlattenedTracks; // 0x40
		EditorSettings* m_EditorSettings; // 0x48
		DurationMode* m_DurationMode; // 0x50
		::UnityEngine::Timeline::MarkerTrack* m_MarkerTrack; // 0x58

		::System::Void UpgradeToLatestVersion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPGRADETOLATESTVERSION_OFFSET))(nullptr);
		}

		EditorSettings* get_editorSettings()
		{
			return (return (EditorSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_EDITORSETTINGS_OFFSET))(nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Double get_fixedDuration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FIXEDDURATION_OFFSET))(nullptr);
		}

		::System::Void set_fixedDuration(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_FIXEDDURATION_OFFSET))(arg, nullptr);
		}

		DurationMode* get_durationMode()
		{
			return (return (DurationMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_DURATIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_durationMode(DurationMode* arg)
		{
			((::System::Void(*)(DurationMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_SET_DURATIONMODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTS_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Int32 get_outputTrackCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_OUTPUTTRACKCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_rootTrackCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_ROOTTRACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ONVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* GetRootTrack(::System::Int32 arg)
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRootTracks()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETROOTTRACKS_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* GetOutputTrack(::System::Int32 arg)
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOutputTracks()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETOUTPUTTRACKS_OFFSET))(nullptr);
		}

		::System::Double GetValidFrameRate(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GETVALIDFRAMERATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRootTrackCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEROOTTRACKCACHE_OFFSET))(nullptr);
		}

		::System::Void UpdateOutputTrackCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEOUTPUTTRACKCACHE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_flattenedTracks()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_FLATTENEDTRACKS_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::MarkerTrack* get_markerTrack()
		{
			return (return (::UnityEngine::Timeline::MarkerTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_MARKERTRACK_OFFSET))(nullptr);
		}

		Il2CppObject* get_trackObjects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GET_TRACKOBJECTS_OFFSET))(nullptr);
		}

		::System::Void AddTrackInternal(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDTRACKINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveTrack(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_REMOVETRACK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void __internalAwake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___INTERNALAWAKE_OFFSET))(nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateMarkerTrack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATEMARKERTRACK_OFFSET))(nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_INVALIDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateFixedDurationWithItemsDuration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_UPDATEFIXEDDURATIONWITHITEMSDURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::DiscreteTime* CalculateItemsDuration()
		{
			return (return (::UnityEngine::Timeline::DiscreteTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CALCULATEITEMSDURATION_OFFSET))(nullptr);
		}

		::System::Void AddSubTracksRecursive(::UnityEngine::Timeline::TrackAsset* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ADDSUBTRACKSRECURSIVE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* CreateTrack(::System::Type* arg, ::UnityEngine::Timeline::TrackAsset* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::System::Type*, ::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET))(arg, arg, str, nullptr);
		}

		Il2CppObject* CreateTrack(::UnityEngine::Timeline::TrackAsset* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* CreateTrack(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET))(str, nullptr);
		}

		Il2CppObject* CreateTrack()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_CREATETRACK_OFFSET))(nullptr);
		}

		::System::Boolean DeleteClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETECLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean DeleteTrack(::UnityEngine::Timeline::TrackAsset* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETETRACK_OFFSET))(arg, nullptr);
		}

		::System::Void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_MOVELASTTRACKBEFORE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* AllocateTrack(::UnityEngine::Timeline::TrackAsset* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::UnityEngine::Timeline::TrackAsset*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_ALLOCATETRACK_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void DeleteRecordedAnimation(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteRecordedAnimation(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_DELETERECORDEDANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

