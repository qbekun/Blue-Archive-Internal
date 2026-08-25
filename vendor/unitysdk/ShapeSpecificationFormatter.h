#pragma once
#include "unitysdk.h"

#define SHAPESPECIFICATIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B22D0)
#define SHAPESPECIFICATIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B2310)
#define SHAPESPECIFICATIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12B23A0)

	inline static constexpr unsigned int ShapeSpecificationFormatter_TypeDefinitionIndex = 14127;

	class ShapeSpecificationFormatter : public <<ReadAsync>g__FinishReadAsync|44_0>d
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAPESPECIFICATIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::ShapeSpecification&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::ShapeSpecification&*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPESPECIFICATIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::ShapeSpecification&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::ShapeSpecification&*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPESPECIFICATIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

