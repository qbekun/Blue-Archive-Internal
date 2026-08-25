#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_ANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9591140)
#define SPINE_ANIMATION_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x9591500)
#define SPINE_ANIMATION_APPLY_OFFSET UNITYSDK_OFFSET(0x9591510)
#define SPINE_ANIMATION_HASTIMELINE_OFFSET UNITYSDK_OFFSET(0x95916C0)
#define SPINE_ANIMATION_SETTIMELINES_OFFSET UNITYSDK_OFFSET(0x9591200)
#define SPINE_ANIMATION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9591750)
#define SPINE_ANIMATION_SET_TIMELINES_OFFSET UNITYSDK_OFFSET(0x9591760)
#define SPINE_ANIMATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9591770)
#define SPINE_ANIMATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9591780)
#define SPINE_ANIMATION_GET_TIMELINES_OFFSET UNITYSDK_OFFSET(0x9591790)

namespace Spine
{
	inline static constexpr unsigned int Animation_TypeDefinitionIndex = 34948;

	class Animation : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		Il2CppObject* timelines; // 0x18
		Il2CppObject* timelineIds; // 0x20
		::System::Single duration; // 0x28

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, ::System::Boolean, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasTimeline(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_HASTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimelines(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SETTIMELINES_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Timelines(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SET_TIMELINES_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* get_Timelines()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_TIMELINES_OFFSET))(nullptr);
		}

	};
}

