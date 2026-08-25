#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountLogicEffectTemplateModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F1A80)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F22D0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F2330)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F3040)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F3050)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F2FF0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountLogicEffectTemplateModifierDAO_TypeDefinitionIndex = 15432;

	class CountLogicEffectTemplateModifierDAO : public Il2CppObject
	{
	public:
		::System::String* TemplateId; // 0x18
		::System::Int32 CountMin; // 0x20
		::System::Int32 CountMax; // 0x24
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTEMPLATEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

