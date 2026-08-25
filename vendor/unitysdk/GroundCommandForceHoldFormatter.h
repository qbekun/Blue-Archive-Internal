#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDFORCEHOLDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12DB950)
#define GROUNDCOMMANDFORCEHOLDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DB9A0)
#define GROUNDCOMMANDFORCEHOLDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12DB9F0)

	inline static constexpr unsigned int GroundCommandForceHoldFormatter_TypeDefinitionIndex = 14169;

	class GroundCommandForceHoldFormatter : public ::System::Collections::Concurrent::CDSCollectionETWBCLProvider
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEHOLDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandForceHold&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandForceHold&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEHOLDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandForceHold&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandForceHold&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEHOLDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

