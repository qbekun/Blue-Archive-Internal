#pragma once
#include "unitysdk.h"

class UITBGBattleTop;
class <>c__DisplayClass46_0;

#define <COPLAYPLAYERPANIC>D__46_.CTOR_OFFSET UNITYSDK_OFFSET(0xB416F0)
#define <COPLAYPLAYERPANIC>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB454E0)
#define <COPLAYPLAYERPANIC>D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB454F0)
#define <COPLAYPLAYERPANIC>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB458A0)
#define <COPLAYPLAYERPANIC>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB458B0)
#define <COPLAYPLAYERPANIC>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB45900)

	inline static constexpr unsigned int <CoPlayPlayerPanic>d__46_TypeDefinitionIndex = 8351;

	class <CoPlayPlayerPanic>d__46 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITBGBattleTop* __4__this; // 0x20
		::System::String* localizeKey; // 0x28
		<>c__DisplayClass46_0* __8__1; // 0x30
		::System::Action* _onSkip_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPLAYERPANIC>D__46_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPLAYERPANIC>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPLAYERPANIC>D__46_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPLAYERPANIC>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPLAYERPANIC>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYPLAYERPANIC>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

