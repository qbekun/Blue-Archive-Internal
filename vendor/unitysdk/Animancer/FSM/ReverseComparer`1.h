#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_FSM_REVERSECOMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_REVERSECOMPARER`1_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FSM_REVERSECOMPARER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer::FSM
{
	inline static constexpr unsigned int ReverseComparer`1_TypeDefinitionIndex = 37785;

	class ReverseComparer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_REVERSECOMPARER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_REVERSECOMPARER`1_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FSM_REVERSECOMPARER`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

