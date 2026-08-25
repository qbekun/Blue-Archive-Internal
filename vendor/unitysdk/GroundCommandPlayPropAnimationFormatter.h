#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDPLAYPROPANIMATIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F0B00)
#define GROUNDCOMMANDPLAYPROPANIMATIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F0B50)
#define GROUNDCOMMANDPLAYPROPANIMATIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12EF590)

	inline static constexpr unsigned int GroundCommandPlayPropAnimationFormatter_TypeDefinitionIndex = 14194;

	class GroundCommandPlayPropAnimationFormatter : public ::System::Collections::ObjectModel::ReadOnlyCollection`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandPlayPropAnimation&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDPLAYPROPANIMATIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

