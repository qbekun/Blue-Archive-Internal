#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define <GET_PASSIVESKILLTRIGGERABLES>D__52_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA4E0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DBC190)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DBC3A0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DBD110)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DBD1C0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1DBD2F0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1DBD3A0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DBD450)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DBD460)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DBD4B0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBD4C0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBD560)

	inline static constexpr unsigned int <get_PassiveSkillTriggerables>d__52_TypeDefinitionIndex = 20451;

	class <get_PassiveSkillTriggerables>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::ICCGSkillTriggerable* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGGame* __4__this; // 0x28
		::MX::MinigameCCG::CCGPlayer* _player_5__2; // 0x30
		Il2CppObject* __7__wrap2; // 0x38
		Il2CppObject* __7__wrap3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY3_OFFSET))(nullptr);
		}

		::System::Void __m__Finally4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52___M__FINALLY4_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::ICCGSkillTriggerable* System.Collections.Generic.IEnumerator_MX.MinigameCCG.ICCGSkillTriggerable_.get_Current()
		{
			return (return (::MX::MinigameCCG::ICCGSkillTriggerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.ICCGSkillTriggerable_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__52_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

