#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class TacticEntityConstraint; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TacticEntityConditionalModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FD750)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16FD880)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16FD890)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FDB50)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16FDBA0)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FDC00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TacticEntityConditionalModifierDAO_TypeDefinitionIndex = 15462;

	class TacticEntityConditionalModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TacticEntityConstraint* Constraint; // 0x18

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

