#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYVECTOR3_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9426A80)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYVECTOR3_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9426A90)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreePropertyVector3_TypeDefinitionIndex = 36794;

	class IBehaviorTreePropertyVector3 : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYVECTOR3_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYVECTOR3_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

