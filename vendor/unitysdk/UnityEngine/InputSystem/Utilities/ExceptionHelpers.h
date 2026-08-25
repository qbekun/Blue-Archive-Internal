#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_EXCEPTIONHELPERS_ISEXCEPTIONINDICATINGBUGINCODE_OFFSET UNITYSDK_OFFSET(0x9E7EF20)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ExceptionHelpers_TypeDefinitionIndex = 28917;

	class ExceptionHelpers : public Il2CppObject
	{
	public:
		::System::Boolean IsExceptionIndicatingBugInCode(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_EXCEPTIONHELPERS_ISEXCEPTIONINDICATINGBUGINCODE_OFFSET))(arg, nullptr);
		}

	};
}

