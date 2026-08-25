#pragma once
#include "unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillAbilityDAO; }
namespace MX::GameData::DAO::Battle { class BeamEntityDAO; }

#define <GETSKILLABILITY>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D2CB0)
#define <GETSKILLABILITY>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D4920)
#define <GETSKILLABILITY>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17D4B80)
#define <GETSKILLABILITY>D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17D50A0)
#define <GETSKILLABILITY>D__23___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x17D5050)
#define <GETSKILLABILITY>D__23___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x17D5140)
#define <GETSKILLABILITY>D__23___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x17D50F0)
#define <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMEDATA.DAO.BATTLE.SKILLABILITYDAO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17D5190)
#define <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x17D51A0)
#define <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17D51F0)
#define <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMEDATA.DAO.BATTLE.SKILLABILITYDAO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17D5200)
#define <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17D52A0)

	inline static constexpr unsigned int <GetSkillAbility>d__23_TypeDefinitionIndex = 15579;

	class <GetSkillAbility>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::GameData::DAO::Battle::SkillAbilityDAO* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::GameData::DAO::Battle::BeamEntityDAO* __4__this; // 0x28
		Il2CppObject* __7__wrap1; // 0x30
		Il2CppObject* __7__wrap2; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23___M__FINALLY3_OFFSET))(nullptr);
		}

		::System::Void __m__Finally4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23___M__FINALLY4_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::SkillAbilityDAO* System.Collections.Generic.IEnumerator_MX.GameData.DAO.Battle.SkillAbilityDAO_.get_Current()
		{
			return (return (::MX::GameData::DAO::Battle::SkillAbilityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMEDATA.DAO.BATTLE.SKILLABILITYDAO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.GameData.DAO.Battle.SkillAbilityDAO_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMEDATA.DAO.BATTLE.SKILLABILITYDAO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSKILLABILITY>D__23_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

