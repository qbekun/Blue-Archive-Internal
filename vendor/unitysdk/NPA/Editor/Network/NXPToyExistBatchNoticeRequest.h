#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPCachePolicy; }
namespace NPA { class NXPResult; }

#define NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C213E0)
#define NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICEREQUEST_GETREQUESTCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9C215A0)
#define NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICEREQUEST_SHOULDCACHERESPONSE_OFFSET UNITYSDK_OFFSET(0x9C215B0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyExistBatchNoticeRequest_TypeDefinitionIndex = 26660;

	class NXPToyExistBatchNoticeRequest : public Il2CppObject
	{
	public:
		::NPA::NXPCachePolicy* cachePolicy; // 0x50
		::System::Int32 CacheTime; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::NPA::NXPCachePolicy* GetRequestCachePolicy()
		{
			return (return (::NPA::NXPCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICEREQUEST_GETREQUESTCACHEPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldCacheResponse(::NPA::NXPResult* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYEXISTBATCHNOTICEREQUEST_SHOULDCACHERESPONSE_OFFSET))(arg, nullptr);
		}

	};
}

