#pragma once
#include "../unitysdk.h"

#define ANIMANCER_ITRANSITION`1_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITION`1_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ITransition`1_TypeDefinitionIndex = 35154;

	class ITransition`1 : public Il2CppObject
	{
	public:
		Il2CppObject* CreateState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITION`1_CREATESTATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITION`1_GET_STATE_OFFSET))(nullptr);
		}

	};
}

