#pragma once
#include "unitysdk.h"

#define SKILLINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12AAB50)
#define SKILLINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12AAB10)
#define SKILLINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12AABA0)

	inline static constexpr unsigned int SkillInfoFormatter_TypeDefinitionIndex = 14118;

	class SkillInfoFormatter : public ::System::IO::MonoIOStat
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::SkillInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::SkillInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::SkillInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::SkillInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

