#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_OUTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9427F70)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int OutAttribute_TypeDefinitionIndex = 36800;

	class OutAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_OUTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

