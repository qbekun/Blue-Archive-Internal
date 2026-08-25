#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputControl; }

#define INPUTEVENTCONTROLENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E9F1F0)
#define INPUTEVENTCONTROLENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9E9F600)
#define INPUTEVENTCONTROLENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E9FAA0)
#define INPUTEVENTCONTROLENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E9FAB0)
#define INPUTEVENTCONTROLENUMERATOR_CHECKCURRENT_OFFSET UNITYSDK_OFFSET(0x9E9FAC0)
#define INPUTEVENTCONTROLENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E9E890)
#define INPUTEVENTCONTROLENUMERATOR_CHECKDEFAULT_OFFSET UNITYSDK_OFFSET(0x9E9FB00)
#define INPUTEVENTCONTROLENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E9FB60)

	inline static constexpr unsigned int InputEventControlEnumerator_TypeDefinitionIndex = 28465;

	class InputEventControlEnumerator : public Il2CppObject
	{
	public:
		Enumerate* m_Flags; // 0x10
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x18
		::Il2CppArray<::System::Object*>* m_StateOffsetToControlIndex; // 0x20
		::System::Int32 m_StateOffsetToControlIndexLength; // 0x28
		::Il2CppArray<::System::Object*>* m_AllControls; // 0x30
		::System::Object** m_DefaultState; // 0x38
		::System::Object** m_CurrentState; // 0x40
		::System::Object** m_NoiseMask; // 0x48
		::UnityEngine::InputSystem::LowLevel::InputEventPtr* m_EventPtr; // 0x50
		::UnityEngine::InputSystem::InputControl* m_CurrentControl; // 0x58
		::System::Int32 m_CurrentIndexInStateOffsetToControlIndexMap; // 0x60
		::System::UInt32 m_CurrentControlStateBitOffset; // 0x64
		::System::Object** m_EventState; // 0x68
		::System::UInt32 m_CurrentBitOffset; // 0x70
		::System::UInt32 m_EndBitOffset; // 0x74
		::System::Single m_MagnitudeThreshold; // 0x78

		::System::Void .ctor(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg, Enumerate* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, Enumerate*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean CheckCurrent(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_CHECKCURRENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean CheckDefault(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_CHECKDEFAULT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_Current()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTEVENTCONTROLENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};

