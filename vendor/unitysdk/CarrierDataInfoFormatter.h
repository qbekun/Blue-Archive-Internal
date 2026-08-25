#pragma once
#include "unitysdk.h"

#define CARRIERDATAINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12FC6B0)
#define CARRIERDATAINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FEB40)
#define CARRIERDATAINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FEB90)

	inline static constexpr unsigned int CarrierDataInfoFormatter_TypeDefinitionIndex = 14208;

	class CarrierDataInfoFormatter : public ::System::Globalization::HebrewNumber
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARRIERDATAINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::CarrierDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::CarrierDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + CARRIERDATAINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::CarrierDataInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::CarrierDataInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + CARRIERDATAINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

