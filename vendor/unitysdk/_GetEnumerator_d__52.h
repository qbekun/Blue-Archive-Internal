#pragma once
#include "unitysdk.h"

class CharacterStyleProperty;
class CharacterStyle;

#define <GETENUMERATOR>D__52_.CTOR_OFFSET UNITYSDK_OFFSET(0x10BDC80)
#define <GETENUMERATOR>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BDCC0)
#define <GETENUMERATOR>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10BDCD0)
#define <GETENUMERATOR>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_CHARACTERSTYLEPROPERTY_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10BDDA0)
#define <GETENUMERATOR>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x10BDDC0)
#define <GETENUMERATOR>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10BDE10)

	inline static constexpr unsigned int <GetEnumerator>d__52_TypeDefinitionIndex = 931;

	class <GetEnumerator>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		CharacterStyleProperty* __2__current; // 0x18
		CharacterStyle* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x38
		::System::Int32 __7__wrap2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__52_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		CharacterStyleProperty* System.Collections.Generic.IEnumerator_CharacterStyleProperty_.get_Current()
		{
			return ((CharacterStyleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_CHARACTERSTYLEPROPERTY_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

