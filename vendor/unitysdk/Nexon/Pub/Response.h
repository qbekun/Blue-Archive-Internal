#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class Patch; }
namespace Nexon::Pub { class Error; }

#define NEXON_PUB_RESPONSE_GET_LATESTBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x954C870)
#define NEXON_PUB_RESPONSE_GET_LATESTBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x954C880)
#define NEXON_PUB_RESPONSE_GET_MINIMUMBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x954C890)
#define NEXON_PUB_RESPONSE_GET_MINIMUMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x954C8A0)
#define NEXON_PUB_RESPONSE_GET_PATCH_OFFSET UNITYSDK_OFFSET(0x954C8B0)
#define NEXON_PUB_RESPONSE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x954C8C0)
#define NEXON_PUB_RESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C8D0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int Response_TypeDefinitionIndex = 37554;

	class Response : public Il2CppObject
	{
	public:
		::System::String* latest_build_version; // 0x10
		::System::String* latest_build_number; // 0x18
		::System::String* min_build_version; // 0x20
		::System::String* min_build_number; // 0x28
		::Nexon::Pub::Patch* patch; // 0x30
		::Nexon::Pub::Error* error; // 0x38

		::System::String* get_LatestBuildVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESPONSE_GET_LATESTBUILDVERSION_OFFSET))(nullptr);
		}

		::System::String* get_LatestBuildNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESPONSE_GET_LATESTBUILDNUMBER_OFFSET))(nullptr);
		}

		::System::String* get_MinimumBuildVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESPONSE_GET_MINIMUMBUILDVERSION_OFFSET))(nullptr);
		}

		::System::String* get_MinimumBuildNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESPONSE_GET_MINIMUMBUILDNUMBER_OFFSET))(nullptr);
		}

		::Nexon::Pub::Patch* get_Patch()
		{
			return (return (::Nexon::Pub::Patch*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESPONSE_GET_PATCH_OFFSET))(nullptr);
		}

		::Nexon::Pub::Error* get_Error()
		{
			return (return (::Nexon::Pub::Error*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESPONSE_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

