#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPCachePolicy; }
namespace NPA { class NXPResult; }

#define NPA_EDITOR_NETWORK_NXPTOYENTERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C209B0)
#define NPA_EDITOR_NETWORK_NXPTOYENTERREQUEST_GETREQUESTCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9C21260)
#define NPA_EDITOR_NETWORK_NXPTOYENTERREQUEST_SHOULDCACHERESPONSE_OFFSET UNITYSDK_OFFSET(0x9C21270)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyEnterRequest_TypeDefinitionIndex = 26659;

	class NXPToyEnterRequest : public Il2CppObject
	{
	public:
		::NPA::NXPCachePolicy* cachePolicy; // 0x50
		::System::Int32 CacheTime; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYENTERREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::NPA::NXPCachePolicy* GetRequestCachePolicy()
		{
			return (return (::NPA::NXPCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYENTERREQUEST_GETREQUESTCACHEPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldCacheResponse(::NPA::NXPResult* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYENTERREQUEST_SHOULDCACHERESPONSE_OFFSET))(arg, nullptr);
		}

	};
}

