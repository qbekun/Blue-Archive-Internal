#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackBindingFlags; }

#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB710)
#define UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1AB750)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackBindingTypeAttribute_TypeDefinitionIndex = 36320;

	class TrackBindingTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* type; // 0x10
		::UnityEngine::Timeline::TrackBindingFlags* flags; // 0x18

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::UnityEngine::Timeline::TrackBindingFlags* arg)
		{
			((::System::Void(*)(::System::Type*, ::UnityEngine::Timeline::TrackBindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKBINDINGTYPEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

