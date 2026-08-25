#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNER_GET_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNER_GET_RETURNACTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int IStateMachineRunner_TypeDefinitionIndex = 36144;

	class IStateMachineRunner : public Il2CppObject
	{
	public:
		::System::Action* get_MoveNext()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNER_GET_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Action* get_ReturnAction()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNER_GET_RETURNACTION_OFFSET))(nullptr);
		}

	};
}

