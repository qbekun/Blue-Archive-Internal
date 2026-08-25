#pragma once
#include "unitysdk.h"

#define MEDIACATALOGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFB5A0)
#define MEDIACATALOGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xDFB600)
#define MEDIACATALOGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xDFB650)

	inline static constexpr unsigned int MediaCatalogFormatter_TypeDefinitionIndex = 10191;

	class MediaCatalogFormatter : public ::System::IO::FileMode
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIACATALOGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::Media::Service::MediaCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::Media::Service::MediaCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIACATALOGFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::Media::Service::MediaCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::Media::Service::MediaCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIACATALOGFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

