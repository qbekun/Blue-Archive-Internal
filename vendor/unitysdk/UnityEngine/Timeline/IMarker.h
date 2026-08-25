#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_IMARKER_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IMARKER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IMARKER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IMARKER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IMarker_TypeDefinitionIndex = 36290;

	class IMarker : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::TrackAsset* get_parent()
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMARKER_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMARKER_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMARKER_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IMARKER_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

