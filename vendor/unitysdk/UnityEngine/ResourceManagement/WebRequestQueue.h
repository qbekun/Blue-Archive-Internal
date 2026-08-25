#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::ResourceManagement { class WebRequestQueueOperation; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_ONWEBASYNCOPCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0E1890)
#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0E1B40)
#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_SETMAXCONCURRENTREQUESTS_OFFSET UNITYSDK_OFFSET(0xA0E1C50)
#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_QUEUEREQUEST_OFFSET UNITYSDK_OFFSET(0xA0E1D10)
#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_WAITFORREQUESTTOBEACTIVE_OFFSET UNITYSDK_OFFSET(0xA0E20F0)

namespace UnityEngine::ResourceManagement
{
	inline static constexpr unsigned int WebRequestQueue_TypeDefinitionIndex = 36358;

	class WebRequestQueue : public Il2CppObject
	{
	public:
		::System::Int32 s_MaxRequest; // 0x0
		Il2CppObject* s_QueuedOperations; // 0x8
		Il2CppObject* s_ActiveRequests; // 0x10

		::System::Void OnWebAsyncOpComplete(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_ONWEBASYNCOPCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetMaxConcurrentRequests(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_SETMAXCONCURRENTREQUESTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ResourceManagement::WebRequestQueueOperation* QueueRequest(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			return (return (::UnityEngine::ResourceManagement::WebRequestQueueOperation*(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_QUEUEREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void WaitForRequestToBeActive(::UnityEngine::ResourceManagement::WebRequestQueueOperation* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::WebRequestQueueOperation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUE_WAITFORREQUESTTOBEACTIVE_OFFSET))(arg, arg, nullptr);
		}

	};
}

