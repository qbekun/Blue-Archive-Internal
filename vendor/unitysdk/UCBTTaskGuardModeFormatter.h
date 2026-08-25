#pragma once
#include "unitysdk.h"

#define UCBTTASKGUARDMODEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD7CA00)
#define UCBTTASKGUARDMODEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD79200)
#define UCBTTASKGUARDMODEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD7CA50)

	inline static constexpr unsigned int UCBTTaskGuardModeFormatter_TypeDefinitionIndex = 9678;

	class UCBTTaskGuardModeFormatter : public __StaticArrayInitTypeSize=1320
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskGuardMode&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskGuardMode&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKGUARDMODEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKGUARDMODEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskGuardMode&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskGuardMode&*, ::PVOID))((::PBYTE)hIl2Cpp + UCBTTASKGUARDMODEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

