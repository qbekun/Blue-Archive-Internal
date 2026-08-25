#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillCostChangeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SKILLCOSTCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1603460)
#define SKILLCOSTCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1601710)
#define SKILLCOSTCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16034B0)

	inline static constexpr unsigned int SkillCostChangeEffectDAOFormatter_TypeDefinitionIndex = 15309;

	class SkillCostChangeEffectDAOFormatter : public ::System::IO::FileStream
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCOSTCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCOSTCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCOSTCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

