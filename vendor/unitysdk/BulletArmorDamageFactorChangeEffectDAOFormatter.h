#pragma once
#include "unitysdk.h"

#define BULLETARMORDAMAGEFACTORCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14B3400)
#define BULLETARMORDAMAGEFACTORCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14B3450)
#define BULLETARMORDAMAGEFACTORCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14AF9C0)

	inline static constexpr unsigned int BulletArmorDamageFactorChangeEffectDAOFormatter_TypeDefinitionIndex = 15197;

	class BulletArmorDamageFactorChangeEffectDAOFormatter : public ::System::Globalization::DaylightTimeStruct
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEFACTORCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEFACTORCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETARMORDAMAGEFACTORCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

