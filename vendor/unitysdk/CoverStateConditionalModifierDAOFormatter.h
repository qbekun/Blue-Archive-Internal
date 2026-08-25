#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CoverStateConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COVERSTATECONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F48E0)
#define COVERSTATECONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F4AB0)
#define COVERSTATECONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F4B00)

	inline static constexpr unsigned int CoverStateConditionalModifierDAOFormatter_TypeDefinitionIndex = 15435;

	class CoverStateConditionalModifierDAOFormatter : public ::System::Globalization::CultureInfo
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COVERSTATECONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COVERSTATECONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COVERSTATECONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

