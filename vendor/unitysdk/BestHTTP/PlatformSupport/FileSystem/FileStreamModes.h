#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::FileSystem { class FileStreamModes; }

namespace BestHTTP::PlatformSupport::FileSystem
{
	inline static constexpr unsigned int FileStreamModes_TypeDefinitionIndex = 23286;

	class FileStreamModes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::PlatformSupport::FileSystem::FileStreamModes* Create; // 0x0
		::BestHTTP::PlatformSupport::FileSystem::FileStreamModes* OpenRead; // 0x0
		::BestHTTP::PlatformSupport::FileSystem::FileStreamModes* OpenReadWrite; // 0x0
		::BestHTTP::PlatformSupport::FileSystem::FileStreamModes* Append; // 0x0

	};
}

