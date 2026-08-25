#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F68F70)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68FA0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68FF0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleVector2Processor_TypeDefinitionIndex = 28842;

	class ScaleVector2Processor : public <OnState>d__4
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::UnityEngine::Vector2* Process(::UnityEngine::Vector2* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEVECTOR2PROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

