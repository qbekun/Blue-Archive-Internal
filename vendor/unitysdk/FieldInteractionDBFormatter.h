#pragma once
#include "unitysdk.h"

#define FIELDINTERACTIONDBFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE70820)
#define FIELDINTERACTIONDBFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE70870)
#define FIELDINTERACTIONDBFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE70260)

	inline static constexpr unsigned int FieldInteractionDBFormatter_TypeDefinitionIndex = 10542;

	class FieldInteractionDBFormatter : public ::System::Collections::IDictionary
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldInteractionDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldInteractionDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDINTERACTIONDBFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldInteractionDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldInteractionDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDINTERACTIONDBFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDINTERACTIONDBFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

