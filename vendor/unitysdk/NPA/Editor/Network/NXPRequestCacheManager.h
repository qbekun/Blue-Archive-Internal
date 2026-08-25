#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPRequestCacheManager; }
namespace NPA { class NXPResult; }
namespace NPA { class NXPCachePolicy; }

#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_GET_CACHEDRESPONSE_OFFSET UNITYSDK_OFFSET(0x9C25DC0)
#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C20DF0)
#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_MAKEREQUESTCACHEKEY_OFFSET UNITYSDK_OFFSET(0x9C21010)
#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_GETCACHEDRESPONSE_OFFSET UNITYSDK_OFFSET(0x9C25E90)
#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_SAVERESPONSE_OFFSET UNITYSDK_OFFSET(0x9C26210)
#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C25DD0)
#define NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C26390)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPRequestCacheManager_TypeDefinitionIndex = 26692;

	class NXPRequestCacheManager : public Il2CppObject
	{
	public:
		::System::Int32 DefaultRequestCacheTime; // 0x0
		::System::String* CacheResponseTimeKey; // 0x10
		::System::String* CacheResponseDataKey; // 0x18
		::NPA::Editor::Network::NXPRequestCacheManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		Il2CppObject* _CachedResponse_k__BackingField; // 0x20

		Il2CppObject* get_CachedResponse()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_GET_CACHEDRESPONSE_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPRequestCacheManager* get_Instance()
		{
			return (return (::NPA::Editor::Network::NXPRequestCacheManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::String* MakeRequestCacheKey(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_MAKEREQUESTCACHEKEY_OFFSET))(str, str, nullptr);
		}

		::NPA::NXPResult* GetCachedResponse(::NPA::NXPCachePolicy* arg)
		{
			return (return (::NPA::NXPResult*(*)(::NPA::NXPCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_GETCACHEDRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveResponse(::NPA::NXPCachePolicy* arg, ::NPA::NXPResult* arg)
		{
			((::System::Void(*)(::NPA::NXPCachePolicy*, ::NPA::NXPResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_SAVERESPONSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUESTCACHEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

