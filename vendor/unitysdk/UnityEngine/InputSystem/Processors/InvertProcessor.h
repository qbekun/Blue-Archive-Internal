#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F685B0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F685E0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F685F0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int InvertProcessor_TypeDefinitionIndex = 28835;

	class InvertProcessor : public ::MX::MinigameCCG::Procedures::GenerateRandomInteger
	{
	public:
		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Single Process(::System::Single arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_INVERTPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

