#pragma once
#include "unitysdk.h"

class UIManager;
class <>c__DisplayClass184_0;

#define <CO_ADDSTACKWEEKDUNGEONUIS>D__184_.CTOR_OFFSET UNITYSDK_OFFSET(0x2690390)
#define <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2695670)
#define <CO_ADDSTACKWEEKDUNGEONUIS>D__184_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2695680)
#define <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26961A0)
#define <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26961B0)
#define <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2696200)

	inline static constexpr unsigned int <co_AddStackWeekDungeonUIs>d__184_TypeDefinitionIndex = 6803;

	class <co_AddStackWeekDungeonUIs>d__184 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIManager* __4__this; // 0x20
		::System::Int64 stageId; // 0x28
		<>c__DisplayClass184_0* __8__1; // 0x30
		::System::Action* onComplete; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_ADDSTACKWEEKDUNGEONUIS>D__184_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ADDSTACKWEEKDUNGEONUIS>D__184_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ADDSTACKWEEKDUNGEONUIS>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

