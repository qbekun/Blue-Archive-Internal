#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldMasteryDB; }

#define MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xEDC560)
#define MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xEDC760)
#define MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDC770)
#define MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDC7B0)
#define MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDC920)

namespace MXField::Core::Save
{
	inline static constexpr unsigned int FieldSeasonSaveData_TypeDefinitionIndex = 10984;

	class FieldSeasonSaveData : public Il2CppObject
	{
	public:
		::System::Int64 SeasonId; // 0x10
		::System::Int64 AccountId; // 0x18
		::MXField::Shared::Model::FieldMasteryDB* MasteryDB; // 0x20

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::MXField::Shared::Model::FieldMasteryDB* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MXField::Shared::Model::FieldMasteryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldSeasonSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldSeasonSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldSeasonSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldSeasonSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSEASONSAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

