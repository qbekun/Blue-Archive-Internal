#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Timeline { class IMarker; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_MARKERLIST_GET_MARKERS_OFFSET UNITYSDK_OFFSET(0xA1A6A00)
#define UNITYENGINE_TIMELINE_MARKERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19E280)
#define UNITYENGINE_TIMELINE_MARKERLIST_ADD_OFFSET UNITYSDK_OFFSET(0xA19A760)
#define UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0xA1994F0)
#define UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0xA19A870)
#define UNITYENGINE_TIMELINE_MARKERLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0xA19A6F0)
#define UNITYENGINE_TIMELINE_MARKERLIST_GETMARKERS_OFFSET UNITYSDK_OFFSET(0xA1996D0)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA1996F0)
#define UNITYENGINE_TIMELINE_MARKERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA1997A0)
#define UNITYENGINE_TIMELINE_MARKERLIST_GETRAWMARKERLIST_OFFSET UNITYSDK_OFFSET(0xA1A6D30)
#define UNITYENGINE_TIMELINE_MARKERLIST_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0xA1991C0)
#define UNITYENGINE_TIMELINE_MARKERLIST_HASNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0xA19E260)
#define UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA1A6D40)
#define UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA1A6D50)
#define UNITYENGINE_TIMELINE_MARKERLIST_BUILDCACHE_OFFSET UNITYSDK_OFFSET(0xA1A6A20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MarkerList_TypeDefinitionIndex = 36293;

	class MarkerList : public Il2CppObject
	{
	public:
		Il2CppObject* m_Objects; // 0x10
		Il2CppObject* m_Cache; // 0x18
		::System::Boolean m_CacheDirty; // 0x20
		::System::Boolean m_HasNotifications; // 0x21

		Il2CppObject* get_markers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_MARKERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(::UnityEngine::Timeline::IMarker* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::IMarker*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(::UnityEngine::ScriptableObject* arg, ::UnityEngine::Timeline::TimelineAsset* arg, ::UnityEngine::Playables::PlayableAsset* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::ScriptableObject*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_REMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_CLEAR_OFFSET))(nullptr);
		}

		Il2CppObject* GetMarkers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GETMARKERS_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::IMarker* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::Timeline::IMarker*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRawMarkerList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_GETRAWMARKERLIST_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type* arg, ::System::Double arg, ::UnityEngine::Timeline::TrackAsset* arg)
		{
			return (return (::UnityEngine::Timeline::IMarker*(*)(::System::Type*, ::System::Double, ::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_CREATEMARKER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasNotifications()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_HASNOTIFICATIONS_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void BuildCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKERLIST_BUILDCACHE_OFFSET))(nullptr);
		}

	};
}

