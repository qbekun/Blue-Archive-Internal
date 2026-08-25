#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ExtraSkillCostChangeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define EXTRASKILLCOSTCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1607200)
#define EXTRASKILLCOSTCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1607250)
#define EXTRASKILLCOSTCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16038E0)

	inline static constexpr unsigned int ExtraSkillCostChangeEffectDAOFormatter_TypeDefinitionIndex = 15311;

	class ExtraSkillCostChangeEffectDAOFormatter : public ::System::Configuration::Assemblies::AssemblyVersionCompatibility
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRASKILLCOSTCHANGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRASKILLCOSTCHANGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXTRASKILLCOSTCHANGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

