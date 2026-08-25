#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillLogicDAO; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x17DCF00)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DCF30)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DCF50)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DD010)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17DD060)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17DD0C0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x17DD170)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17DD1B0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x17DD1F0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17DD230)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_VALIDATE_OFFSET UNITYSDK_OFFSET(0x17DD270)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DD2F0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17DD340)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17DD350)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DD550)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillLogicDAO_TypeDefinitionIndex = 15598;

	class SkillLogicDAO : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* SkillDataKey; // 0x18

		::System::Int32 CompareTo(::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Int32(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::GameData::DAO::Battle::SkillLogicDAO* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameData::DAO::Battle::SkillLogicDAO* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(::MX::GameData::DAO::Battle::SkillLogicDAO* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::GameData::DAO::Battle::SkillLogicDAO* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_LESSTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::GameData::DAO::Battle::SkillLogicDAO* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::GameData::DAO::Battle::SkillLogicDAO* arg, ::MX::GameData::DAO::Battle::SkillLogicDAO* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameData::DAO::Battle::SkillLogicDAO*, ::MX::GameData::DAO::Battle::SkillLogicDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Validate(::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLOGICDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

