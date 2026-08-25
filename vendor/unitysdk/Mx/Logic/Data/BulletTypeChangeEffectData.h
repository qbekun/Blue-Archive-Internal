#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace FlatData { class BulletType; }

#define MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletTypeChangeEffectData_TypeDefinitionIndex = 13558;

	class BulletTypeChangeEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::FlatData::BulletType* ChangeBulletType; // 0x60
		::System::Boolean IsChangeNormal; // 0x64
		::System::Boolean IsChangeEx; // 0x65
		::System::Boolean IsChangePublic; // 0x66
		::System::Boolean IsChangeLeader; // 0x67
		::System::Boolean IsChangePassive; // 0x68
		::System::Boolean IsChangeExtraPassive; // 0x69
		::System::Boolean Dispellable; // 0x6A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

