#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYFLOAT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x94255C0)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYFLOAT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94257C0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreePropertyFloat_TypeDefinitionIndex = 36790;

	class IBehaviorTreePropertyFloat : public Il2CppObject
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYFLOAT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYFLOAT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

