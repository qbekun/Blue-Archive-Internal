#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class LogicEffectCategoryModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F7450)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F7580)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F75D0)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F7970)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F7DA0)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F7E00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int LogicEffectCategoryModifierDAO_TypeDefinitionIndex = 15446;

	class LogicEffectCategoryModifierDAO : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* LogicEffectCategory; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTCATEGORYMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

