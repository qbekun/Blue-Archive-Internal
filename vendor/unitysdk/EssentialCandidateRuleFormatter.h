#pragma once
#include "unitysdk.h"

#define ESSENTIALCANDIDATERULEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EDE90)
#define ESSENTIALCANDIDATERULEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EDF20)
#define ESSENTIALCANDIDATERULEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13EDDB0)

	inline static constexpr unsigned int EssentialCandidateRuleFormatter_TypeDefinitionIndex = 14600;

	class EssentialCandidateRuleFormatter : public ::System::Diagnostics::Tracing::NonEventAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::EssentialCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::EssentialCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + ESSENTIALCANDIDATERULEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::EssentialCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::EssentialCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + ESSENTIALCANDIDATERULEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ESSENTIALCANDIDATERULEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

