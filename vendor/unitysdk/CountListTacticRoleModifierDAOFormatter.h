#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListTacticRoleModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define COUNTLISTTACTICROLEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EEF50)
#define COUNTLISTTACTICROLEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EEFA0)
#define COUNTLISTTACTICROLEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EEEB0)

	inline static constexpr unsigned int CountListTacticRoleModifierDAOFormatter_TypeDefinitionIndex = 15423;

	class CountListTacticRoleModifierDAOFormatter : public ::System::Globalization::InternalCodePageDataItem
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTTACTICROLEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTTACTICROLEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTTACTICROLEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

