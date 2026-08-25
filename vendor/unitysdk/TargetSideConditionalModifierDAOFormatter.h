#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetSideConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define TARGETSIDECONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17011F0)
#define TARGETSIDECONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1701140)
#define TARGETSIDECONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1701240)

	inline static constexpr unsigned int TargetSideConditionalModifierDAOFormatter_TypeDefinitionIndex = 15471;

	class TargetSideConditionalModifierDAOFormatter : public __StaticArrayInitTypeSize=130
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSIDECONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETSIDECONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetSideConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSIDECONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

