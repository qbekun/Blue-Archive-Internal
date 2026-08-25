#pragma once
#include "unitysdk.h"

#define RAILPOINTINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x21746F0)
#define RAILPOINTINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21746B0)
#define RAILPOINTINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2174740)

	inline static constexpr unsigned int RailPointInfoFormatter_TypeDefinitionIndex = 4031;

	class RailPointInfoFormatter : public <InternalReadAllBytesUnknownLengthAsync>d__72
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, RailPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, RailPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, RailPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, RailPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

