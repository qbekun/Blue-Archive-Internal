#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionState; }

#define PARAMETERENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E4D340)
#define PARAMETERENUMERABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E4D2C0)
#define PARAMETERENUMERABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E550B0)
#define PARAMETERENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTACTIONREBINDINGEXTENSIONS.PARAMETER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E551E0)

	inline static constexpr unsigned int ParameterEnumerable_TypeDefinitionIndex = 28400;

	class ParameterEnumerable : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x10
		ParameterOverride* m_Parameter; // 0x18
		::System::Int32 m_MapIndex; // 0x90

		ParameterEnumerator* GetEnumerator()
		{
			return (return (ParameterEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputActionState* arg, ParameterOverride* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionState*, ParameterOverride*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERABLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTACTIONREBINDINGEXTENSIONS.PARAMETER_.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

