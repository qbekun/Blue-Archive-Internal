#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputBinding; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define <GET_BINDINGS>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E43BB0)
#define <GET_BINDINGS>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E48460)
#define <GET_BINDINGS>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E48470)
#define <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTBINDING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E48650)
#define <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E48690)
#define <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E486E0)
#define <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTBINDING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E48760)
#define <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E48800)

	inline static constexpr unsigned int <get_bindings>d__8_TypeDefinitionIndex = 28383;

	class <get_bindings>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::InputSystem::InputBinding* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x70
		::UnityEngine::InputSystem::InputActionAsset* __4__this; // 0x78
		::System::Int32 _numActionMaps_5__2; // 0x80
		::System::Int32 _i_5__3; // 0x84
		::Il2CppArray<::System::Object*>* _bindings_5__4; // 0x88
		::System::Int32 _numBindings_5__5; // 0x90
		::System::Int32 _n_5__6; // 0x94

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputBinding* System.Collections.Generic.IEnumerator_UnityEngine.InputSystem.InputBinding_.get_Current()
		{
			return (return (::UnityEngine::InputSystem::InputBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.INPUTSYSTEM.INPUTBINDING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.InputSystem.InputBinding_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.INPUTSYSTEM.INPUTBINDING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_BINDINGS>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

