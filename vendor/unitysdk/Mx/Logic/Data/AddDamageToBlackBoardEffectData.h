#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Data { class AccumulateDamageActionType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class SkillType; }

#define MX_LOGIC_DATA_ADDDAMAGETOBLACKBOARDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3D80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddDamageToBlackBoardEffectData_TypeDefinitionIndex = 13545;

	class AddDamageToBlackBoardEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean IsDispellable; // 0x60
		::System::String* BlackBoardKey; // 0x68
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x70
		::System::Int64 BlackBoardAddValue; // 0x78
		::System::Int64 DamageInterval; // 0x80
		::MX::Logic::Data::AccumulateDamageActionType* DamageActionType; // 0x88
		::MX::Logic::Skills::TargetSideId* TargetSideFilter; // 0x8C
		::FlatData::BulletType* BulletTypeFilter; // 0x90
		::System::Boolean IncludeTransferDamage; // 0x94
		::MX::Logic::Skills::SkillType* SkillTypeFilter; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDDAMAGETOBLACKBOARDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

