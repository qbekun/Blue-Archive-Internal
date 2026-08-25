#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_MEMORYPACKUNIONTAGATTRIBUTE_GET_TAG_OFFSET UNITYSDK_OFFSET(0x9406960)
#define MXBEHAVIORTREE_MEMORYPACKUNIONTAGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9406970)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int MemoryPackUnionTagAttribute_TypeDefinitionIndex = 36744;

	class MemoryPackUnionTagAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::UInt16 _Tag_k__BackingField; // 0x10

		::System::UInt16 get_Tag()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_MEMORYPACKUNIONTAGATTRIBUTE_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_MEMORYPACKUNIONTAGATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

