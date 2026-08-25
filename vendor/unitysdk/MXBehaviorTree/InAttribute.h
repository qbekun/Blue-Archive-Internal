#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_INATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9427F60)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int InAttribute_TypeDefinitionIndex = 36799;

	class InAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

