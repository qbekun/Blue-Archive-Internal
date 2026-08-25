#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_NODEDESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9414110)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int NodeDescriptionAttribute_TypeDefinitionIndex = 36762;

	class NodeDescriptionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* category; // 0x10
		::System::String* name; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEDESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

