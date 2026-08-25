#pragma once
#include "unitysdk.h"

#define FIELDSCENESAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDCEE0)
#define FIELDSCENESAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDD3A0)
#define FIELDSCENESAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDD3F0)

	inline static constexpr unsigned int FieldSceneSaveDataFormatter_TypeDefinitionIndex = 10985;

	class FieldSceneSaveDataFormatter : public ::System::Collections::IEqualityComparer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDSCENESAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldSceneSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldSceneSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDSCENESAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldSceneSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldSceneSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDSCENESAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

