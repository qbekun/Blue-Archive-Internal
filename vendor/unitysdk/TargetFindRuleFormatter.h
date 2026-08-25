#pragma once
#include "unitysdk.h"

#define TARGETFINDRULEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F2080)
#define TARGETFINDRULEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F27F0)
#define TARGETFINDRULEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F2840)

	inline static constexpr unsigned int TargetFindRuleFormatter_TypeDefinitionIndex = 14606;

	class TargetFindRuleFormatter : public __StaticArrayInitTypeSize=120
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETFINDRULEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::TargetFindRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::TargetFindRule&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETFINDRULEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::TargetFindRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::TargetFindRule&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETFINDRULEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

