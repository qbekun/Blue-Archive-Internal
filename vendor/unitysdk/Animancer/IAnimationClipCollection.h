#pragma once
#include "../unitysdk.h"

#define ANIMANCER_IANIMATIONCLIPCOLLECTION_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IAnimationClipCollection_TypeDefinitionIndex = 35145;

	class IAnimationClipCollection : public Il2CppObject
	{
	public:
		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IANIMATIONCLIPCOLLECTION_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

	};
}

