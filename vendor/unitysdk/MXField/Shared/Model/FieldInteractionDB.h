#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldInteractionDB; }

#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE6FD00)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE6FD10)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE6FD20)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE6FD30)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0xE6FD40)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0xE6FD50)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE6FD60)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_EQUALS_OFFSET UNITYSDK_OFFSET(0xE6FE40)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_EQUALS_OFFSET UNITYSDK_OFFSET(0xE6FED0)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE70020)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_.CCTOR_OFFSET UNITYSDK_OFFSET(0xE70090)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xE700A0)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xE702A0)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE70410)
#define MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xE70810)

namespace MXField::Shared::Model
{
	inline static constexpr unsigned int FieldInteractionDB_TypeDefinitionIndex = 10543;

	class FieldInteractionDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::DateTime* _UpdateDate_k__BackingField; // 0x20

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_UpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_UPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SET_UPDATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Shared::Model::FieldInteractionDB* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Model::FieldInteractionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Shared::Model::FieldInteractionDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Shared::Model::FieldInteractionDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Shared::Model::FieldInteractionDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Shared::Model::FieldInteractionDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDINTERACTIONDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

