#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define <GETENUMERATOR>D__31_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E45FF0)
#define <GETENUMERATOR>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E48810)
#define <GETENUMERATOR>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E48820)
#define <GETENUMERATOR>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTACTION_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E489F0)
#define <GETENUMERATOR>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E48A00)
#define <GETENUMERATOR>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E48A50)

	inline static constexpr unsigned int <GetEnumerator>d__31_TypeDefinitionIndex = 28384;

	class <GetEnumerator>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::InputSystem::InputAction* __2__current; // 0x18
		::UnityEngine::InputSystem::InputActionAsset* __4__this; // 0x20
		::System::Int32 _i_5__2; // 0x28
		Il2CppObject* _actions_5__3; // 0x30
		::System::Int32 _actionCount_5__4; // 0x40
		::System::Int32 _n_5__5; // 0x44

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__31_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* System.Collections.Generic.IEnumerator_UnityEngine.InputSystem.InputAction_.get_Current()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTACTION_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

