#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputManager; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }

#define <LISTCONTROLLAYOUTS>D__75_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F112F0)
#define <LISTCONTROLLAYOUTS>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F11320)
#define <LISTCONTROLLAYOUTS>D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9F11490)
#define <LISTCONTROLLAYOUTS>D__75___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9F120A0)
#define <LISTCONTROLLAYOUTS>D__75___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x9F120F0)
#define <LISTCONTROLLAYOUTS>D__75___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x9F12140)
#define <LISTCONTROLLAYOUTS>D__75___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x9F12190)
#define <LISTCONTROLLAYOUTS>D__75___M__FINALLY5_OFFSET UNITYSDK_OFFSET(0x9F121E0)
#define <LISTCONTROLLAYOUTS>D__75___M__FINALLY6_OFFSET UNITYSDK_OFFSET(0x9F12230)
#define <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F12280)
#define <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9F12290)
#define <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F122E0)
#define <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F122F0)
#define <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F123A0)

	inline static constexpr unsigned int <ListControlLayouts>d__75_TypeDefinitionIndex = 28546;

	class <ListControlLayouts>d__75 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::String* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::String* basedOn; // 0x28
		::System::String* __3__basedOn; // 0x30
		::UnityEngine::InputSystem::InputManager* __4__this; // 0x38
		::UnityEngine::InputSystem::Utilities::InternedString* _internedBasedOn_5__2; // 0x40
		Il2CppObject* __7__wrap2; // 0x50
		Il2CppObject* __7__wrap3; // 0x80
		Il2CppObject* __7__wrap4; // 0xB0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75___M__FINALLY3_OFFSET))(nullptr);
		}

		::System::Void __m__Finally4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75___M__FINALLY4_OFFSET))(nullptr);
		}

		::System::Void __m__Finally5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75___M__FINALLY5_OFFSET))(nullptr);
		}

		::System::Void __m__Finally6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75___M__FINALLY6_OFFSET))(nullptr);
		}

		::System::String* System.Collections.Generic.IEnumerator_System.String_.get_Current()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.String_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LISTCONTROLLAYOUTS>D__75_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

