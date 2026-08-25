#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_MARKER_UNITYENGINE.TIMELINE.IMARKER.INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA1A67E0)
#define UNITYENGINE_TIMELINE_MARKER_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xA1A6950)
#define UNITYENGINE_TIMELINE_MARKER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xA1A6960)
#define UNITYENGINE_TIMELINE_MARKER_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA1A6970)
#define UNITYENGINE_TIMELINE_MARKER_SET_PARENT_OFFSET UNITYSDK_OFFSET(0xA1A6980)
#define UNITYENGINE_TIMELINE_MARKER_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA1A6990)
#define UNITYENGINE_TIMELINE_MARKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A69F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Marker_TypeDefinitionIndex = 36292;

	class Marker : public Il2CppObject
	{
	public:
		::System::Double m_Time; // 0x18
		::UnityEngine::Timeline::TrackAsset* _parent_k__BackingField; // 0x20

		::System::Void UnityEngine.Timeline.IMarker.Initialize(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_UNITYENGINE.TIMELINE.IMARKER.INITIALIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* get_parent()
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void OnInitialize(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_ONINITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_parent(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_time(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MARKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

