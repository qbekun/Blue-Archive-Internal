#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR2PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F68630)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR2PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68670)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR2PROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68700)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int InvertVector2Processor_TypeDefinitionIndex = 28836;

	class InvertVector2Processor : public <OnState>d__4
	{
	public:
		::System::Boolean invertX; // 0x10
		::System::Boolean invertY; // 0x11

		::UnityEngine::Vector2* Process(::UnityEngine::Vector2* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR2PROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR2PROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTVECTOR2PROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

