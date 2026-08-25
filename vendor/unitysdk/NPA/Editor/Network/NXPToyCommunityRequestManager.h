#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyCommunityRequestManager; }
namespace NPA::Editor::Network { class NXPNetworkClient; }
namespace NPA::Editor::Network { class NXPToyCommunityRequest; }
namespace NPA::Editor::Network { class INXPResponse; }

#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C27740)
#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C277B0)
#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_EXECUTEGETCOMMUNITYINFO_OFFSET UNITYSDK_OFFSET(0x9C27A40)
#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_EXECUTEGETCOMMUNITYINFO_OFFSET UNITYSDK_OFFSET(0x9C27AE0)
#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_PROCESSERRORRESPONSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C27B70)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyCommunityRequestManager_TypeDefinitionIndex = 26705;

	class NXPToyCommunityRequestManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPToyCommunityRequestManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Network::NXPNetworkClient* _nxpNetworkClient; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPToyCommunityRequestManager* get_Instance()
		{
			return (return (::NPA::Editor::Network::NXPToyCommunityRequestManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ExecuteGetCommunityInfo(::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_EXECUTEGETCOMMUNITYINFO_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void ExecuteGetCommunityInfo(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_EXECUTEGETCOMMUNITYINFO_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void Execute(::NPA::Editor::Network::NXPToyCommunityRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyCommunityRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* processErrorResponse(::NPA::Editor::Network::INXPResponse* arg)
		{
			return (return (Il2CppObject*(*)(::NPA::Editor::Network::INXPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_PROCESSERRORRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUESTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

