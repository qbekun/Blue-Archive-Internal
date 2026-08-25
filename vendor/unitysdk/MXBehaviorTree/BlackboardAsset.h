#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_BLACKBOARDASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x94058A0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardAsset_TypeDefinitionIndex = 36739;

	class BlackboardAsset : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

