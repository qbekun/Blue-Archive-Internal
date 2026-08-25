#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define COUNTLISTMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E5750)
#define COUNTLISTMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E56B0)
#define COUNTLISTMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E57A0)

	inline static constexpr unsigned int CountListModifierDAOFormatter_TypeDefinitionIndex = 15405;

	class CountListModifierDAOFormatter : public ::System::Globalization::CodePageDataItem
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

