#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Data { class FieldMasteryLevelInfo; }

#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0xE708C0)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_GET_WASMASTERYCHANGED_OFFSET UNITYSDK_OFFSET(0xE708D0)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB__LEVELUP_B__13_1_OFFSET UNITYSDK_OFFSET(0xE708E0)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_.CCTOR_OFFSET UNITYSDK_OFFSET(0xE70900)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE70AD0)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE70C20)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SET_WASMASTERYCHANGED_OFFSET UNITYSDK_OFFSET(0xE70C30)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6A050)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xE70910)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE70C80)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_LEVELUP_OFFSET UNITYSDK_OFFSET(0xE70C90)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0xE70F80)
#define MXFIELD_SHARED_MODEL_FIELDMASTERYDB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE70F90)

namespace MXField::Shared::Model
{
	inline static constexpr unsigned int FieldMasteryDB_TypeDefinitionIndex = 10546;

	class FieldMasteryDB : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x10
		::System::Int64 _Exp_k__BackingField; // 0x18
		::System::Boolean _WasMasteryChanged_k__BackingField; // 0x20

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Boolean get_WasMasteryChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_GET_WASMASTERYCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean _LevelUp_b__13_1(::MXField::Shared::Data::FieldMasteryLevelInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldMasteryLevelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB__LEVELUP_B__13_1_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldMasteryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldMasteryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_WasMasteryChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SET_WASMASTERYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void LevelUp(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_LEVELUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldMasteryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldMasteryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDMASTERYDB_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

