#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_TIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95917A0)
#define SPINE_TIMELINE_GET_PROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x9591890)
#define SPINE_TIMELINE_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x95918A0)
#define SPINE_TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x95918B0)
#define SPINE_TIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x95918C0)
#define SPINE_TIMELINE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9591900)
#define SPINE_TIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_TIMELINE_SEARCH_OFFSET UNITYSDK_OFFSET(0x9591950)
#define SPINE_TIMELINE_SEARCH_OFFSET UNITYSDK_OFFSET(0x95919A0)

namespace Spine
{
	inline static constexpr unsigned int Timeline_TypeDefinitionIndex = 34952;

	class Timeline : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* propertyIds; // 0x10
		::Il2CppArray<::System::Object*>* frames; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PropertyIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_PROPERTYIDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Frames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMES_OFFSET))(nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Int32 get_FrameCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMECOUNT_OFFSET))(nullptr);
		}

		::System::Single get_Duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Search(::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Search(::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

