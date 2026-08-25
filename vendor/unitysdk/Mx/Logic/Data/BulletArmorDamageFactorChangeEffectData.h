#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }

#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletArmorDamageFactorChangeEffectData_TypeDefinitionIndex = 13557;

	class BulletArmorDamageFactorChangeEffectData : public Il2CppObject
	{
	public:
		::FlatData::BulletType* BulletType; // 0x58
		::System::Int64 AddDamageRate; // 0x60
		::System::Int64 MultiplyDamageRate; // 0x68
		::MX::Logic::BattleEntities::LogicEffectEndCondition* EndCondition; // 0x70
		::System::Int32 EndConditionArgument; // 0x74
		::System::Boolean Dispellable; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

