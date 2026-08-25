#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPCachePolicy; }
namespace NPA { class NXPResult; }

#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEINTERFACE_GETREQUESTCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEINTERFACE_SHOULDCACHERESPONSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPRequestCacheInterface_TypeDefinitionIndex = 26715;

	class NXPRequestCacheInterface : public Il2CppObject
	{
	public:
		::NPA::NXPCachePolicy* GetRequestCachePolicy()
		{
			return (return (::NPA::NXPCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEINTERFACE_GETREQUESTCACHEPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldCacheResponse(::NPA::NXPResult* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEINTERFACE_SHOULDCACHERESPONSE_OFFSET))(arg, nullptr);
		}

	};
}

