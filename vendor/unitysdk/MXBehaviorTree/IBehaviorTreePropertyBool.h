#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYBOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94236A0)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYBOOL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x94236B0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreePropertyBool_TypeDefinitionIndex = 36784;

	class IBehaviorTreePropertyBool : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYBOOL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYBOOL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

