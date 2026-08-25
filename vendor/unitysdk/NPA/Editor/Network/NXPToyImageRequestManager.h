#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyImageRequestManager; }
namespace NPA::Editor::Network { class NXPNetworkClient; }
namespace NPA::Editor::Network { class NXPRequest; }

#define NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C27BF0)
#define NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C27C60)
#define NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9C27EF0)
#define NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C28020)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyImageRequestManager_TypeDefinitionIndex = 26707;

	class NXPToyImageRequestManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPToyImageRequestManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Network::NXPNetworkClient* _nxpNetworkClient; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPToyImageRequestManager* get_Instance()
		{
			return (return (::NPA::Editor::Network::NXPToyImageRequestManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Execute(::NPA::Editor::Network::NXPRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYIMAGEREQUESTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

