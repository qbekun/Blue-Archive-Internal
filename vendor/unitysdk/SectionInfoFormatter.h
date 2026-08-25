#pragma once
#include "unitysdk.h"

#define SECTIONINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146D090)
#define SECTIONINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146D0E0)
#define SECTIONINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x146CFD0)

	inline static constexpr unsigned int SectionInfoFormatter_TypeDefinitionIndex = 15114;

	class SectionInfoFormatter : public NullStream
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::SectionInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::SectionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SECTIONINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::SectionInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::SectionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SECTIONINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECTIONINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

