#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB6A0)
#define UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB6D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackClipTypeAttribute_TypeDefinitionIndex = 36317;

	class TrackClipTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* inspectedType; // 0x10
		::System::Boolean allowAutoCreate; // 0x18

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKCLIPTYPEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

