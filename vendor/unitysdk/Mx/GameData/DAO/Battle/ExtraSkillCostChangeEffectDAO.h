#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ExtraSkillCostChangeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1603500)
#define MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1603560)
#define MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16035B0)
#define MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1603920)
#define MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1605BC0)
#define MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16071F0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ExtraSkillCostChangeEffectDAO_TypeDefinitionIndex = 15312;

	class ExtraSkillCostChangeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 BaseAmount; // 0x58
		::System::Int64 Coefficient; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x68
		::System::Int32 EndConditionArgument; // 0x6C
		::System::Boolean Dispellable; // 0x70

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRASKILLCOSTCHANGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

