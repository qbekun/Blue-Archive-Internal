#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F67FA0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F68030)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68060)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int ClampProcessor_TypeDefinitionIndex = 28832;

	class ClampProcessor : public ::MX::MinigameCCG::Procedures::GenerateRandomInteger
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Single Process(::System::Single arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_CLAMPPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

