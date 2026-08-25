#pragma once
#include "../unitysdk.h"

#define SPINE_IBONETIMELINE_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int IBoneTimeline_TypeDefinitionIndex = 34953;

	class IBoneTimeline : public Il2CppObject
	{
	public:
		::System::Int32 get_BoneIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IBONETIMELINE_GET_BONEINDEX_OFFSET))(nullptr);
		}

	};
}

