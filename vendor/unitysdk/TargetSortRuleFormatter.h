#pragma once
#include "unitysdk.h"

#define TARGETSORTRULEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F41E0)
#define TARGETSORTRULEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F3040)
#define TARGETSORTRULEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F4230)

	inline static constexpr unsigned int TargetSortRuleFormatter_TypeDefinitionIndex = 14611;

	class TargetSortRuleFormatter : public __StaticArrayInitTypeSize=172
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::TargetSortRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::TargetSortRule&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSORTRULEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETSORTRULEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::TargetSortRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::TargetSortRule&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSORTRULEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

