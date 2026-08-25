#pragma once
#include "unitysdk.h"

class UICardGame_BattleIntro;
class <>c__DisplayClass25_1;
class <>c__DisplayClass25_0;
class UICardGame_IntroDialogTalk;

#define <CO_DIRECTING>D__25_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A2D0)
#define <CO_DIRECTING>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A2F0)
#define <CO_DIRECTING>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA4A300)
#define <CO_DIRECTING>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA4B390)
#define <CO_DIRECTING>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA4B3A0)
#define <CO_DIRECTING>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA4B3F0)

	inline static constexpr unsigned int <co_Directing>d__25_TypeDefinitionIndex = 443;

	class <co_Directing>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICardGame_BattleIntro* __4__this; // 0x20
		<>c__DisplayClass25_1* __8__1; // 0x28
		<>c__DisplayClass25_0* __8__2; // 0x30
		::System::Int32 _i_5__2; // 0x38
		UICardGame_IntroDialogTalk* _talk_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__25_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

