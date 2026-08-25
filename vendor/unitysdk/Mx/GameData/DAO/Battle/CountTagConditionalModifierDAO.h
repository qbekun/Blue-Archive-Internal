#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Core::Math { class DiffOperatorType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountTagConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F3460)
#define MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F39A0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F3B30)
#define MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F3B90)
#define MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F3950)
#define MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F4130)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountTagConditionalModifierDAO_TypeDefinitionIndex = 15434;

	class CountTagConditionalModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		Il2CppObject* TagConstraintsInt; // 0x20
		::System::Int32 Count; // 0x28
		::MX::Core::Math::DiffOperatorType* DiffOperator; // 0x2C

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTTAGCONDITIONALMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

