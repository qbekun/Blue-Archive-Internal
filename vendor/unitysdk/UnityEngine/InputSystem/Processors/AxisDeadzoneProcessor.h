#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9F67C20)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F67C90)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F67CD0)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9F67E00)
#define UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F67E70)

namespace UnityEngine::InputSystem::Processors
{
	inline static constexpr unsigned int AxisDeadzoneProcessor_TypeDefinitionIndex = 28831;

	class AxisDeadzoneProcessor : public ::MX::MinigameCCG::Procedures::GenerateRandomInteger
	{
	public:
		::System::Single min; // 0x10
		::System::Single max; // 0x14

		::System::Single get_maxOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MAXORDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Single Process(::System::Single arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_minOrDefault()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_GET_MINORDEFAULT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROCESSORS_AXISDEADZONEPROCESSOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

