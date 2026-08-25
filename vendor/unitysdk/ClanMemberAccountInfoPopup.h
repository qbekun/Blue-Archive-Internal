#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }

#define CLANMEMBERACCOUNTINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2335F40)
#define CLANMEMBERACCOUNTINFOPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2336140)
#define CLANMEMBERACCOUNTINFOPOPUP_GETCURRENTEXPSTRING_OFFSET UNITYSDK_OFFSET(0x2336170)
#define CLANMEMBERACCOUNTINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2336280)
#define CLANMEMBERACCOUNTINFOPOPUP_SETTHUMBNAILTEXTURE_OFFSET UNITYSDK_OFFSET(0x2336290)
#define CLANMEMBERACCOUNTINFOPOPUP_SETLVEXP_OFFSET UNITYSDK_OFFSET(0x2336390)
#define CLANMEMBERACCOUNTINFOPOPUP_ISMAXLEVELEXP_OFFSET UNITYSDK_OFFSET(0x2336490)
#define CLANMEMBERACCOUNTINFOPOPUP_CLANMEMBERMANAGEMENTPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x2336530)

	inline static constexpr unsigned int ClanMemberAccountInfoPopup_TypeDefinitionIndex = 4958;

	class ClanMemberAccountInfoPopup : public Il2CppObject
	{
	public:
		UITexture* thumbnail; // 0x18
		UILabel* nickname; // 0x20
		UILabel* lv; // 0x28
		UILabel* charcterNum; // 0x30
		UILabel* comment; // 0x38
		UILabel* arenaSeasonBestRanking; // 0x40
		UILabel* arenaCurrentRanking; // 0x48
		::UnityEngine::GameObject* levelExpMax; // 0x50
		UITexture* arenaRankIcon; // 0x58
		MXButton* cancelButton; // 0x60
		MXButton* confirmButton; // 0x68

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::String* GetCurrentExpString(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_GETCURRENTEXPSTRING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetThumbnailTexture(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_SETTHUMBNAILTEXTURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLvExp(::MX::GameLogic::DBModel::ClanMemberDB* arg, ::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_SETLVEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMaxLevelExp(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_ISMAXLEVELEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClanMemberManagementPopupOpen(::MX::GameLogic::DBModel::ClanMemberDB* arg, ::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERACCOUNTINFOPOPUP_CLANMEMBERMANAGEMENTPOPUPOPEN_OFFSET))(arg, arg2, nullptr);
		}

	};

