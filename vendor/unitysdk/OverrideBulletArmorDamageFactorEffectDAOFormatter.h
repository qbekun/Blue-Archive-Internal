#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class OverrideBulletArmorDamageFactorEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x168FA80)
#define OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x168CB60)
#define OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x168FAD0)

	inline static constexpr unsigned int OverrideBulletArmorDamageFactorEffectDAOFormatter_TypeDefinitionIndex = 15363;

	class OverrideBulletArmorDamageFactorEffectDAOFormatter : public NullTextWriter
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + OVERRIDEBULLETARMORDAMAGEFACTOREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

