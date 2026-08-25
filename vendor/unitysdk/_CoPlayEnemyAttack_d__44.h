#pragma once
#include "unitysdk.h"

class UITBGBattleTop;
class <>c__DisplayClass44_0;

#define <COPLAYENEMYATTACK>D__44_.CTOR_OFFSET UNITYSDK_OFFSET(0xB41590)
#define <COPLAYENEMYATTACK>D__44_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB448F0)
#define <COPLAYENEMYATTACK>D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB44900)
#define <COPLAYENEMYATTACK>D__44_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB45060)
#define <COPLAYENEMYATTACK>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB45070)
#define <COPLAYENEMYATTACK>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB450C0)

	inline static constexpr unsigned int <CoPlayEnemyAttack>d__44_TypeDefinitionIndex = 8347;

	class <CoPlayEnemyAttack>d__44 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITBGBattleTop* __4__this; // 0x20
		<>c__DisplayClass44_0* __8__1; // 0x28
		::System::Boolean isBlocked; // 0x30
		::System::String* log; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENEMYATTACK>D__44_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENEMYATTACK>D__44_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENEMYATTACK>D__44_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENEMYATTACK>D__44_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENEMYATTACK>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENEMYATTACK>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

