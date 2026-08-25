#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles { class BattleActorComponent; }
class SkillActorEffectPlayer;
namespace MX::Logic::BattleEntities { class BehaviorType; }
class <>c__DisplayClass16_0;

#define <COPLAYACTIONEFFECTS>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x120BEB0)
#define <COPLAYACTIONEFFECTS>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1213060)
#define <COPLAYACTIONEFFECTS>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1213070)
#define <COPLAYACTIONEFFECTS>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1213600)
#define <COPLAYACTIONEFFECTS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1213610)
#define <COPLAYACTIONEFFECTS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1213660)

	inline static constexpr unsigned int <CoPlayActionEffects>d__16_TypeDefinitionIndex = 989;

	class <CoPlayActionEffects>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Visual::Battles::BattleActorComponent* actorComponent; // 0x20
		SkillActorEffectPlayer* __4__this; // 0x28
		::MX::Logic::BattleEntities::BehaviorType* behaviorType; // 0x30
		<>c__DisplayClass16_0* __8__1; // 0x38
		Il2CppObject* actionEffects; // 0x40
		::MX::Logic::BattleEntities::BehaviorType* _behavior_5__2; // 0x48
		::System::Int32 _i_5__3; // 0x4C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACTIONEFFECTS>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACTIONEFFECTS>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACTIONEFFECTS>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACTIONEFFECTS>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACTIONEFFECTS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYACTIONEFFECTS>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

