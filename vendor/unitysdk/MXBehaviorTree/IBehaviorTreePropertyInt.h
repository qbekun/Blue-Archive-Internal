#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9424100)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9424300)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreePropertyInt_TypeDefinitionIndex = 36786;

	class IBehaviorTreePropertyInt : public Il2CppObject
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTYINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

