#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_NOSELECTABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9427F50)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int NoSelectableAttribute_TypeDefinitionIndex = 36798;

	class NoSelectableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NOSELECTABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

