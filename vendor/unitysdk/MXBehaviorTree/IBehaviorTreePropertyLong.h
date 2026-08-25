#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYLONG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9424B60)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYLONG_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9424B70)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreePropertyLong_TypeDefinitionIndex = 36788;

	class IBehaviorTreePropertyLong : public Il2CppObject
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYLONG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYLONG_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

