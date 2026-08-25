#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine { class Hash128; }
namespace UnityEngine { class CachedAssetBundle; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F190)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F1A0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F2C0)
#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F470)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequestAssetBundle_TypeDefinitionIndex = 38021;

	class UnityWebRequestAssetBundle : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::System::String* str)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::System::String* str, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::System::String* str, ::UnityEngine::Hash128* arg, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::UnityEngine::Hash128*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(::System::String* str, ::UnityEngine::CachedAssetBundle* arg, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::UnityEngine::CachedAssetBundle*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTASSETBUNDLE_GETASSETBUNDLE_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

