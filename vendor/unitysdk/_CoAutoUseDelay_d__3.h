#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetSkillDeckDecagram; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define <COAUTOUSEDELAY>D__3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1312100)
#define <COAUTOUSEDELAY>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1314250)
#define <COAUTOUSEDELAY>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1314260)
#define <COAUTOUSEDELAY>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1314490)
#define <COAUTOUSEDELAY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13144A0)
#define <COAUTOUSEDELAY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13144F0)

	inline static constexpr unsigned int <CoAutoUseDelay>d__3_TypeDefinitionIndex = 14227;

	class <CoAutoUseDelay>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram* __4__this; // 0x20
		::MX::Logic::Battles::Battle* battle; // 0x28
		::MX::Logic::BattleEntities::SupportActor* supportActor; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COAUTOUSEDELAY>D__3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOUSEDELAY>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOUSEDELAY>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOUSEDELAY>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOUSEDELAY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOUSEDELAY>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

