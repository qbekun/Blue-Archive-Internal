#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TargetDistanceDamageModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define TARGETDISTANCEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FFEC0)
#define TARGETDISTANCEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FF9E0)
#define TARGETDISTANCEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FFF10)

	inline static constexpr unsigned int TargetDistanceDamageModifierDAOFormatter_TypeDefinitionIndex = 15467;

	class TargetDistanceDamageModifierDAOFormatter : public __StaticArrayInitTypeSize=94
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETDISTANCEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETDISTANCEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetDistanceDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETDISTANCEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

