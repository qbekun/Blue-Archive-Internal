#pragma once
#include "unitysdk.h"

class UIFriendsTabContoller;
class UIFriendsListScrollView;
class MXToggle;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Coroutine; }
class FriendTab;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIFRIENDSMANAGEMENT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x25735C0)
#define UIFRIENDSMANAGEMENT_REFRESHBUTTONTIMER_OFFSET UNITYSDK_OFFSET(0x25737F0)
#define UIFRIENDSMANAGEMENT_ONBACK_OFFSET UNITYSDK_OFFSET(0x2573880)
#define UIFRIENDSMANAGEMENT_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x2573970)
#define UIFRIENDSMANAGEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x25739A0)
#define UIFRIENDSMANAGEMENT_HANDLEFRIENDGETIDCARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2573D60)
#define UIFRIENDSMANAGEMENT_ONSENDSEARCHREQUEST_OFFSET UNITYSDK_OFFSET(0x2570C70)
#define UIFRIENDSMANAGEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2573E60)
#define UIFRIENDSMANAGEMENT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2573E70)
#define UIFRIENDSMANAGEMENT_ONCLICKIDCARD_OFFSET UNITYSDK_OFFSET(0x2573FF0)
#define UIFRIENDSMANAGEMENT_ONAUTOCHANGED_OFFSET UNITYSDK_OFFSET(0x2574060)
#define UIFRIENDSMANAGEMENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2574280)
#define UIFRIENDSMANAGEMENT_CLEARSEARCHRESULT_OFFSET UNITYSDK_OFFSET(0x2573F60)
#define UIFRIENDSMANAGEMENT_GET_SEARCHREFRESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x25736E0)

	inline static constexpr unsigned int UIFriendsManagement_TypeDefinitionIndex = 6163;

	class UIFriendsManagement : public Il2CppObject
	{
	public:
		UIFriendsTabContoller* FriendTabController; // 0xD8
		UIFriendsListScrollView* FriendList; // 0xE0
		MXToggle* AutoAcceptFriendReq; // 0xE8
		::UnityEngine::GameObject* searchFilterPopup; // 0xF0
		::UnityEngine::GameObject* searchCodePopup; // 0xF8
		MXButton* idCardButton; // 0x100
		::UnityEngine::MeshCollider* _SearchRefreshCollider; // 0x108
		::UnityEngine::Coroutine* _SearchButtonTimer; // 0x110

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RefreshButtonTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_REFRESHBUTTONTIMER_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, FriendTab* arg2)
		{
			((::System::Void(*)(::System::Boolean, FriendTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleFriendGetIdCardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_HANDLEFRIENDGETIDCARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSendSearchRequest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONSENDSEARCHREQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickIdCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONCLICKIDCARD_OFFSET))(nullptr);
		}

		::System::Void OnAutoChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONAUTOCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ClearSearchResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_CLEARSEARCHRESULT_OFFSET))(nullptr);
		}

		::UnityEngine::MeshCollider* get_SearchRefreshCollider()
		{
			return ((::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSMANAGEMENT_GET_SEARCHREFRESHCOLLIDER_OFFSET))(nullptr);
		}

	};

