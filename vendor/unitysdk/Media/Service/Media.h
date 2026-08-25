#pragma once
#include "../../unitysdk.h"

namespace Media::Service { class StorageType; }
namespace Media::Service { class MediaType; }

#define MEDIA_SERVICE_MEDIA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDF9330)
#define MEDIA_SERVICE_MEDIA_SET_PATH_OFFSET UNITYSDK_OFFSET(0xDF9670)
#define MEDIA_SERVICE_MEDIA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xDF9680)
#define MEDIA_SERVICE_MEDIA_SET_STORAGETYPE_OFFSET UNITYSDK_OFFSET(0xDF9F80)
#define MEDIA_SERVICE_MEDIA_GET_STORAGETYPE_OFFSET UNITYSDK_OFFSET(0xDF9F90)
#define MEDIA_SERVICE_MEDIA_GET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0xDF9FA0)
#define MEDIA_SERVICE_MEDIA_GET_PATH_OFFSET UNITYSDK_OFFSET(0xDF9FB0)
#define MEDIA_SERVICE_MEDIA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xDF9340)
#define MEDIA_SERVICE_MEDIA_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFA000)
#define MEDIA_SERVICE_MEDIA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xDFA010)
#define MEDIA_SERVICE_MEDIA_SET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0xDFAC00)

namespace Media::Service
{
	inline static constexpr unsigned int Media_TypeDefinitionIndex = 10190;

	class Media : public Il2CppObject
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10
		::Media::Service::StorageType* _StorageType_k__BackingField; // 0x18
		::Media::Service::MediaType* _MediaType_k__BackingField; // 0x1C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_SET_PATH_OFFSET))(str, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::Media::Service::Media&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::Media::Service::Media&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_StorageType(::Media::Service::StorageType* arg)
		{
			((::System::Void(*)(::Media::Service::StorageType*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_SET_STORAGETYPE_OFFSET))(arg, nullptr);
		}

		::Media::Service::StorageType* get_StorageType()
		{
			return ((::Media::Service::StorageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_GET_STORAGETYPE_OFFSET))(nullptr);
		}

		::Media::Service::MediaType* get_MediaType()
		{
			return ((::Media::Service::MediaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_GET_MEDIATYPE_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::Media::Service::Media&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::Media::Service::Media&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MediaType(::Media::Service::MediaType* arg)
		{
			((::System::Void(*)(::Media::Service::MediaType*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIA_SET_MEDIATYPE_OFFSET))(arg, nullptr);
		}

	};
}

