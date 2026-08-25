#pragma once
#include "unitysdk.h"

class UIManager;
class <>c__DisplayClass182_0;

#define <CO_CHECKSTACKANDADDUIS>D__182_.CTOR_OFFSET UNITYSDK_OFFSET(0x2690240)
#define <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2694DD0)
#define <CO_CHECKSTACKANDADDUIS>D__182_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2694DE0)
#define <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2695230)
#define <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2695240)
#define <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2695290)

	inline static constexpr unsigned int <co_CheckStackAndAddUIs>d__182_TypeDefinitionIndex = 6801;

	class <co_CheckStackAndAddUIs>d__182 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIManager* __4__this; // 0x20
		<>c__DisplayClass182_0* __8__1; // 0x28
		::System::Action* onComplete; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKSTACKANDADDUIS>D__182_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKSTACKANDADDUIS>D__182_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKSTACKANDADDUIS>D__182_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

