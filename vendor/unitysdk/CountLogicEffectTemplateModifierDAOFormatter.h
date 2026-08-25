#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountLogicEffectTemplateModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define COUNTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F33C0)
#define COUNTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F3380)
#define COUNTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F3410)

	inline static constexpr unsigned int CountLogicEffectTemplateModifierDAOFormatter_TypeDefinitionIndex = 15431;

	class CountLogicEffectTemplateModifierDAOFormatter : public ::System::Globalization::TextInfoToLowerData
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

