#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class LogicEffectTemplateModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define LOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F8A90)
#define LOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F9730)
#define LOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F9780)

	inline static constexpr unsigned int LogicEffectTemplateModifierDAOFormatter_TypeDefinitionIndex = 15447;

	class LogicEffectTemplateModifierDAOFormatter : public ::System::Buffers::Text::Number
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTTEMPLATEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

