#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_EXTRAPOLATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1AD8C0)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET UNITYSDK_OFFSET(0xA1AD940)
#define UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET UNITYSDK_OFFSET(0xA1ADDF0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int Extrapolation_TypeDefinitionIndex = 36332;

	class Extrapolation : public Il2CppObject
	{
	public:
		::System::Double kMinExtrapolationTime; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_CALCULATEEXTRAPOLATIONTIMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SortClipsByStartTime(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EXTRAPOLATION_SORTCLIPSBYSTARTTIME_OFFSET))(arg, nullptr);
		}

	};
}

