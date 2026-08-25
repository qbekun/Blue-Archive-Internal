#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class ICCGSkillTriggerable; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGCard; }

#define <GET_PASSIVESKILLTRIGGERABLES>D__59_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBECB0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC37F0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DC39B0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DC44C0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DC4570)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1DC4620)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC46D0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DC46E0)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC4730)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC4740)
#define <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC47E0)

	inline static constexpr unsigned int <get_PassiveSkillTriggerables>d__59_TypeDefinitionIndex = 20461;

	class <get_PassiveSkillTriggerables>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::ICCGSkillTriggerable* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGPlayer* __4__this; // 0x28
		::Il2CppArray<::System::Object*>* _handCards_5__2; // 0x30
		::Il2CppArray<::System::Object*>* __7__wrap2; // 0x38
		::System::Int32 __7__wrap3; // 0x40
		::MX::MinigameCCG::CCGCharacter* _character_5__5; // 0x48
		Il2CppObject* __7__wrap5; // 0x50
		::MX::MinigameCCG::CCGCard* _hand_5__7; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59___M__FINALLY3_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::ICCGSkillTriggerable* System.Collections.Generic.IEnumerator_MX.MinigameCCG.ICCGSkillTriggerable_.get_Current()
		{
			return (return (::MX::MinigameCCG::ICCGSkillTriggerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.ICCGSkillTriggerable_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.ICCGSKILLTRIGGERABLE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_PASSIVESKILLTRIGGERABLES>D__59_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

