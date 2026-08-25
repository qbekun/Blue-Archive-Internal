#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F688C0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68AB0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F68AF0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9F689C0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_DENORMALIZE_OFFSET UNITYSDK_OFFSET(0x9F68BB0)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int NormalizeProcessor_TypeDefinitionIndex = 28838;

	class NormalizeProcessor : public ::MX::MinigameCCG::Procedures::GenerateRandomInteger
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14
		::System::Single zero; // 0x18

		::System::Single Process(::System::Single arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Single Normalize(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_NORMALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single Denormalize(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_NORMALIZEPROCESSOR_DENORMALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

