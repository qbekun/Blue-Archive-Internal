#pragma once
#include "unitysdk.h"

class ICharacter;
namespace MX::Logic::BattleEntities { class LogicEffectExpireChecker; }
class <>c__DisplayClass21_0;
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <COUSEEXSKILLCOUNTCHECK>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0x113B9F0)
#define <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x113D8F0)
#define <COUSEEXSKILLCOUNTCHECK>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x113D900)
#define <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x113DC80)
#define <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x113DC90)
#define <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x113DCE0)

	inline static constexpr unsigned int <CoUseExSkillCountCheck>d__21_TypeDefinitionIndex = 13108;

	class <CoUseExSkillCountCheck>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ICharacter* iCharacter; // 0x20
		::MX::Logic::BattleEntities::LogicEffectExpireChecker* __4__this; // 0x28
		<>c__DisplayClass21_0* __8__1; // 0x30
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUSEEXSKILLCOUNTCHECK>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSEEXSKILLCOUNTCHECK>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUSEEXSKILLCOUNTCHECK>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

