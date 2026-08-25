#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyPushRequestManager; }
namespace NPA::Editor::Network { class NXPNetworkClient; }
namespace NPA::Editor::Network { class NXPToyPushRequest; }
namespace NPA::Editor::Network { class INXPResponse; }

#define NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C285B0)
#define NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C28620)
#define NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_EXECUTEREGISTERPUSH_OFFSET UNITYSDK_OFFSET(0x9C288B0)
#define NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_PROCESSERRORRESPONSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C28C20)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyPushRequestManager_TypeDefinitionIndex = 26711;

	class NXPToyPushRequestManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPToyPushRequestManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Network::NXPNetworkClient* _nxpNetworkClient; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPToyPushRequestManager* get_Instance()
		{
			return (return (::NPA::Editor::Network::NXPToyPushRequestManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void ExecuteRegisterPush(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_EXECUTEREGISTERPUSH_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void Execute(::NPA::Editor::Network::NXPToyPushRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyPushRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* processErrorResponse(::NPA::Editor::Network::INXPResponse* arg)
		{
			return (return (Il2CppObject*(*)(::NPA::Editor::Network::INXPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_PROCESSERRORRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYPUSHREQUESTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

