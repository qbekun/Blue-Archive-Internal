#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPCommunityManager; }
namespace NPA::Editor::Board { class NXPCommunityDialog; }
namespace NPA::Editor { class EntryType; }
namespace NPA::Community { class NXPToyCommunityLastAdminThread; }
namespace NPA { class NXPToyResult; }

#define NPA_EDITOR_NXPCOMMUNITYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9D3C670)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_INITCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x9D3C910)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_INITCOMMUNITYWITHURL_OFFSET UNITYSDK_OFFSET(0x9D3C960)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x9D3CF20)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWCOMMUNITY_OFFSET UNITYSDK_OFFSET(0x9D3CF40)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_CLOSECOMMUNITY_OFFSET UNITYSDK_OFFSET(0x9D3D7D0)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWCOMMINGSOONPOPUP_OFFSET UNITYSDK_OFFSET(0x9D3D800)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWUNAVAILABLEPOPUP_OFFSET UNITYSDK_OFFSET(0x9D3D8E0)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_OPENEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0x9D3D380)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYALARMINFO_OFFSET UNITYSDK_OFFSET(0x9D3D9D0)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYINFO_OFFSET UNITYSDK_OFFSET(0x9D3D600)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYID_OFFSET UNITYSDK_OFFSET(0x9D3DC10)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_GETMETAURL_OFFSET UNITYSDK_OFFSET(0x9D3DDF0)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYURL_OFFSET UNITYSDK_OFFSET(0x9D3CC90)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_SETLASTADMINTHREAD_OFFSET UNITYSDK_OFFSET(0x9D3E010)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_ISWITHINDAILYLIMIT_OFFSET UNITYSDK_OFFSET(0x9D3E230)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_ISNEWADMINTHREAD_OFFSET UNITYSDK_OFFSET(0x9D3E2A0)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3C890)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D3E2D0)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER__INITCOMMUNITYWITHURL_B__15_1_OFFSET UNITYSDK_OFFSET(0x9D3E4C0)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER__INITCOMMUNITYWITHURL_B__15_4_OFFSET UNITYSDK_OFFSET(0x9D3E810)
#define NPA_EDITOR_NXPCOMMUNITYMANAGER__INITCOMMUNITYWITHURL_B__15_2_OFFSET UNITYSDK_OFFSET(0x9D3EA10)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPCommunityManager_TypeDefinitionIndex = 26122;

	class NXPCommunityManager : public Il2CppObject
	{
	public:
		::System::String* KEY_MAINTENANCE_INFO_STARTDATE; // 0x0
		::System::String* KEY_MAINTENANCE_INFO_ENDDATE; // 0x8
		::System::String* KEY_MAINTENANCE_INFO_CONTENT; // 0x10
		::System::String* KEY_META_BOARD_ID; // 0x18
		::System::String* KEY_META_THREAD_ID; // 0x20
		::System::String* KEY_META_ENABLE_DAILY_LIMIT; // 0x28
		::System::String* KEY_META_CUSTOM_URL; // 0x30
		::NPA::Editor::NXPCommunityManager* instance; // 0x38
		::System::Object* syncRoot; // 0x40
		Il2CppObject* communityCloseCallback; // 0x10
		::NPA::Editor::Board::NXPCommunityDialog* communityDialog; // 0x18
		Il2CppObject* communityIDs; // 0x20

		::NPA::Editor::NXPCommunityManager* get_Instance()
		{
			return (return (::NPA::Editor::NXPCommunityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void InitCommunity(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_INITCOMMUNITY_OFFSET))(arg, nullptr);
		}

		::System::Void InitCommunityWithUrl(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_INITCOMMUNITYWITHURL_OFFSET))(str, arg, nullptr);
		}

		::System::Void ShowCommunity(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWCOMMUNITY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowCommunity(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWCOMMUNITY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CloseCommunity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_CLOSECOMMUNITY_OFFSET))(nullptr);
		}

		::System::Void ShowCommingSoonPopup(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWCOMMINGSOONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void ShowUnavailablePopup(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_SHOWUNAVAILABLEPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OpenExternalBrowser(Il2CppObject* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_OPENEXTERNALBROWSER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetCommunityAlarmInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYALARMINFO_OFFSET))(arg, nullptr);
		}

		::System::Void GetCommunityInfo(::NPA::Editor::EntryType* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::EntryType*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYINFO_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void GetCommunityId(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYID_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetMetaUrl(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_GETMETAURL_OFFSET))(arg, nullptr);
		}

		::System::String* GetCommunityUrl(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_GETCOMMUNITYURL_OFFSET))(arg, nullptr);
		}

		::System::Void SetLastAdminThread(::NPA::Community::NXPToyCommunityLastAdminThread* arg)
		{
			((::System::Void(*)(::NPA::Community::NXPToyCommunityLastAdminThread*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_SETLASTADMINTHREAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWithinDailyLimit(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_ISWITHINDAILYLIMIT_OFFSET))(str, nullptr);
		}

		::System::Boolean IsNewAdminThread(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_ISNEWADMINTHREAD_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _InitCommunityWithUrl_b__15_1(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER__INITCOMMUNITYWITHURL_B__15_1_OFFSET))(str, str, nullptr);
		}

		::System::Void _InitCommunityWithUrl_b__15_4(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER__INITCOMMUNITYWITHURL_B__15_4_OFFSET))(arg, nullptr);
		}

		::System::Void _InitCommunityWithUrl_b__15_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCOMMUNITYMANAGER__INITCOMMUNITYWITHURL_B__15_2_OFFSET))(nullptr);
		}

	};
}

