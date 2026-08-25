#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UITexture;
class BuffInfo;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace MX::Campaign { class HexaUnit; }

#define UICAMPAIGNSQUADINFO_ONCLICKBUFFSHOWALL_OFFSET UNITYSDK_OFFSET(0x22A91C0)
#define UICAMPAIGNSQUADINFO_REFFRESH_OFFSET UNITYSDK_OFFSET(0x22A9550)
#define UICAMPAIGNSQUADINFO_ONCLICKCHANGESQUAD_OFFSET UNITYSDK_OFFSET(0x22A9F10)
#define UICAMPAIGNSQUADINFO_SET_ISUNITOPEN_OFFSET UNITYSDK_OFFSET(0x22AA2A0)
#define UICAMPAIGNSQUADINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x22AA2B0)
#define UICAMPAIGNSQUADINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x22AA580)
#define UICAMPAIGNSQUADINFO_GET_ISUNITOPEN_OFFSET UNITYSDK_OFFSET(0x22AA590)
#define UICAMPAIGNSQUADINFO_REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0x22A9D00)
#define UICAMPAIGNSQUADINFO_BUFFTOGGLE_OFFSET UNITYSDK_OFFSET(0x22A91D0)
#define UICAMPAIGNSQUADINFO_CHANGESQUADANI_OFFSET UNITYSDK_OFFSET(0x22AA070)
#define UICAMPAIGNSQUADINFO_REFRESHSELECTSQUADUI_OFFSET UNITYSDK_OFFSET(0x22A99B0)

	inline static constexpr unsigned int UICampaignSquadInfo_TypeDefinitionIndex = 4753;

	class UICampaignSquadInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* MainSlots; // 0x18
		::Il2CppArray<::System::Object*>* SupportSlots; // 0x20
		MXButton* UnitOpen; // 0x28
		MXButton* UnitClose; // 0x30
		MXButton* ChangeSquad; // 0x38
		MXButton* SupplyInfo; // 0x40
		MXButton* FormationInfo; // 0x48
		MXButton* BuffIcon; // 0x50
		UILabel* EchelonNumber; // 0x58
		UILabel* Formation; // 0x60
		UILabel* Supply; // 0x68
		UITexture* FormationIcon; // 0x70
		BuffInfo* BuffPopup; // 0x78
		::Il2CppArray<::System::Object*>* BuffList; // 0x80
		::UnityEngine::GameObject* BuffWidthSizeTarget; // 0x88
		MXButton* BuffShowAll; // 0x90
		::UnityEngine::GameObject* BuffOpen; // 0x98
		::UnityEngine::GameObject* BuffClose; // 0xA0
		::System::Boolean buffShowAll; // 0xA8
		::System::Int32 buffCount; // 0xAC
		::System::String* EchelonChangeAni; // 0x0
		::System::Boolean _IsUnitOpen_k__BackingField; // 0xB0
		::UnityEngine::Animation* squadInfoAnimation; // 0xB8

		::System::Void OnClickBuffShowAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_ONCLICKBUFFSHOWALL_OFFSET))(nullptr);
		}

		::System::Void Reffresh(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_REFFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChangeSquad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_ONCLICKCHANGESQUAD_OFFSET))(nullptr);
		}

		::System::Void set_IsUnitOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_SET_ISUNITOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnitOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_GET_ISUNITOPEN_OFFSET))(nullptr);
		}

		::System::Void RefreshBuff(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_REFRESHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void BuffToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_BUFFTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeSquadAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_CHANGESQUADANI_OFFSET))(nullptr);
		}

		::System::Void RefreshSelectSquadUI(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNSQUADINFO_REFRESHSELECTSQUADUI_OFFSET))(arg, nullptr);
		}

	};

