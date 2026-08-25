#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_INVERSABLEDECORATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9414090)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int InversableDecorator_TypeDefinitionIndex = 36761;

	class InversableDecorator : public Il2CppObject
	{
	public:
		::System::Boolean inverseCondition; // 0x40

		::System::Void .ctor(AbortType* arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			((::System::Void(*)(AbortType*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_INVERSABLEDECORATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

