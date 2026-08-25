#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_INOUTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9427F80)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int InOutAttribute_TypeDefinitionIndex = 36801;

	class InOutAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INOUTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

