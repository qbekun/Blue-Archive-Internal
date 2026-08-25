#pragma once
#include "../unitysdk.h"

namespace Spine { class AttachmentLoader; }
namespace Spine { class SkeletonData; }

#define SPINE_SKELETONLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DDB60)
#define SPINE_SKELETONLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DDBE0)
#define SPINE_SKELETONLOADER_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x95DDC80)
#define SPINE_SKELETONLOADER_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x95DDC90)
#define SPINE_SKELETONLOADER_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int SkeletonLoader_TypeDefinitionIndex = 35065;

	class SkeletonLoader : public Il2CppObject
	{
	public:
		::Spine::AttachmentLoader* attachmentLoader; // 0x10
		::System::Single scale; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Spine::AttachmentLoader* arg)
		{
			((::System::Void(*)(::Spine::AttachmentLoader*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_Scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_Scale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* str)
		{
			return (return (::Spine::SkeletonData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONLOADER_READSKELETONDATA_OFFSET))(str, nullptr);
		}

	};
}

