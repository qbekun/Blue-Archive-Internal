#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPCachePolicy; }
namespace NPA { class NXPResult; }

#define NPA_EDITOR_NETWORK_NXPTOYGETURLCALLSETTINGSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C226D0)
#define NPA_EDITOR_NETWORK_NXPTOYGETURLCALLSETTINGSREQUEST_GETREQUESTCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9C22B80)
#define NPA_EDITOR_NETWORK_NXPTOYGETURLCALLSETTINGSREQUEST_SHOULDCACHERESPONSE_OFFSET UNITYSDK_OFFSET(0x9C22B90)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetUrlCallSettingsRequest_TypeDefinitionIndex = 26670;

	class NXPToyGetUrlCallSettingsRequest : public Il2CppObject
	{
	public:
		::NPA::NXPCachePolicy* cachePolicy; // 0x50

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETURLCALLSETTINGSREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::NPA::NXPCachePolicy* GetRequestCachePolicy()
		{
			return (return (::NPA::NXPCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETURLCALLSETTINGSREQUEST_GETREQUESTCACHEPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldCacheResponse(::NPA::NXPResult* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETURLCALLSETTINGSREQUEST_SHOULDCACHERESPONSE_OFFSET))(arg, nullptr);
		}

	};
}

