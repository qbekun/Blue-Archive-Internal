#pragma once
#include "unitysdk.h"

#define FIELDSEASONSAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDCC80)
#define FIELDSEASONSAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDCCD0)
#define FIELDSEASONSAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDC720)

	inline static constexpr unsigned int FieldSeasonSaveDataFormatter_TypeDefinitionIndex = 10983;

	class FieldSeasonSaveDataFormatter : public ::System::Collections::IList
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldSeasonSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldSeasonSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDSEASONSAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldSeasonSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldSeasonSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDSEASONSAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDSEASONSAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

