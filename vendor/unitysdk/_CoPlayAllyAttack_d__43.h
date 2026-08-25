#pragma once
#include "unitysdk.h"

class UITBGBattleTop;
class <>c__DisplayClass43_0;
namespace MX::TableBoard { class TBGDiceRollResult; }

#define <COPLAYALLYATTACK>D__43_.CTOR_OFFSET UNITYSDK_OFFSET(0xB414E0)
#define <COPLAYALLYATTACK>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB43DF0)
#define <COPLAYALLYATTACK>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB43E00)
#define <COPLAYALLYATTACK>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB446B0)
#define <COPLAYALLYATTACK>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB446C0)
#define <COPLAYALLYATTACK>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB44710)

	inline static constexpr unsigned int <CoPlayAllyAttack>d__43_TypeDefinitionIndex = 8345;

	class <CoPlayAllyAttack>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITBGBattleTop* __4__this; // 0x20
		<>c__DisplayClass43_0* __8__1; // 0x28
		::MX::TableBoard::TBGDiceRollResult* result; // 0x30
		::System::String* localizeKey; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYALLYATTACK>D__43_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYALLYATTACK>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYALLYATTACK>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYALLYATTACK>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYALLYATTACK>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYALLYATTACK>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

