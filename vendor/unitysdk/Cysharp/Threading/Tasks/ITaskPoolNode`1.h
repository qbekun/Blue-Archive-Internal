#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_ITASKPOOLNODE`1_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ITaskPoolNode`1_TypeDefinitionIndex = 35895;

	class ITaskPoolNode`1 : public Il2CppObject
	{
	public:
		Il2CppObject&* get_NextNode()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ITASKPOOLNODE`1_GET_NEXTNODE_OFFSET))(nullptr);
		}

	};
}

