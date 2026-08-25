#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class LogicEffectTemplateModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F7EB0)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F7F10)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F8750)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F8760)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F8AD0)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F96E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int LogicEffectTemplateModifierDAO_TypeDefinitionIndex = 15448;

	class LogicEffectTemplateModifierDAO : public Il2CppObject
	{
	public:
		::System::String* TemplateId; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x20

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTTEMPLATEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

