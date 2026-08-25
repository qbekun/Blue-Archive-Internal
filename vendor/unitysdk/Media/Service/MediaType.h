#pragma once
#include "../../unitysdk.h"

namespace Media::Service { class MediaType; }

namespace Media::Service
{
	inline static constexpr unsigned int MediaType_TypeDefinitionIndex = 10188;

	class MediaType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Media::Service::MediaType* None; // 0x0
		::Media::Service::MediaType* Audio; // 0x0
		::Media::Service::MediaType* Video; // 0x0
		::Media::Service::MediaType* Texture; // 0x0

	};
}

