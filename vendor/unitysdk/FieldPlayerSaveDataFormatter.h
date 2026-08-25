#pragma once
#include "unitysdk.h"

#define FIELDPLAYERSAVEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDD730)
#define FIELDPLAYERSAVEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDDB70)
#define FIELDPLAYERSAVEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDDBC0)

	inline static constexpr unsigned int FieldPlayerSaveDataFormatter_TypeDefinitionIndex = 10987;

	class FieldPlayerSaveDataFormatter : public ::System::Collections::IEnumerable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDPLAYERSAVEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldPlayerSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldPlayerSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDPLAYERSAVEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldPlayerSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldPlayerSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDPLAYERSAVEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

