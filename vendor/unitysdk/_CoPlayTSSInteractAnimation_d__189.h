#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }

#define <COPLAYTSSINTERACTANIMATION>D__189_.CTOR_OFFSET UNITYSDK_OFFSET(0x1201CD0)
#define <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1201CF0)
#define <COPLAYTSSINTERACTANIMATION>D__189_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1201D00)
#define <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1201DB0)
#define <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1201DC0)
#define <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1201E10)

	inline static constexpr unsigned int <CoPlayTSSInteractAnimation>d__189_TypeDefinitionIndex = 943;

	class <CoPlayTSSInteractAnimation>d__189 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterVisual* __4__this; // 0x20
		::MX::Logic::BattleEntities::BehaviorType* tssBehavior; // 0x28
		::MX::Logic::Actions::ActionState* actionState; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYTSSINTERACTANIMATION>D__189_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYTSSINTERACTANIMATION>D__189_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYTSSINTERACTANIMATION>D__189_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

