#pragma once
#include "unitysdk.h"

#define CIRCLEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1337450)
#define CIRCLEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13375D0)
#define CIRCLEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1337620)

	inline static constexpr unsigned int CircleDataFormatter_TypeDefinitionIndex = 14275;

	class CircleDataFormatter : public ::System::Globalization::TimeSpanParse
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIRCLEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::CircleData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::CircleData&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::CircleData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::CircleData&*, ::PVOID))((::PBYTE)hIl2Cpp + CIRCLEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

