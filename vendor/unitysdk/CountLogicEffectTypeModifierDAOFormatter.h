#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountLogicEffectTypeModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define COUNTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16ED230)
#define COUNTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16ED190)
#define COUNTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16ED280)

	inline static constexpr unsigned int CountLogicEffectTypeModifierDAOFormatter_TypeDefinitionIndex = 15419;

	class CountLogicEffectTypeModifierDAOFormatter : public Data
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

