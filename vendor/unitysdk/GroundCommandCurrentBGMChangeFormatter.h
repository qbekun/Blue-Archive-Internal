#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCURRENTBGMCHANGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12D2590)
#define GROUNDCOMMANDCURRENTBGMCHANGEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D34D0)
#define GROUNDCOMMANDCURRENTBGMCHANGEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D3520)

	inline static constexpr unsigned int GroundCommandCurrentBGMChangeFormatter_TypeDefinitionIndex = 14157;

	class GroundCommandCurrentBGMChangeFormatter : public ::System::Collections::IHashCodeProvider
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCURRENTBGMCHANGEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCURRENTBGMCHANGEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCurrentBGMChange&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCURRENTBGMCHANGEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

