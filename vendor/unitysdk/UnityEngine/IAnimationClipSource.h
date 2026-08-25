#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_IANIMATIONCLIPSOURCE_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int IAnimationClipSource_TypeDefinitionIndex = 36441;

	class IAnimationClipSource : public Il2CppObject
	{
	public:
		::System::Void GetAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IANIMATIONCLIPSOURCE_GETANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

	};
}

