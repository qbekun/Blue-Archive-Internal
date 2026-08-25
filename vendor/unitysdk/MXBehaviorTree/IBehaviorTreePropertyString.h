#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYSTRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9426020)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYSTRING_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9426030)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreePropertyString_TypeDefinitionIndex = 36792;

	class IBehaviorTreePropertyString : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYSTRING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYSTRING_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

