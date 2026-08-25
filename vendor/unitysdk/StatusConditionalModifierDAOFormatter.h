#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class StatusConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define STATUSCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FD6B0)
#define STATUSCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FD0F0)
#define STATUSCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FD700)

	inline static constexpr unsigned int StatusConditionalModifierDAOFormatter_TypeDefinitionIndex = 15459;

	class StatusConditionalModifierDAOFormatter : public __StaticArrayInitTypeSize=3
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

