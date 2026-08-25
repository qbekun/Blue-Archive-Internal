#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillProcessor; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define <FINDSKILLPACK>D__11_.CTOR_OFFSET UNITYSDK_OFFSET(0x114B7A0)
#define <FINDSKILLPACK>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x114CA60)
#define <FINDSKILLPACK>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x114CAC0)
#define <FINDSKILLPACK>D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x114CD30)
#define <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(MX.LOGIC.SKILLS.SKILLDATAPACKSKILLDATAPACK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114CD80)
#define <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x114CD90)
#define <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x114CDE0)
#define <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(MX.LOGIC.SKILLS.SKILLDATAPACKSKILLDATAPACK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114CE30)
#define <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x114CED0)

	inline static constexpr unsigned int <FindSkillPack>d__11_TypeDefinitionIndex = 13124;

	class <FindSkillPack>d__11 : public Il2CppObject
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
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11___M__FINALLY1_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_(MX.Logic.Skills.SkillDataPackskillDataPack_MX.Data.CharacterSkillListKeyskillListKey)_.get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(MX.LOGIC.SKILLS.SKILLDATAPACKSKILLDATAPACK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_(MX.Logic.Skills.SkillDataPackskillDataPack_MX.Data.CharacterSkillListKeyskillListKey)_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(MX.LOGIC.SKILLS.SKILLDATAPACKSKILLDATAPACK_MX.DATA.CHARACTERSKILLLISTKEYSKILLLISTKEY)_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDSKILLPACK>D__11_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

