#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define INPUTEVENTCONTROLCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E9E840)
#define INPUTEVENTCONTROLCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E9F3F0)
#define INPUTEVENTCONTROLCOLLECTION_GET_EVENTPTR_OFFSET UNITYSDK_OFFSET(0x9E9F4F0)
#define INPUTEVENTCONTROLCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTCONTROL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E9F500)

	inline static constexpr unsigned int InputEventControlCollection_TypeDefinitionIndex = 28464;

	class InputEventControlCollection : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputEventPtr* m_EventPtr; // 0x18
		Enumerate* m_Flags; // 0x20
		::System::Single m_MagnitudeThreshold; // 0x24

		InputEventControlEnumerator* GetEnumerator()
		{
			return (return (InputEventControlEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* get_eventPtr()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLCOLLECTION_GET_EVENTPTR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.InputControl_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLCOLLECTION_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTCONTROL_.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

