#pragma once
#include "unitysdk.h"

#define OPTIONALCANDIDATERULEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13EFE30)
#define OPTIONALCANDIDATERULEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EFE70)
#define OPTIONALCANDIDATERULEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EFED0)

	inline static constexpr unsigned int OptionalCandidateRuleFormatter_TypeDefinitionIndex = 14602;

	class OptionalCandidateRuleFormatter : public ::System::IO::TextReader
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONALCANDIDATERULEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::OptionalCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::OptionalCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONALCANDIDATERULEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::OptionalCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::OptionalCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONALCANDIDATERULEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

