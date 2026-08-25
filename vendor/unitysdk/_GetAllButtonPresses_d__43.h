#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define <GETALLBUTTONPRESSES>D__43_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E9EE50)
#define <GETALLBUTTONPRESSES>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EA0550)
#define <GETALLBUTTONPRESSES>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9EA0570)
#define <GETALLBUTTONPRESSES>D__43___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9EA0900)
#define <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTCONTROL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA0920)
#define <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9EA0930)
#define <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA0980)
#define <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTCONTROL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9EA0990)
#define <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9EA0A30)

	inline static constexpr unsigned int <GetAllButtonPresses>d__43_TypeDefinitionIndex = 28468;

	class <GetAllButtonPresses>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::InputSystem::InputControl* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::UnityEngine::InputSystem::LowLevel::InputEventPtr* eventPtr; // 0x28
		::UnityEngine::InputSystem::LowLevel::InputEventPtr* __3__eventPtr; // 0x30
		::System::Single magnitude; // 0x38
		::System::Single __3__magnitude; // 0x3C
		::System::Boolean buttonControlsOnly; // 0x40
		::System::Boolean __3__buttonControlsOnly; // 0x41
		InputEventControlEnumerator* __7__wrap1; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43___M__FINALLY1_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* System.Collections.Generic.IEnumerator_UnityEngine.InputSystem.InputControl_.get_Current()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTCONTROL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.InputControl_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTCONTROL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLBUTTONPRESSES>D__43_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

