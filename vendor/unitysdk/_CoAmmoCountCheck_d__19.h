#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class LogicEffectExpireChecker; }
class <>c__DisplayClass19_0;
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <COAMMOCOUNTCHECK>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x113BFC0)
#define <COAMMOCOUNTCHECK>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x113C8A0)
#define <COAMMOCOUNTCHECK>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x113C8B0)
#define <COAMMOCOUNTCHECK>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x113CC50)
#define <COAMMOCOUNTCHECK>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x113CC60)
#define <COAMMOCOUNTCHECK>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x113CCB0)

	inline static constexpr unsigned int <CoAmmoCountCheck>d__19_TypeDefinitionIndex = 13103;

	class <CoAmmoCountCheck>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x20
		::MX::Logic::BattleEntities::LogicEffectExpireChecker* __4__this; // 0x28
		<>c__DisplayClass19_0* __8__1; // 0x30
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitFor_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COAMMOCOUNTCHECK>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAMMOCOUNTCHECK>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAMMOCOUNTCHECK>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAMMOCOUNTCHECK>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAMMOCOUNTCHECK>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAMMOCOUNTCHECK>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

