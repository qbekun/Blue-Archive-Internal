#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSHOWFEVERUIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x21827D0)
#define GROUNDCOMMANDSHOWFEVERUIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2182830)
#define GROUNDCOMMANDSHOWFEVERUIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2182890)

	inline static constexpr unsigned int GroundCommandShowFeverUIFormatter_TypeDefinitionIndex = 4044;

	class GroundCommandShowFeverUIFormatter : public ::System::Collections::Generic::IEnumerable`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandShowFeverUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandShowFeverUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUIFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandShowFeverUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandShowFeverUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUIFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUIFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

