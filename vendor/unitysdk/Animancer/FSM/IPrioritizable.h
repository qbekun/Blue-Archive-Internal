#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_IPRIORITIZABLE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int IPrioritizable_TypeDefinitionIndex = 37784;

	class IPrioritizable : public Il2CppObject
	{
	public:
		::System::Single get_Priority()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_IPRIORITIZABLE_GET_PRIORITY_OFFSET))(nullptr);
		}

	};
}

