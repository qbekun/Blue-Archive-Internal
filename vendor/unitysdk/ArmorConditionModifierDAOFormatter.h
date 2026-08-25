#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ArmorConditionModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ARMORCONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E3640)
#define ARMORCONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E3680)
#define ARMORCONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E36D0)

	inline static constexpr unsigned int ArmorConditionModifierDAOFormatter_TypeDefinitionIndex = 15399;

	class ArmorConditionModifierDAOFormatter : public ::System::Reflection::Emit::ConstructorBuilder
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARMORCONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ARMORCONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ARMORCONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

