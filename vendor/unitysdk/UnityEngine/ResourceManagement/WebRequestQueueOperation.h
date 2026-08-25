#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUEOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E17F0)
#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUEOPERATION_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0xA0E1820)
#define UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUEOPERATION_COMPLETE_OFFSET UNITYSDK_OFFSET(0xA0E1840)

namespace UnityEngine::ResourceManagement
{
	inline static constexpr unsigned int WebRequestQueueOperation_TypeDefinitionIndex = 36357;

	class WebRequestQueueOperation : public Il2CppObject
	{
	public:
		::System::Boolean m_Completed; // 0x10
		::UnityEngine::Networking::UnityWebRequestAsyncOperation* Result; // 0x18
		Il2CppObject* OnComplete; // 0x20
		::UnityEngine::Networking::UnityWebRequest* m_WebRequest; // 0x28

		::System::Void .ctor(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUEOPERATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUEOPERATION_GET_ISDONE_OFFSET))(nullptr);
		}

		::System::Void Complete(::UnityEngine::Networking::UnityWebRequestAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_WEBREQUESTQUEUEOPERATION_COMPLETE_OFFSET))(arg, nullptr);
		}

	};
}

