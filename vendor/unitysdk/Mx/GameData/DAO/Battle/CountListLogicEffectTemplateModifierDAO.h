#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectTemplateModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E9EE0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EA560)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16EA700)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16EA760)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EA4B0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16EAB90)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListLogicEffectTemplateModifierDAO_TypeDefinitionIndex = 15416;

	class CountListLogicEffectTemplateModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* TemplateIdList; // 0x28
		::System::Boolean CountTrueCondition; // 0x30

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

