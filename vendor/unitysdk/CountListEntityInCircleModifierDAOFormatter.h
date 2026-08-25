#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListEntityInCircleModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define COUNTLISTENTITYINCIRCLEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E8420)
#define COUNTLISTENTITYINCIRCLEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E8470)
#define COUNTLISTENTITYINCIRCLEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E7AE0)

	inline static constexpr unsigned int CountListEntityInCircleModifierDAOFormatter_TypeDefinitionIndex = 15409;

	class CountListEntityInCircleModifierDAOFormatter : public ::System::Globalization::UmAlQuraCalendar
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTENTITYINCIRCLEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTENTITYINCIRCLEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTENTITYINCIRCLEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

