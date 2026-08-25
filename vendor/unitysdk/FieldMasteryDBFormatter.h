#pragma once
#include "unitysdk.h"

#define FIELDMASTERYDBFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE71310)
#define FIELDMASTERYDBFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE70C40)
#define FIELDMASTERYDBFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE71360)

	inline static constexpr unsigned int FieldMasteryDBFormatter_TypeDefinitionIndex = 10544;

	class FieldMasteryDBFormatter : public ::System::Collections::IDictionaryEnumerator
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldMasteryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldMasteryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDMASTERYDBFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDMASTERYDBFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldMasteryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldMasteryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDMASTERYDBFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

