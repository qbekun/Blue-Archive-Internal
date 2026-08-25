#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TacticEntityConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define TACTICENTITYCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FDB10)
#define TACTICENTITYCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FDF80)
#define TACTICENTITYCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FDFD0)

	inline static constexpr unsigned int TacticEntityConditionalModifierDAOFormatter_TypeDefinitionIndex = 15461;

	class TacticEntityConditionalModifierDAOFormatter : public __StaticArrayInitTypeSize=40
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TacticEntityConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

