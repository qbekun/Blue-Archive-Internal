#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectTemplateModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EAB50)
#define COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EABA0)
#define COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EABF0)

	inline static constexpr unsigned int CountListLogicEffectTemplateModifierDAOFormatter_TypeDefinitionIndex = 15415;

	class CountListLogicEffectTemplateModifierDAOFormatter : public NumberFormatEntryManaged
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTLOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

