#pragma once
#include "unitysdk.h"

class UIInput;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class ClanChatEmojiPopup;
namespace UnityEngine { class Transform; }
class UIClanScriptChatUnit;
namespace Assets::_MX::Program::Scripts::Network::IRC { class IrcMessage; }

#define UICLANSCRIPTCHATPOPULATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x233F620)
#define UICLANSCRIPTCHATPOPULATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x233F660)
#define UICLANSCRIPTCHATPOPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x233FB90)
#define UICLANSCRIPTCHATPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x233FC30)
#define UICLANSCRIPTCHATPOPULATOR_ONCHANGECHATINPUT_OFFSET UNITYSDK_OFFSET(0x233FC90)
#define UICLANSCRIPTCHATPOPULATOR_CANREPOPULATE_OFFSET UNITYSDK_OFFSET(0x233FD60)
#define UICLANSCRIPTCHATPOPULATOR_INSERTITEMDATAS_OFFSET UNITYSDK_OFFSET(0x233B9B0)
#define UICLANSCRIPTCHATPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x23403D0)
#define UICLANSCRIPTCHATPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x2340870)
#define UICLANSCRIPTCHATPOPULATOR_INITLISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x23408D0)
#define UICLANSCRIPTCHATPOPULATOR_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x2340B40)
#define UICLANSCRIPTCHATPOPULATOR_ONSENDCHAT_OFFSET UNITYSDK_OFFSET(0x23411F0)
#define UICLANSCRIPTCHATPOPULATOR_CHATCLOSE_OFFSET UNITYSDK_OFFSET(0x233D870)
#define UICLANSCRIPTCHATPOPULATOR_PREVIOUSCHATLOAD_OFFSET UNITYSDK_OFFSET(0x233FE40)
#define UICLANSCRIPTCHATPOPULATOR_ONSENDCHATENTERKEY_OFFSET UNITYSDK_OFFSET(0x2341430)
#define UICLANSCRIPTCHATPOPULATOR_ADDITEMDATA_OFFSET UNITYSDK_OFFSET(0x233BB50)
#define UICLANSCRIPTCHATPOPULATOR_CHECKUNITSANDREPOPULATE_OFFSET UNITYSDK_OFFSET(0x2341450)
#define UICLANSCRIPTCHATPOPULATOR_GET_DIRECTIONMODIFIER_OFFSET UNITYSDK_OFFSET(0x2341690)
#define UICLANSCRIPTCHATPOPULATOR_GETHEIGHTFORINIT2_OFFSET UNITYSDK_OFFSET(0x2341360)
#define UICLANSCRIPTCHATPOPULATOR_ONDRAGFINISHED_OFFSET UNITYSDK_OFFSET(0x23416E0)
#define UICLANSCRIPTCHATPOPULATOR_GETHEIGHTFORINIT_OFFSET UNITYSDK_OFFSET(0x2340A90)
#define UICLANSCRIPTCHATPOPULATOR_ONEMOJIPOPUP_OFFSET UNITYSDK_OFFSET(0x2341700)

	inline static constexpr unsigned int UIClanScriptChatPopulator_TypeDefinitionIndex = 4975;

	class UIClanScriptChatPopulator : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::NoSuchAlgorithmException
	{
	public:
		UIInput* chatInput; // 0x58
		UILabel* chatInputPlaceholder; // 0x60
		MXButton* emojiPopupButton; // 0x68
		::UnityEngine::GameObject* emojiPopupDisableObject; // 0x70
		MXButton* sendChatButton; // 0x78
		ClanChatEmojiPopup* clanChatEmojiPopup; // 0x80
		Il2CppObject* ircMessages; // 0x88
		::System::Boolean enableScrollViewResetPositioncheck; // 0x90
		::System::Boolean requestChatLog; // 0x91

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void OnChangeChatInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_ONCHANGECHATINPUT_OFFSET))(nullptr);
		}

		::System::Boolean CanRepopulate(::System::Single arg, ::System::Int32 arg2, UIClanScriptChatUnit* arg3, UIClanScriptChatUnit* arg4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Int32, UIClanScriptChatUnit*, UIClanScriptChatUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_CANREPOPULATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InsertItemDatas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_INSERTITEMDATAS_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareListItemWithIndex(UIClanScriptChatUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UIClanScriptChatUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_PREPARELISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void InitListItemWithIndex(UIClanScriptChatUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UIClanScriptChatUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_INITLISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetItemData(UIClanScriptChatUnit* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIClanScriptChatUnit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_SETITEMDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSendChat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_ONSENDCHAT_OFFSET))(nullptr);
		}

		::System::Void ChatClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_CHATCLOSE_OFFSET))(nullptr);
		}

		::System::Void PreviousChatLoad(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_PREVIOUSCHATLOAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSendChatEnterKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_ONSENDCHATENTERKEY_OFFSET))(nullptr);
		}

		::System::Void AddItemData(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::IRC::IrcMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_ADDITEMDATA_OFFSET))(arg, nullptr);
		}

		::System::Void CheckUnitsAndRepopulate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_CHECKUNITSANDREPOPULATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DirectionModifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_GET_DIRECTIONMODIFIER_OFFSET))(nullptr);
		}

		::System::Single GetHeightForInit2(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_GETHEIGHTFORINIT2_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_ONDRAGFINISHED_OFFSET))(nullptr);
		}

		::System::Single GetHeightForInit(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_GETHEIGHTFORINIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEmojiPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSCRIPTCHATPOPULATOR_ONEMOJIPOPUP_OFFSET))(nullptr);
		}

	};

