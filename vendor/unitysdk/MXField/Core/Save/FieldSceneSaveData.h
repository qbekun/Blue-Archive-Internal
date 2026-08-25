#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xEDCD20)
#define MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xEDCF20)
#define MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDCF30)
#define MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDD060)
#define MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDD370)

namespace MXField::Core::Save
{
	inline static constexpr unsigned int FieldSceneSaveData_TypeDefinitionIndex = 10986;

	class FieldSceneSaveData : public Il2CppObject
	{
	public:
		::System::Int64 DateId; // 0x10
		::System::Int64 SceneId; // 0x18

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldSceneSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldSceneSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldSceneSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldSceneSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSCENESAVEDATA_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

