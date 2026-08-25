#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }
namespace NPA::Editor::Network { class INXPRequest; }

#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_POST_OFFSET UNITYSDK_OFFSET(0x9C1BB80)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_GET_OFFSET UNITYSDK_OFFSET(0x9C1C160)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_GETWITHBODY_OFFSET UNITYSDK_OFFSET(0x9C1C7C0)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_PUT_OFFSET UNITYSDK_OFFSET(0x9C1CD30)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_DELETE_OFFSET UNITYSDK_OFFSET(0x9C1CE00)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_PATCH_OFFSET UNITYSDK_OFFSET(0x9C1CE60)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_HEAD_OFFSET UNITYSDK_OFFSET(0x9C1CEC0)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_OPTIONS_OFFSET UNITYSDK_OFFSET(0x9C1CF20)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int UnityWebRequestFactory_TypeDefinitionIndex = 26646;

	class UnityWebRequestFactory : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* Post(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_POST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Get(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_GET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* GetWithBody(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_GETWITHBODY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Put(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_PUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Delete(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_DELETE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Patch(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_PATCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Head(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_HEAD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* Options(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTFACTORY_OPTIONS_OFFSET))(arg, nullptr);
		}

	};
}

