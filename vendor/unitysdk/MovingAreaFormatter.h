#pragma once
#include "unitysdk.h"

#define MOVINGAREAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2162AC0)
#define MOVINGAREAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21614E0)
#define MOVINGAREAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2162B10)

	inline static constexpr unsigned int MovingAreaFormatter_TypeDefinitionIndex = 3987;

	class MovingAreaFormatter : public ::System::IO::MemoryStream
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, MovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, MovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, MovingArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, MovingArea&*, ::PVOID))((::PBYTE)hIl2Cpp + MOVINGAREAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

