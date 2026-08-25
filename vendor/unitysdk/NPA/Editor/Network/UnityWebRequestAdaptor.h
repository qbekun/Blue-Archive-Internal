#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }
namespace NPA::Editor::Network { class INXPRequest; }

#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTADAPTOR_CREATEREQUEST_OFFSET UNITYSDK_OFFSET(0x9C1ABC0)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTADAPTOR_EXECUTEASYNC_OFFSET UNITYSDK_OFFSET(0x9C1AD90)
#define NPA_EDITOR_NETWORK_UNITYWEBREQUESTADAPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A3D0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int UnityWebRequestAdaptor_TypeDefinitionIndex = 26643;

	class UnityWebRequestAdaptor : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* CreateRequest(::NPA::Editor::Network::INXPRequest* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::NPA::Editor::Network::INXPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTADAPTOR_CREATEREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteAsync(::NPA::Editor::Network::INXPRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::INXPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTADAPTOR_EXECUTEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_UNITYWEBREQUESTADAPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

