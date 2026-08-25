#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class IWebRequestAdaptor; }
namespace NPA::Editor::Network { class INXPRequest; }

#define NPA_EDITOR_NETWORK_NXPNETWORKCLIENT_EXECUTEASYNC_OFFSET UNITYSDK_OFFSET(0x9C1A270)
#define NPA_EDITOR_NETWORK_NXPNETWORKCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A340)
#define NPA_EDITOR_NETWORK_NXPNETWORKCLIENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C1A350)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPNetworkClient_TypeDefinitionIndex = 26635;

	class NXPNetworkClient : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::IWebRequestAdaptor* Adaptor; // 0x0

		::System::Void ExecuteAsync(::NPA::Editor::Network::INXPRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::INXPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPNETWORKCLIENT_EXECUTEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPNETWORKCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPNETWORKCLIENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

