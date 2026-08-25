#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_GET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA4A3490)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_SET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA4A34A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A34B0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequestAsyncOperation_TypeDefinitionIndex = 37422;

	class UnityWebRequestAsyncOperation : public ::Unity::Burst::BurstRuntime
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _webRequest_k__BackingField; // 0x20

		::UnityEngine::Networking::UnityWebRequest* get_webRequest()
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_GET_WEBREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_webRequest(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_SET_WEBREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASYNCOPERATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

