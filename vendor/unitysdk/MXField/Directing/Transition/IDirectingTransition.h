#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_DIRECTING_TRANSITION_IDIRECTINGTRANSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Directing::Transition
{
	inline static constexpr unsigned int IDirectingTransition_TypeDefinitionIndex = 10918;

	class IDirectingTransition : public Il2CppObject
	{
	public:
		::System::Void Execute(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_IDIRECTINGTRANSITION_EXECUTE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

