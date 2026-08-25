#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::ResourceManagement::Util { class UnityWebRequestResult&; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTUTILITIES_ISASSETBUNDLEDOWNLOADED_OFFSET UNITYSDK_OFFSET(0xA0E26F0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E65B0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTUTILITIES_REQUESTHASERRORS_OFFSET UNITYSDK_OFFSET(0xA0E65C0)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int UnityWebRequestUtilities_TypeDefinitionIndex = 36384;

	class UnityWebRequestUtilities : public Il2CppObject
	{
	public:
		::System::Boolean IsAssetBundleDownloaded(::UnityEngine::Networking::UnityWebRequestAsyncOperation* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTUTILITIES_ISASSETBUNDLEDOWNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean RequestHasErrors(::UnityEngine::Networking::UnityWebRequest* arg, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Networking::UnityWebRequest*, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_UNITYWEBREQUESTUTILITIES_REQUESTHASERRORS_OFFSET))(arg, arg, nullptr);
		}

	};
}

