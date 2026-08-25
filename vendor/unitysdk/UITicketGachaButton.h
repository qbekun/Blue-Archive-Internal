#pragma once
#include "unitysdk.h"

class UIGacha;
class UIGachaButtonInfo;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class GachaInfoObject;
class GachaCountType;

#define UITICKETGACHABUTTON_ONCLICKTICKETGACHABUTTON_OFFSET UNITYSDK_OFFSET(0xA7E310)
#define UITICKETGACHABUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7E350)
#define UITICKETGACHABUTTON_GET_INFO_OFFSET UNITYSDK_OFFSET(0xA7E360)
#define UITICKETGACHABUTTON_SETDATA_OFFSET UNITYSDK_OFFSET(0xA7E3E0)
#define UITICKETGACHABUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7EE40)
#define UITICKETGACHABUTTON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA7F0B0)

	inline static constexpr unsigned int UITicketGachaButton_TypeDefinitionIndex = 7890;

	class UITicketGachaButton : public Il2CppObject
	{
	public:
		UIGacha* gacha; // 0x18
		UIGachaButtonInfo* gachaButtonInfo; // 0x20
		MXButton* ticketGachaButton; // 0x28
		UILabel* ticketGachaTicketCostAmountLabel; // 0x30
		UILabel* ticketGachaTicketAmountLabel; // 0x38
		::UnityEngine::GameObject* ticketGachaTicketRemainDateRoot; // 0x40
		UILabel* ticketGachaTicketRemainDateLabel; // 0x48
		Il2CppObject* ticketImages; // 0x50
		MXButton* gachaDescButton; // 0x58
		::System::Int64 goodsId; // 0x60

		::System::Void OnClickTicketGachaButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTON_ONCLICKTICKETGACHABUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTON_.CTOR_OFFSET))(nullptr);
		}

		GachaInfoObject* get_info()
		{
			return ((GachaInfoObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTON_GET_INFO_OFFSET))(nullptr);
		}

		::System::Void SetData(GachaCountType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(GachaCountType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTON_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITICKETGACHABUTTON_INITIALIZE_OFFSET))(nullptr);
		}

	};

