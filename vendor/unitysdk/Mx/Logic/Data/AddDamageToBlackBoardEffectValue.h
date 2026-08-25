#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Data { class AccumulateDamageActionType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::GameData::DAO::Battle { class AddDamageToBlackBoardEffectDAO; }

#define MX_LOGIC_DATA_ADDDAMAGETOBLACKBOARDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12334F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddDamageToBlackBoardEffectValue_TypeDefinitionIndex = 13843;

	class AddDamageToBlackBoardEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x48
		::System::Int32 EndConditionArgument; // 0x4C
		::System::Boolean IsDispellable; // 0x50
		::System::String* BlackBoardKey; // 0x58
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x60
		::System::Int64 BlackBoardAddValue; // 0x68
		::System::Int64 DamageInterval; // 0x70
		::MX::Logic::Data::AccumulateDamageActionType* DamageActionType; // 0x78
		::MX::Logic::Skills::TargetSideId* TargetSideFilter; // 0x7C
		::FlatData::BulletType* BulletTypeFilter; // 0x80
		::System::Boolean IncludeTransferDamage; // 0x84
		::MX::Logic::Skills::SkillType* SkillTypeFilter; // 0x88

		::System::Void .ctor(::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AddDamageToBlackBoardEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDDAMAGETOBLACKBOARDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

