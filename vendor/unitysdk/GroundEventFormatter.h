#pragma once
#include "unitysdk.h"

#define GROUNDEVENTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x136E950)
#define GROUNDEVENTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x136E9A0)
#define GROUNDEVENTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x136DA60)

	inline static constexpr unsigned int GroundEventFormatter_TypeDefinitionIndex = 14354;

	class GroundEventFormatter : public ::System::Collections::Generic::ObjectComparer`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundEvent&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDEVENTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundEvent&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDEVENTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDEVENTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

