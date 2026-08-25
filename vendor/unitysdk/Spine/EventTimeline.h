#pragma once
#include "../unitysdk.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x95983B0)
#define SPINE_EVENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x95983C0)
#define SPINE_EVENTTIMELINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9598450)
#define SPINE_EVENTTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9598530)
#define SPINE_EVENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x95985C0)

namespace Spine
{
	inline static constexpr unsigned int EventTimeline_TypeDefinitionIndex = 34976;

	class EventTimeline : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* propertyIds; // 0x0
		::Il2CppArray<::System::Object*>* events; // 0x20

		::Il2CppArray<::System::Object*>* get_Events()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::Spine::Event* arg)
		{
			((::System::Void(*)(::System::Int32, ::Spine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_SETFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

