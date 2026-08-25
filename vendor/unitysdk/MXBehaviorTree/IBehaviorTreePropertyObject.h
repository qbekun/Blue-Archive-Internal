#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYOBJECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94274E0)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYOBJECT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x94274F0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreePropertyObject_TypeDefinitionIndex = 36796;

	class IBehaviorTreePropertyObject : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYOBJECT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYOBJECT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

