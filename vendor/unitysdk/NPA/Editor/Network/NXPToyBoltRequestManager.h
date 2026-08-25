#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyBoltRequestManager; }
namespace NPA::Editor::Network { class NXPNetworkClient; }
namespace NPA::Editor::Network { class NXPRequest; }
namespace NPA { class NPRequestTypeTag; }
namespace NPA { class NPLoginType; }

#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C26DF0)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C26E60)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_SETWAFERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C270F0)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEAGREETERMS_OFFSET UNITYSDK_OFFSET(0x9C27100)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEGETPOLICYLIST_OFFSET UNITYSDK_OFFSET(0x9C27180)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEGETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9C27200)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEFORCACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9C27280)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_CONVERTLOGINTYPETOREQUESTTYPETAG_OFFSET UNITYSDK_OFFSET(0x9C27380)
#define NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C273F0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyBoltRequestManager_TypeDefinitionIndex = 26702;

	class NXPToyBoltRequestManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPToyBoltRequestManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Network::NXPNetworkClient* _nxpNetworkClient; // 0x10
		Il2CppObject* _wafErrorCallback; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Network::NXPToyBoltRequestManager* get_Instance()
		{
			return (return (::NPA::Editor::Network::NXPToyBoltRequestManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void SetWafErrorCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_SETWAFERRORCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteAgreeTerms(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEAGREETERMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteGetPolicyList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEGETPOLICYLIST_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteGetCountry(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEGETCOUNTRY_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteForCache(::NPA::Editor::Network::NXPRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTEFORCACHE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::NPA::Editor::Network::NXPRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::NPA::Editor::Network::NXPRequest* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::NPA::NPRequestTypeTag* convertLoginTypeToRequestTypeTag(::NPA::NPLoginType* arg)
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_CONVERTLOGINTYPETOREQUESTTYPETAG_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYBOLTREQUESTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

