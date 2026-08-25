#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountTagConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTTAGCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F4140)
#define COUNTTAGCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F40F0)
#define COUNTTAGCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F4190)

	inline static constexpr unsigned int CountTagConditionalModifierDAOFormatter_TypeDefinitionIndex = 15433;

	class CountTagConditionalModifierDAOFormatter : public OnCultureInfoChangedDelegate
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTTAGCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTTAGCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountTagConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTTAGCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

