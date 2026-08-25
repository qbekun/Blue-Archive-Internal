#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListTacticRangeModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTLISTTACTICRANGEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EDDF0)
#define COUNTLISTTACTICRANGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EDFA0)
#define COUNTLISTTACTICRANGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EDFF0)

	inline static constexpr unsigned int CountListTacticRangeModifierDAOFormatter_TypeDefinitionIndex = 15421;

	class CountListTacticRangeModifierDAOFormatter : public ::System::Globalization::InternalEncodingDataItem
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTTACTICRANGEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTTACTICRANGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTTACTICRANGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

