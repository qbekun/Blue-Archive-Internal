#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectTypeModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTLISTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EB030)
#define COUNTLISTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EB850)
#define COUNTLISTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EB8A0)

	inline static constexpr unsigned int CountListLogicEffectTypeModifierDAOFormatter_TypeDefinitionIndex = 15417;

	class CountListLogicEffectTypeModifierDAOFormatter : public ::System::Globalization::CultureData
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

