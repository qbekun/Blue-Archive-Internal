#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_NODISPLAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9427F40)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int NoDisplayAttribute_TypeDefinitionIndex = 36797;

	class NoDisplayAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODISPLAYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

