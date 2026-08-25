#pragma once
#include "unitysdk.h"

class UINonEquipmentInfo;
class UINonEquipmentCard;
class UILabel;
class MXButton;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIGACHABOXTIERUP_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0x258AC50)
#define UIGACHABOXTIERUP_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x258AD50)
#define UIGACHABOXTIERUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x258AD60)
#define UIGACHABOXTIERUP_ONCLICKPLUS_OFFSET UNITYSDK_OFFSET(0x258AD70)
#define UIGACHABOXTIERUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x258AD90)
#define UIGACHABOXTIERUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x258B230)
#define UIGACHABOXTIERUP_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x258B340)
#define UIGACHABOXTIERUP_ONCLICKMINUS_OFFSET UNITYSDK_OFFSET(0x258B350)
#define UIGACHABOXTIERUP_ONCLICKTIERUP_OFFSET UNITYSDK_OFFSET(0x258B370)
#define UIGACHABOXTIERUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x258B960)
#define UIGACHABOXTIERUP_SETCOUNTBUTTONS_OFFSET UNITYSDK_OFFSET(0x258AC70)
#define UIGACHABOXTIERUP_HANDLETASKRESPONSE_OFFSET UNITYSDK_OFFSET(0x258BAC0)
#define UIGACHABOXTIERUP_SENDTIERUPREQ_OFFSET UNITYSDK_OFFSET(0x258B950)
#define UIGACHABOXTIERUP_HANDLEENDREWARDUI_OFFSET UNITYSDK_OFFSET(0x258BAD0)
#define UIGACHABOXTIERUP_SET_OFFSET UNITYSDK_OFFSET(0x258BBC0)

	inline static constexpr unsigned int UIGachaBoxTierUp_TypeDefinitionIndex = 6237;

	class UIGachaBoxTierUp : public Il2CppObject
	{
	public:
		UINonEquipmentInfo* NonEquipmentInfo; // 0xD8
		UINonEquipmentCard* NeedMaterialCard; // 0xE0
		UINonEquipmentCard* ResultMaterialCard; // 0xE8
		UILabel* CountLabel; // 0xF0
		MXButton* PlusButton; // 0xF8
		MXButton* MinusButton; // 0x100
		MXButton* MaxButton; // 0x108
		MXButton* BackButton; // 0x110
		UILabel* CostLabel; // 0x118
		MXButton* TierUpButton; // 0x120
		::System::Int64 _ServerId_k__BackingField; // 0x128
		::System::Int32 maxCount; // 0x130
		::System::Int32 curCount; // 0x134
		::System::Int32 cost; // 0x138

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickPlus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_ONCLICKPLUS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMinus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_ONCLICKMINUS_OFFSET))(nullptr);
		}

		::System::Void OnClickTierUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_ONCLICKTIERUP_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetCountButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_SETCOUNTBUTTONS_OFFSET))(nullptr);
		}

		::System::Boolean HandleTaskResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_HANDLETASKRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void SendTierUpReq()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_SENDTIERUPREQ_OFFSET))(nullptr);
		}

		::System::Boolean HandleEndRewardUI(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_HANDLEENDREWARDUI_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABOXTIERUP_SET_OFFSET))(arg, nullptr);
		}

	};

