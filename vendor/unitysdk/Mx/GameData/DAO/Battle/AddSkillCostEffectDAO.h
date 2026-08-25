#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14ABB30)
#define MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14ABB80)
#define MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14ADB80)
#define MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14ADE40)
#define MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14ADEA0)
#define MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14ADEB0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AddSkillCostEffectDAO_TypeDefinitionIndex = 15196;

	class AddSkillCostEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddSkillCostEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDSKILLCOSTEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

