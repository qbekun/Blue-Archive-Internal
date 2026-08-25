#pragma once
#include "unitysdk.h"

#define FIELDCLIENTSAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEE0880)
#define FIELDCLIENTSAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEE08D0)
#define FIELDCLIENTSAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDE470)

	inline static constexpr unsigned int FieldClientSaveDataFormatter_TypeDefinitionIndex = 10989;

	class FieldClientSaveDataFormatter : public ::System::Collections::ICollection
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldClientSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldClientSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCLIENTSAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldClientSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldClientSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCLIENTSAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCLIENTSAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

