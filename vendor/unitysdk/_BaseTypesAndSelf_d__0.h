#pragma once
#include "unitysdk.h"

#define <BASETYPESANDSELF>D__0_.CTOR_OFFSET UNITYSDK_OFFSET(0x10167B0)
#define <BASETYPESANDSELF>D__0_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x10167E0)
#define <BASETYPESANDSELF>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10167F0)
#define <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.TYPE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10168D0)
#define <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x10168E0)
#define <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1016930)
#define <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.TYPE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1016940)
#define <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10169E0)

	inline static constexpr unsigned int <BaseTypesAndSelf>d__0_TypeDefinitionIndex = 12780;

	class <BaseTypesAndSelf>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Type* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Type* type; // 0x28
		::System::Type* __3__type; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Type* System.Collections.Generic.IEnumerator_System.Type_.get_Current()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.TYPE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Type_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.TYPE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BASETYPESANDSELF>D__0_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

