#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Service { class NXPToyServiceManager; }
namespace NPA::Auth { class NXPToyService; }
namespace NPA::Editor::Network { class NXPToyEnterResponse; }
namespace NPA { class NXPAuthenticationEnvironment; }

#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BFE230)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9BFE2B0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_ENTERTOY_OFFSET UNITYSDK_OFFSET(0x9BFE4D0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_SAVETOYBASEINFO_OFFSET UNITYSDK_OFFSET(0x9BFE8B0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CHECKMAINTENANCE_OFFSET UNITYSDK_OFFSET(0x9BFF0B0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CANDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x9BFF6B0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CANDELETEKRPCACCOUNT_OFFSET UNITYSDK_OFFSET(0x9BFF760)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CANDELETEGLOBALACCOUNT_OFFSET UNITYSDK_OFFSET(0x9BFF7A0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_GETAUTHENTICATIONENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9BFF6D0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_GETCURRENTSERVICE_OFFSET UNITYSDK_OFFSET(0x9BFF7C0)
#define NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BFF7D0)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPToyServiceManager_TypeDefinitionIndex = 26524;

	class NXPToyServiceManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Service::NXPToyServiceManager* _instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::System::Double lastEnterToyRequestTime; // 0x10
		::System::Boolean nowBlocked; // 0x18
		Il2CppObject* cacheMaintenanceResult; // 0x20
		::NPA::Auth::NXPToyService* currentService; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Service::NXPToyServiceManager* get_Instance()
		{
			return (return (::NPA::Editor::Service::NXPToyServiceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void EnterToy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_ENTERTOY_OFFSET))(arg, nullptr);
		}

		::System::Void SaveToyBaseInfo(::NPA::Editor::Network::NXPToyEnterResponse* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyEnterResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_SAVETOYBASEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMaintenance(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CHECKMAINTENANCE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean CanDeleteAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CANDELETEACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean CanDeleteKRPCAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CANDELETEKRPCACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean CanDeleteGlobalAccount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_CANDELETEGLOBALACCOUNT_OFFSET))(nullptr);
		}

		::NPA::NXPAuthenticationEnvironment* GetAuthenticationEnvironment()
		{
			return (return (::NPA::NXPAuthenticationEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_GETAUTHENTICATIONENVIRONMENT_OFFSET))(nullptr);
		}

		::NPA::Auth::NXPToyService* GetCurrentService()
		{
			return (return (::NPA::Auth::NXPToyService*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_GETCURRENTSERVICE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYSERVICEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

