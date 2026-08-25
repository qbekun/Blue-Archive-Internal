#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_GET_CLEARDATE_OFFSET UNITYSDK_OFFSET(0xE6F560)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE6F570)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_SET_CLEARDATE_OFFSET UNITYSDK_OFFSET(0xE6F6B0)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6F6C0)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_.CCTOR_OFFSET UNITYSDK_OFFSET(0xE6F6D0)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xE6F6E0)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE6F8E0)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE6F8F0)
#define MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_SET_DATEID_OFFSET UNITYSDK_OFFSET(0xE6FC50)

namespace MXField::Shared::Model
{
	inline static constexpr unsigned int FieldDateHistoryDB_TypeDefinitionIndex = 10541;

	class FieldDateHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _DateId_k__BackingField; // 0x10
		::System::DateTime* _ClearDate_k__BackingField; // 0x18

		::System::DateTime* get_ClearDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_GET_CLEARDATE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldDateHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldDateHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ClearDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_SET_CLEARDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldDateHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldDateHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_DateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDDATEHISTORYDB_SET_DATEID_OFFSET))(arg, nullptr);
		}

	};
}

