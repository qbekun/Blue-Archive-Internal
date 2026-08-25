#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_TASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9417510)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Task_TypeDefinitionIndex = 36770;

	class Task : public Il2CppObject
	{
	public:
		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_TASK_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

