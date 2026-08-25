#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SkillCostChangeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x15FE860)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15FE8C0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16013E0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1601750)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1603450)
#define MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1601390)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillCostChangeEffectDAO_TypeDefinitionIndex = 15310;

	class SkillCostChangeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 BaseAmount; // 0x58
		::System::Int64 Coefficient; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x68
		::System::Int32 EndConditionArgument; // 0x6C
		::System::String* ApplyLogicEffectGroupIdStack; // 0x70
		::System::Boolean Dispellable; // 0x78

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLCOSTCHANGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

