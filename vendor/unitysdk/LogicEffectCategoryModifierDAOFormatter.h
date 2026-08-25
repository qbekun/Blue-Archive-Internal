#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class LogicEffectCategoryModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define LOGICEFFECTCATEGORYMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F7D60)
#define LOGICEFFECTCATEGORYMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F7E10)
#define LOGICEFFECTCATEGORYMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F7E60)

	inline static constexpr unsigned int LogicEffectCategoryModifierDAOFormatter_TypeDefinitionIndex = 15445;

	class LogicEffectCategoryModifierDAOFormatter : public ::System::Buffers::Text::Utf8Constants
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTCATEGORYMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTCATEGORYMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTCATEGORYMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

