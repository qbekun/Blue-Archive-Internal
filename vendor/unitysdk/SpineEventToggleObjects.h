#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine { class TrackEntry; }
namespace Spine { class Event; }

#define SPINEEVENTTOGGLEOBJECTS_ONSPINEEVENT_OFFSET UNITYSDK_OFFSET(0x20E99E0)
#define SPINEEVENTTOGGLEOBJECTS_VALIDATEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x20E9BD0)
#define SPINEEVENTTOGGLEOBJECTS_DEBUGLOGEVENT_OFFSET UNITYSDK_OFFSET(0x20E9C60)
#define SPINEEVENTTOGGLEOBJECTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E9C70)
#define SPINEEVENTTOGGLEOBJECTS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20E9C80)
#define SPINEEVENTTOGGLEOBJECTS_AWAKE_OFFSET UNITYSDK_OFFSET(0x20E9D60)

	inline static constexpr unsigned int SpineEventToggleObjects_TypeDefinitionIndex = 3793;

	class SpineEventToggleObjects : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* toggleObjects; // 0x18
		::Spine::Unity::SkeletonAnimation* skeletonAnimation; // 0x20

		::System::Void OnSpineEvent(::Spine::TrackEntry* arg, ::Spine::Event* arg2)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEEVENTTOGGLEOBJECTS_ONSPINEEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ValidateEventData(::Spine::Event* arg)
		{
			return ((::System::Boolean(*)(::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEEVENTTOGGLEOBJECTS_VALIDATEEVENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void DebugLogEvent(::Spine::TrackEntry* arg, ::Spine::Event* arg2)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEEVENTTOGGLEOBJECTS_DEBUGLOGEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEEVENTTOGGLEOBJECTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEEVENTTOGGLEOBJECTS_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEEVENTTOGGLEOBJECTS_AWAKE_OFFSET))(nullptr);
		}

	};

