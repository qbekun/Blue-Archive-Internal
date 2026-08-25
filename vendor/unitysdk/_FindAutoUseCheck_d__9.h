#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillProcessor; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define <FINDAUTOUSECHECK>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x114B640)
#define <FINDAUTOUSECHECK>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x114C5E0)
#define <FINDAUTOUSECHECK>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x114C640)
#define <FINDAUTOUSECHECK>D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x114C8B0)
#define <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(MX.LOGIC.SKILLS.AUTOUSECHECKAUTOUSECHECK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114C900)
#define <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x114C910)
#define <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114C960)
#define <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(MX.LOGIC.SKILLS.AUTOUSECHECKAUTOUSECHECK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114C9B0)
#define <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114CA50)

	inline static constexpr unsigned int <FindAutoUseCheck>d__9_TypeDefinitionIndex = 13123;

	class <FindAutoUseCheck>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::MX::Logic::BattleEntities::SkillProcessor* __4__this; // 0x30
		::MX::Logic::BattleEntities::SkillSlot* slot; // 0x38
		::MX::Logic::BattleEntities::SkillSlot* __3__slot; // 0x3C
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9___M__FINALLY1_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_(MX.Logic.Skills.AutoUseCheckautoUseCheck_MX.Data.CharacterSkillListKeyskillListKey)_.get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(MX.LOGIC.SKILLS.AUTOUSECHECKAUTOUSECHECK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_(MX.Logic.Skills.AutoUseCheckautoUseCheck_MX.Data.CharacterSkillListKeyskillListKey)_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(MX.LOGIC.SKILLS.AUTOUSECHECKAUTOUSECHECK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDAUTOUSECHECK>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

