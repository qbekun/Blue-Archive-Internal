#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem { class StepCounter; }

#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F01BF0)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F01C60)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_STEPCOUNTER_OFFSET UNITYSDK_OFFSET(0x9F01CA0)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F01CB0)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F01D00)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F01D10)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F01D70)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_STEPCOUNTER_OFFSET UNITYSDK_OFFSET(0x9F01E00)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int StepCounter_TypeDefinitionIndex = 28534;

	class StepCounter : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::IntegerControl* _stepCounter_k__BackingField; // 0x170
		::UnityEngine::InputSystem::StepCounter* _current_k__BackingField; // 0x0

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_FINISHSETUP_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::StepCounter* get_current()
		{
			return (return (::UnityEngine::InputSystem::StepCounter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_CURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_stepCounter()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_STEPCOUNTER_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::StepCounter* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::StepCounter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void set_stepCounter(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_STEPCOUNTER_OFFSET))(arg, nullptr);
		}

	};
}

