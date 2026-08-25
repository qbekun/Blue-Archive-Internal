#pragma once
#include "unitysdk.h"

#define <SPLIT>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E89340)
#define <SPLIT>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E8A1E0)
#define <SPLIT>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E8A1F0)
#define <SPLIT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E8A350)
#define <SPLIT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E8A360)
#define <SPLIT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E8A3B0)
#define <SPLIT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E8A3C0)
#define <SPLIT>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E8A470)

	inline static constexpr unsigned int <Split>d__9_TypeDefinitionIndex = 28959;

	class <Split>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::String* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::String* str; // 0x28
		::System::String* __3__str; // 0x30
		Il2CppObject* predicate; // 0x38
		Il2CppObject* __3__predicate; // 0x40
		::System::Int32 _length_5__2; // 0x48
		::System::Int32 _position_5__3; // 0x4C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::String* System.Collections.Generic.IEnumerator_System.String_.get_Current()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.String_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SPLIT>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

