#pragma once
#include "unitysdk.h"

#define LIMITBREAKSKILLDATAINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13048F0)
#define LIMITBREAKSKILLDATAINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1304940)
#define LIMITBREAKSKILLDATAINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13048B0)

	inline static constexpr unsigned int LimitBreakSkillDataInfoFormatter_TypeDefinitionIndex = 14216;

	class LimitBreakSkillDataInfoFormatter : public ::System::Buffers::StandardFormat
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::LimitBreakSkillDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::LimitBreakSkillDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + LIMITBREAKSKILLDATAINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::LimitBreakSkillDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::LimitBreakSkillDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + LIMITBREAKSKILLDATAINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMITBREAKSKILLDATAINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

