#pragma once
#include "unitysdk.h"

class UIAccountInfo;
class <>c__DisplayClass64_0;

#define <CO_PLAYCALLNAME>D__64_.CTOR_OFFSET UNITYSDK_OFFSET(0x21EA350)
#define <CO_PLAYCALLNAME>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21EB980)
#define <CO_PLAYCALLNAME>D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21EB990)
#define <CO_PLAYCALLNAME>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21EBCC0)
#define <CO_PLAYCALLNAME>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21EBCD0)
#define <CO_PLAYCALLNAME>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21EBD20)

	inline static constexpr unsigned int <co_PlayCallName>d__64_TypeDefinitionIndex = 4240;

	class <co_PlayCallName>d__64 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIAccountInfo* __4__this; // 0x20
		<>c__DisplayClass64_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYCALLNAME>D__64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYCALLNAME>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYCALLNAME>D__64_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYCALLNAME>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYCALLNAME>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYCALLNAME>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

