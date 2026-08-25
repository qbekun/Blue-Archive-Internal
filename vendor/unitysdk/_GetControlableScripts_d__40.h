#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class GameObject; }

#define <GETCONTROLABLESCRIPTS>D__40_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A33F0)
#define <GETCONTROLABLESCRIPTS>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1A4D40)
#define <GETCONTROLABLESCRIPTS>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA1A4D50)
#define <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.MONOBEHAVIOUR_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA1A4EB0)
#define <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA1A4EC0)
#define <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA1A4F10)
#define <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.MONOBEHAVIOUR_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA1A4F20)
#define <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA1A4FC0)

	inline static constexpr unsigned int <GetControlableScripts>d__40_TypeDefinitionIndex = 36277;

	class <GetControlableScripts>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::MonoBehaviour* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::UnityEngine::GameObject* root; // 0x28
		::UnityEngine::GameObject* __3__root; // 0x30
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x38
		::System::Int32 __7__wrap2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::MonoBehaviour* System.Collections.Generic.IEnumerator_UnityEngine.MonoBehaviour_.get_Current()
		{
			return (return (::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.MONOBEHAVIOUR_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_UnityEngine.MonoBehaviour_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_UNITYENGINE.MONOBEHAVIOUR_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCONTROLABLESCRIPTS>D__40_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

