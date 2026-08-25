#pragma once
#include "unitysdk.h"

class UIGachaDirecting;
class <>c__DisplayClass28_0;

#define <LOADGACHADIRECTINGPARTS>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x258F9D0)
#define <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x25920D0)
#define <LOADGACHADIRECTINGPARTS>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25920E0)
#define <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2592720)
#define <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2592730)
#define <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2592780)

	inline static constexpr unsigned int <LoadGachaDirectingParts>d__28_TypeDefinitionIndex = 6250;

	class <LoadGachaDirectingParts>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIGachaDirecting* __4__this; // 0x20
		<>c__DisplayClass28_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LOADGACHADIRECTINGPARTS>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGACHADIRECTINGPARTS>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGACHADIRECTINGPARTS>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

