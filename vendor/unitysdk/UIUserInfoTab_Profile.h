#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIEmblemParcel;
class MXButton;
class UIPopup_Block;
namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define UIUSERINFOTAB_PROFILE_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x257DC90)
#define UIUSERINFOTAB_PROFILE_ONCLICKBLOCK_OFFSET UNITYSDK_OFFSET(0x257DCA0)
#define UIUSERINFOTAB_PROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x257DD90)
#define UIUSERINFOTAB_PROFILE_SETMYDATA_OFFSET UNITYSDK_OFFSET(0x257DDA0)
#define UIUSERINFOTAB_PROFILE_AWAKE_OFFSET UNITYSDK_OFFSET(0x257E340)
#define UIUSERINFOTAB_PROFILE_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x257E4B0)
#define UIUSERINFOTAB_PROFILE__ONCLICKBLOCK_B__17_0_OFFSET UNITYSDK_OFFSET(0x257E4C0)
#define UIUSERINFOTAB_PROFILE_SETDATA_OFFSET UNITYSDK_OFFSET(0x257E540)

	inline static constexpr unsigned int UIUserInfoTab_Profile_TypeDefinitionIndex = 6203;

	class UIUserInfoTab_Profile : public Il2CppObject
	{
	public:
		UITexture* representativeThumbnail; // 0x18
		UILabel* userName; // 0x20
		UILabel* friendCode; // 0x28
		UILabel* levelExp; // 0x30
		::UnityEngine::GameObject* maxLevel; // 0x38
		UILabel* clanName; // 0x40
		UILabel* friendCount; // 0x48
		UILabel* comment; // 0x50
		UIEmblemParcel* emblemParcel; // 0x58
		MXButton* blockButton; // 0x60
		Il2CppObject* _accountId_k__BackingField; // 0x68

		Il2CppObject* get_accountId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void OnClickBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE_ONCLICKBLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMyData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE_SETMYDATA_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_accountId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBlock_b__17_0(UIPopup_Block* arg)
		{
			((::System::Void(*)(UIPopup_Block*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE__ONCLICKBLOCK_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg, ::MX::GameLogic::DBModel::AccountAttachmentDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_PROFILE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

