#pragma once
#include "unitysdk.h"

#define BULLETTYPECHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14B7760)
#define BULLETTYPECHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14B77B0)
#define BULLETTYPECHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14B7720)

	inline static constexpr unsigned int BulletTypeChangeEffectDAOFormatter_TypeDefinitionIndex = 15199;

	class BulletTypeChangeEffectDAOFormatter : public ::System::Globalization::HebrewNumberParsingState
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

