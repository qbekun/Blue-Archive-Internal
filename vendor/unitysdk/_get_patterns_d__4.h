#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher; }

#define <GET_PATTERNS>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E73D20)
#define <GET_PATTERNS>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E76130)
#define <GET_PATTERNS>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E76140)
#define <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E762A0)
#define <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E762B0)
#define <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E76300)
#define <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E76350)
#define <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E763F0)

	inline static constexpr unsigned int <get_patterns>d__4_TypeDefinitionIndex = 28874;

	class <get_patterns>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* __4__this; // 0x30
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* __3____4__this; // 0x38
		::System::Int32 _count_5__2; // 0x40
		::System::Int32 _i_5__3; // 0x44

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_System.Collections.Generic.KeyValuePair_System.String_System.Object__.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Collections.Generic.KeyValuePair_System.String_System.Object__.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PATTERNS>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

