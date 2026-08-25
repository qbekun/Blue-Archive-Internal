#pragma once
#include "../../../unitysdk.h"

#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE71460)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE71470)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE71480)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE71490)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0xE714A0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0xE714B0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE714C0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE714D0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_ISDAILY_OFFSET UNITYSDK_OFFSET(0xE714E0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_ISDAILY_OFFSET UNITYSDK_OFFSET(0xE714F0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE71500)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xE715E0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6B0C0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_CLEAR_OFFSET UNITYSDK_OFFSET(0xE715F0)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_.CCTOR_OFFSET UNITYSDK_OFFSET(0xE71610)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xE71620)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE71820)
#define MXFIELD_SHARED_MODEL_FIELDQUESTDB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE719B0)

namespace MXField::Shared::Model
{
	inline static constexpr unsigned int FieldQuestDB_TypeDefinitionIndex = 10548;

	class FieldQuestDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::DateTime* _UpdateDate_k__BackingField; // 0x20
		::System::Boolean _IsComplete_k__BackingField; // 0x28
		::System::Boolean _IsDaily_k__BackingField; // 0x29

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_UpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_UPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_UPDATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_ISCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_IsComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDaily()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_ISDAILY_OFFSET))(nullptr);
		}

		::System::Void set_IsDaily(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_SET_ISDAILY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean Clear(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldQuestDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldQuestDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldQuestDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldQuestDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDQUESTDB_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

