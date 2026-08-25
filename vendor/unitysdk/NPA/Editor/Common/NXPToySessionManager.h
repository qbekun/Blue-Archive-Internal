#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPToySessionManager; }
namespace NPA::Editor { class NXPToySession; }
namespace NPA::Editor::Network { class NXPAuthRequestCredential; }
namespace NPA::Editor::Common { class NXPUpdatedUser; }

#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_GET_SESSION_OFFSET UNITYSDK_OFFSET(0x9C49C10)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGESESSION_OFFSET UNITYSDK_OFFSET(0x9C49C20)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGESESSION_OFFSET UNITYSDK_OFFSET(0x9C49CC0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONUPDATESESSION_OFFSET UNITYSDK_OFFSET(0x9C49D60)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONUPDATESESSION_OFFSET UNITYSDK_OFFSET(0x9C49E00)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGEGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C49EA0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGEGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C49F40)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGESESSION_OFFSET UNITYSDK_OFFSET(0x9C44E90)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGESESSION_OFFSET UNITYSDK_OFFSET(0x9C49FE0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONUPDATESESSION_OFFSET UNITYSDK_OFFSET(0x9C44FA0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONUPDATESESSION_OFFSET UNITYSDK_OFFSET(0x9C4A080)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGEGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C38660)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGEGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C4A120)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C4A1C0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C383D0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVESESSION_OFFSET UNITYSDK_OFFSET(0x9C4A280)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_LOADSESSION_OFFSET UNITYSDK_OFFSET(0x9C4A230)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_HASVALIDSESSION_OFFSET UNITYSDK_OFFSET(0x9C4A300)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_DISPATCHSESSIONCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x9C4A370)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_DISPATCHSESSIONUPDATEEVENT_OFFSET UNITYSDK_OFFSET(0x9C4A390)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_DISPATCHGAMETOKENCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x9C4A3B0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ONUPDATEUSER_OFFSET UNITYSDK_OFFSET(0x9C4A3D0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_GETAUTHREQUESTCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C4A820)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ONUPDATECREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C4A9D0)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ONDISCARDCREDENTIAL_OFFSET UNITYSDK_OFFSET(0x9C4AB10)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVEPLAYNOWSESSION_OFFSET UNITYSDK_OFFSET(0x9C4AC40)
#define NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C4AC50)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPToySessionManager_TypeDefinitionIndex = 26861;

	class NXPToySessionManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Common::NXPToySessionManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::NXPToySession* session; // 0x10
		::NPA::Editor::Network::NXPAuthRequestCredential* authRequestCredential; // 0x18
		Il2CppObject* onChangeSession; // 0x20
		Il2CppObject* onUpdateSession; // 0x28
		Il2CppObject* onChangeGameToken; // 0x30

		::NPA::Editor::NXPToySession* get_Session()
		{
			return (return (::NPA::Editor::NXPToySession*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_GET_SESSION_OFFSET))(nullptr);
		}

		::System::Void add_onChangeSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChangeSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void add_onUpdateSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONUPDATESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onUpdateSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONUPDATESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void add_onChangeGameToken(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGEGAMETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChangeGameToken(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGEGAMETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnChangeSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnChangeSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnUpdateSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONUPDATESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnUpdateSession(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONUPDATESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnChangeGameToken(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ADD_ONCHANGEGAMETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnChangeGameToken(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVE_ONCHANGEGAMETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Common::NXPToySessionManager* get_Instance()
		{
			return (return (::NPA::Editor::Common::NXPToySessionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void RemoveSession(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVESESSION_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::NXPToySession* LoadSession()
		{
			return (return (::NPA::Editor::NXPToySession*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_LOADSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HasValidSession()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_HASVALIDSESSION_OFFSET))(nullptr);
		}

		::System::Void DispatchSessionChangeEvent(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_DISPATCHSESSIONCHANGEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchSessionUpdateEvent(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_DISPATCHSESSIONUPDATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchGameTokenChangeEvent(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_DISPATCHGAMETOKENCHANGEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdateUser(::NPA::Editor::Common::NXPUpdatedUser* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPUpdatedUser*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ONUPDATEUSER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Network::NXPAuthRequestCredential* GetAuthRequestCredential()
		{
			return (return (::NPA::Editor::Network::NXPAuthRequestCredential*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_GETAUTHREQUESTCREDENTIAL_OFFSET))(nullptr);
		}

		::System::Void OnUpdateCredential(::NPA::Editor::Network::NXPAuthRequestCredential* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPAuthRequestCredential*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ONUPDATECREDENTIAL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDiscardCredential()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_ONDISCARDCREDENTIAL_OFFSET))(nullptr);
		}

		::System::Void RemovePlayNowSession()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_REMOVEPLAYNOWSESSION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSESSIONMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

