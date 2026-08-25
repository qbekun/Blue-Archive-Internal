#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class DamageAttribute; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F43A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int OverrideBulletArmorDamageFactorEffectData_TypeDefinitionIndex = 13620;

	class OverrideBulletArmorDamageFactorEffectData : public Il2CppObject
	{
	public:
		::FlatData::BulletType* CheckBulletType; // 0x58
		::FlatData::ArmorType* CheckArmorType; // 0x5C
		::System::Int64 DamageRate; // 0x60
		::FlatData::DamageAttribute* DamageAttribute; // 0x68
		::System::Boolean ShowHighlightFloater; // 0x6C
		::System::Int64 MinDamageRate; // 0x70
		::System::Int64 MaxDamageRate; // 0x78
		::FlatData::EndCondition* EndCondition; // 0x80
		::System::String* EndConditionArgument; // 0x88
		::System::Boolean Dispellable; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

