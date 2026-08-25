#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFORMATIONCHANGEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E5CA0)
#define GROUNDCOMMANDFORMATIONCHANGEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12E5CF0)
#define GROUNDCOMMANDFORMATIONCHANGEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12E5A80)

	inline static constexpr unsigned int GroundCommandFormationChangeFormatter_TypeDefinitionIndex = 14182;

	class GroundCommandFormationChangeFormatter : public ::System::Collections::Concurrent::ConcurrentDictionary`2
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandFormationChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandFormationChange&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATIONCHANGEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandFormationChange&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandFormationChange&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATIONCHANGEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORMATIONCHANGEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

