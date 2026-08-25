#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ExSkillCardRedrawGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define EXSKILLCARDREDRAWGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x152F020)
#define EXSKILLCARDREDRAWGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x152EFE0)
#define EXSKILLCARDREDRAWGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x152F070)

	inline static constexpr unsigned int ExSkillCardRedrawGaugeEffectDAOFormatter_TypeDefinitionIndex = 15245;

	class ExSkillCardRedrawGaugeEffectDAOFormatter : public ::System::Diagnostics::CodeAnalysis::DisallowNullAttribute
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCARDREDRAWGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

