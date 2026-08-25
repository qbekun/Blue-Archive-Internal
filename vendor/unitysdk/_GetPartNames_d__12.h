#pragma once
#include "unitysdk.h"

#define <GETPARTNAMES>D__12_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6BF40)
#define <GETPARTNAMES>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E6C380)
#define <GETPARTNAMES>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E6C390)
#define <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E6C590)
#define <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9E6C5A0)
#define <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E6C5F0)
#define <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E6C600)
#define <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E6C6A0)

	inline static constexpr unsigned int <GetPartNames>d__12_TypeDefinitionIndex = 28434;

	class <GetPartNames>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::String* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::String* composite; // 0x28
		::System::String* __3__composite; // 0x30
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x38
		::System::Int32 __7__wrap2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::String* System.Collections.Generic.IEnumerator_System.String_.get_Current()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.String_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPARTNAMES>D__12_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

