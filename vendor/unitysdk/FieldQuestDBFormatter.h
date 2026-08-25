#pragma once
#include "unitysdk.h"

#define FIELDQUESTDBFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE71EA0)
#define FIELDQUESTDBFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE71EF0)
#define FIELDQUESTDBFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE717E0)

	inline static constexpr unsigned int FieldQuestDBFormatter_TypeDefinitionIndex = 10547;

	class FieldQuestDBFormatter : public ::System::Collections::IEnumerator
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldQuestDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldQuestDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDQUESTDBFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldQuestDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldQuestDB&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDQUESTDBFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDQUESTDBFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

