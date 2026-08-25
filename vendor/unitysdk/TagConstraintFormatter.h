#pragma once
#include "unitysdk.h"

#define TAGCONSTRAINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F33E0)
#define TAGCONSTRAINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F30A0)
#define TAGCONSTRAINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F3490)

	inline static constexpr unsigned int TagConstraintFormatter_TypeDefinitionIndex = 13497;

	class TagConstraintFormatter : public __StaticArrayInitTypeSize=72
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TagConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TagConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TAGCONSTRAINTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAGCONSTRAINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TagConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TagConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + TAGCONSTRAINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

