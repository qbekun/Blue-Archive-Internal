#pragma once
#include "../../unitysdk.h"

namespace Media::Service { class StorageType; }

namespace Media::Service
{
	inline static constexpr unsigned int StorageType_TypeDefinitionIndex = 10187;

	class StorageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Media::Service::StorageType* None; // 0x0
		::Media::Service::StorageType* InBuild; // 0x0
		::Media::Service::StorageType* Preload; // 0x0
		::Media::Service::StorageType* GameData; // 0x0

	};
}

