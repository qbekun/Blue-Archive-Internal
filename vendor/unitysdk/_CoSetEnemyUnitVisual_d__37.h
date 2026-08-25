#pragma once
#include "unitysdk.h"

class UITBGBattleTop;
class <>c__DisplayClass37_0;

#define <COSETENEMYUNITVISUAL>D__37_.CTOR_OFFSET UNITYSDK_OFFSET(0xB41080)
#define <COSETENEMYUNITVISUAL>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB42640)
#define <COSETENEMYUNITVISUAL>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB42650)
#define <COSETENEMYUNITVISUAL>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB42990)
#define <COSETENEMYUNITVISUAL>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB429A0)
#define <COSETENEMYUNITVISUAL>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB429F0)

	inline static constexpr unsigned int <CoSetEnemyUnitVisual>d__37_TypeDefinitionIndex = 8338;

	class <CoSetEnemyUnitVisual>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITBGBattleTop* __4__this; // 0x20
		::System::String* enemyModelName; // 0x28
		<>c__DisplayClass37_0* __8__1; // 0x30
		::System::Action* onFinished; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSETENEMYUNITVISUAL>D__37_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENEMYUNITVISUAL>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENEMYUNITVISUAL>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENEMYUNITVISUAL>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENEMYUNITVISUAL>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETENEMYUNITVISUAL>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

