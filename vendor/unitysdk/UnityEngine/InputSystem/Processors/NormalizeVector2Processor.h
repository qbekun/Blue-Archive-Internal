#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68C00)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68C30)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F68C70)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeVector2Processor_TypeDefinitionIndex = 28839;

	class NormalizeVector2Processor : public <OnState>d__4
	{
	public:
		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* Process(::UnityEngine::Vector2* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEVECTOR2PROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

	};
}

