#pragma once
#include "unitysdk.h"

class DOB;
class UISlider;
class UILabel;
class UIEventTrigger;
namespace UnityEngine { class Coroutine; }
class PatchGroupType;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPATCHDOWNLOAD_GET_ISBACKGROUNDPATCH_OFFSET UNITYSDK_OFFSET(0xC971E0)
#define UIPATCHDOWNLOAD_PATCHFORPROLOGUE_OFFSET UNITYSDK_OFFSET(0xC971F0)
#define UIPATCHDOWNLOAD_INITCATALOG_OFFSET UNITYSDK_OFFSET(0xC97260)
#define UIPATCHDOWNLOAD_SET_DOWNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xC972C0)
#define UIPATCHDOWNLOAD_GET_ISFIRSTINSTALL_OFFSET UNITYSDK_OFFSET(0xC972E0)
#define UIPATCHDOWNLOAD_SHOWINTERNETNOTREACHABLEERRORPOPUP_OFFSET UNITYSDK_OFFSET(0xC972F0)
#define UIPATCHDOWNLOAD_FINALIZEPATCH_OFFSET UNITYSDK_OFFSET(0xC97560)
#define UIPATCHDOWNLOAD_GET_WAITFORDOWNLOADALLCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC97720)
#define UIPATCHDOWNLOAD_ONCLICKTOUCHTOSTART_OFFSET UNITYSDK_OFFSET(0xC97730)
#define UIPATCHDOWNLOAD_OPENDOWNLOADCHECKPOPUP_OFFSET UNITYSDK_OFFSET(0xC97870)
#define UIPATCHDOWNLOAD_ENDBACKGROUNDPATCH_OFFSET UNITYSDK_OFFSET(0xC97DF0)
#define UIPATCHDOWNLOAD_OPENPRELOADDOWNLOADCHECKPOPUP_OFFSET UNITYSDK_OFFSET(0xC97890)
#define UIPATCHDOWNLOAD_SETVERIFYSLIDER_OFFSET UNITYSDK_OFFSET(0xC98280)
#define UIPATCHDOWNLOAD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC984B0)
#define UIPATCHDOWNLOAD_GET_DOWNLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0xC987C0)
#define UIPATCHDOWNLOAD_STARTBGM_OFFSET UNITYSDK_OFFSET(0xC987D0)
#define UIPATCHDOWNLOAD_AWAKE_OFFSET UNITYSDK_OFFSET(0xC98840)
#define UIPATCHDOWNLOAD_BGMPLAY_OFFSET UNITYSDK_OFFSET(0xC98110)
#define UIPATCHDOWNLOAD_HANDLECACHECLEARMESSAGE_OFFSET UNITYSDK_OFFSET(0xC98A00)
#define UIPATCHDOWNLOAD_PATCHFORINGAME_OFFSET UNITYSDK_OFFSET(0xC97800)
#define UIPATCHDOWNLOAD_HANDLEPATCHSTATUSCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xC98B10)
#define UIPATCHDOWNLOAD_OPENGAMEDATADOWNLOADCHECKPOPUP_OFFSET UNITYSDK_OFFSET(0xC97A80)
#define UIPATCHDOWNLOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0xC98C90)
#define UIPATCHDOWNLOAD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC98D00)
#define UIPATCHDOWNLOAD_SHOWSERVERCONFIGNOTRECEIVEDERRORPOPUP_OFFSET UNITYSDK_OFFSET(0xC98D30)
#define UIPATCHDOWNLOAD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xC98F00)
#define UIPATCHDOWNLOAD_SET_ISBACKGROUNDPATCH_OFFSET UNITYSDK_OFFSET(0xC99190)
#define UIPATCHDOWNLOAD_HANDLEDATAPROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0xC991A0)
#define UIPATCHDOWNLOAD__DOWNLOADBUNDLES_B__43_0_OFFSET UNITYSDK_OFFSET(0xC99230)
#define UIPATCHDOWNLOAD_ONOPENED_OFFSET UNITYSDK_OFFSET(0xC99240)
#define UIPATCHDOWNLOAD_PRECHECKFORENTERGAME_OFFSET UNITYSDK_OFFSET(0xC99430)
#define UIPATCHDOWNLOAD_SET_WAITFORDOWNLOADALLCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC994B0)
#define UIPATCHDOWNLOAD_CLEAR_OFFSET UNITYSDK_OFFSET(0xC98F20)
#define UIPATCHDOWNLOAD_HANDLEDOWNLOADPROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0xC994C0)
#define UIPATCHDOWNLOAD_GETDOWNLOADSIZETEXT_OFFSET UNITYSDK_OFFSET(0xC99B30)
#define UIPATCHDOWNLOAD_SHOWDEBUGMESSAGE_OFFSET UNITYSDK_OFFSET(0xC99BF0)
#define UIPATCHDOWNLOAD_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xC99C00)
#define UIPATCHDOWNLOAD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC99C10)
#define UIPATCHDOWNLOAD_GET_HASBGM_OFFSET UNITYSDK_OFFSET(0xC99F00)
#define UIPATCHDOWNLOAD_SHOWDOWNLOADFAILEDPOPUP_OFFSET UNITYSDK_OFFSET(0xC99F10)
#define UIPATCHDOWNLOAD_DOWNLOADBUNDLES_OFFSET UNITYSDK_OFFSET(0xC9A0D0)

	inline static constexpr unsigned int UIPatchDownload_TypeDefinitionIndex = 9122;

	class UIPatchDownload : public Il2CppObject
	{
	public:
		::System::Boolean _isFirstInstall; // 0xD8
		::System::Boolean _WaitForDownloadAllComplete_k__BackingField; // 0xD9
		::System::Boolean _IsBackgroundPatch_k__BackingField; // 0xDA
		::System::Action* _DownloadCallback_k__BackingField; // 0xE0
		::System::Single KB; // 0x0
		::System::Single MB; // 0x0
		DOB* DOB; // 0xE8
		UISlider* patchSlider; // 0xF0
		UILabel* patchSizeLabel; // 0xF8
		UILabel* progressLabel; // 0x100
		UILabel* patchDescriptionLabel; // 0x108
		UIEventTrigger* TouchToStartBtn; // 0x110
		UISlider* patchSubSlider; // 0x118
		Il2CppObject* progressUIList; // 0x120
		::UnityEngine::Coroutine* _downloadCoroutine; // 0x128

		::System::Boolean get_IsBackgroundPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_GET_ISBACKGROUNDPATCH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PatchForPrologue()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_PATCHFORPROLOGUE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitCatalog()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_INITCATALOG_OFFSET))(nullptr);
		}

		::System::Void set_DownloadCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SET_DOWNLOADCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFirstInstall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_GET_ISFIRSTINSTALL_OFFSET))(nullptr);
		}

		::System::Void ShowInternetNotReachableErrorPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SHOWINTERNETNOTREACHABLEERRORPOPUP_OFFSET))(nullptr);
		}

		::System::Void FinalizePatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_FINALIZEPATCH_OFFSET))(nullptr);
		}

		::System::Boolean get_WaitForDownloadAllComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_GET_WAITFORDOWNLOADALLCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void OnClickTouchToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_ONCLICKTOUCHTOSTART_OFFSET))(nullptr);
		}

		::System::Void OpenDownloadCheckPopup(PatchGroupType* arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(PatchGroupType*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_OPENDOWNLOADCHECKPOPUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EndBackgroundPatch(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_ENDBACKGROUNDPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void OpenPreloadDownloadCheckPopup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_OPENPRELOADDOWNLOADCHECKPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetVerifySlider(PatchGroupType* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(PatchGroupType*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SETVERIFYSLIDER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Action* get_DownloadCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_GET_DOWNLOADCALLBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* StartBGM()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_STARTBGM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void BGMPlay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_BGMPLAY_OFFSET))(nullptr);
		}

		::System::Boolean HandleCacheClearMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_HANDLECACHECLEARMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PatchForInGame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_PATCHFORINGAME_OFFSET))(nullptr);
		}

		::System::Boolean HandlePatchStatusChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_HANDLEPATCHSTATUSCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenGameDataDownloadCheckPopup(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_OPENGAMEDATADOWNLOADCHECKPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ShowServerConfigNotReceivedErrorPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SHOWSERVERCONFIGNOTRECEIVEDERRORPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void set_IsBackgroundPatch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SET_ISBACKGROUNDPATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleDataProgressMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_HANDLEDATAPROGRESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _DownloadBundles_b__43_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD__DOWNLOADBUNDLES_B__43_0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PreCheckForEnterGame(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_PRECHECKFORENTERGAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_WaitForDownloadAllComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SET_WAITFORDOWNLOADALLCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean HandleDownloadProgressMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_HANDLEDOWNLOADPROGRESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* GetDownloadSizeText(::System::Int64 arg)
		{
			return ((::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_GETDOWNLOADSIZETEXT_OFFSET))(arg, nullptr);
		}

		::System::Void ShowDebugMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SHOWDEBUGMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_GET_HASBGM_OFFSET))(nullptr);
		}

		::System::Void ShowDownloadFailedPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_SHOWDOWNLOADFAILEDPOPUP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DownloadBundles(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPATCHDOWNLOAD_DOWNLOADBUNDLES_OFFSET))(arg, nullptr);
		}

	};

