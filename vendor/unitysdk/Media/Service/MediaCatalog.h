#pragma once
#include "../../unitysdk.h"

#define MEDIA_SERVICE_MEDIACATALOG_GET_TABLE_OFFSET UNITYSDK_OFFSET(0xDFACB0)
#define MEDIA_SERVICE_MEDIACATALOG_SET_TABLE_OFFSET UNITYSDK_OFFSET(0xDFACC0)
#define MEDIA_SERVICE_MEDIACATALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFACD0)
#define MEDIA_SERVICE_MEDIACATALOG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xDFACE0)
#define MEDIA_SERVICE_MEDIACATALOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDFB060)
#define MEDIA_SERVICE_MEDIACATALOG_TRYGET_OFFSET UNITYSDK_OFFSET(0xDFB2F0)
#define MEDIA_SERVICE_MEDIACATALOG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xDFB360)
#define MEDIA_SERVICE_MEDIACATALOG_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xDFB070)
#define MEDIA_SERVICE_MEDIACATALOG_SET_CATALOG_OFFSET UNITYSDK_OFFSET(0xDFB5E0)
#define MEDIA_SERVICE_MEDIACATALOG_GET_CATALOG_OFFSET UNITYSDK_OFFSET(0xDFB5F0)

namespace Media::Service
{
	inline static constexpr unsigned int MediaCatalog_TypeDefinitionIndex = 10192;

	class MediaCatalog : public Il2CppObject
	{
	public:
		Il2CppObject* _Table_k__BackingField; // 0x10
		Il2CppObject* _Catalog_k__BackingField; // 0x18

		Il2CppObject* get_Table()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Void set_Table(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_SET_TABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::Media::Service::MediaCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::Media::Service::MediaCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGet(::System::String* str, ::Media::Service::Media&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::Media::Service::Media&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_TRYGET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::Media::Service::MediaCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::Media::Service::MediaCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_Catalog(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_SET_CATALOG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Catalog()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIACATALOG_GET_CATALOG_OFFSET))(nullptr);
		}

	};
}

