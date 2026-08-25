#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F68EA0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68EB0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68F20)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ScaleProcessor_TypeDefinitionIndex = 28841;

	class ScaleProcessor : public ::MX::MinigameCCG::Procedures::GenerateRandomInteger
	{
	public:
		::System::Single factor; // 0x10

		::System::Single Process(::System::Single arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_SCALEPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

