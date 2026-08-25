#pragma once
#include "../unitysdk.h"

namespace Spine { class SkeletonData; }
namespace Spine { class Animation; }

#define SPINE_ANIMATIONSTATEDATA_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95A27D0)
#define SPINE_ANIMATIONSTATEDATA_GET_DEFAULTMIX_OFFSET UNITYSDK_OFFSET(0x95A27E0)
#define SPINE_ANIMATIONSTATEDATA_SET_DEFAULTMIX_OFFSET UNITYSDK_OFFSET(0x95A27F0)
#define SPINE_ANIMATIONSTATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A2800)
#define SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET UNITYSDK_OFFSET(0x95A2940)
#define SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET UNITYSDK_OFFSET(0x95A2A70)
#define SPINE_ANIMATIONSTATEDATA_GETMIX_OFFSET UNITYSDK_OFFSET(0x95A2C20)

namespace Spine
{
	inline static constexpr unsigned int AnimationStateData_TypeDefinitionIndex = 35005;

	class AnimationStateData : public Il2CppObject
	{
	public:
		::Spine::SkeletonData* skeletonData; // 0x10
		Il2CppObject* animationToMixTime; // 0x18
		::System::Single defaultMix; // 0x20

		::Spine::SkeletonData* get_SkeletonData()
		{
			return (return (::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GET_SKELETONDATA_OFFSET))(nullptr);
		}

		::System::Single get_DefaultMix()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GET_DEFAULTMIX_OFFSET))(nullptr);
		}

		::System::Void set_DefaultMix(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SET_DEFAULTMIX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetMix(::System::String* str, ::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SetMix(::Spine::Animation* arg, ::Spine::Animation* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::Spine::Animation*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_SETMIX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetMix(::Spine::Animation* arg, ::Spine::Animation* arg)
		{
			return (return (::System::Single(*)(::Spine::Animation*, ::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATIONSTATEDATA_GETMIX_OFFSET))(arg, arg, nullptr);
		}

	};
}

