#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Data { class EventContentDiceRaceProbInfo; }

#define CONFIRMDICEITEM_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x23D2400)
#define CONFIRMDICEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x23D2710)
#define CONFIRMDICEITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x23D1F20)
#define CONFIRMDICEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D2840)
#define CONFIRMDICEITEM_REFRESHSELECTITEM_OFFSET UNITYSDK_OFFSET(0x23D21A0)

	inline static constexpr unsigned int ConfirmDiceItem_TypeDefinitionIndex = 5312;

	class ConfirmDiceItem : public Il2CppObject
	{
	public:
		MXButton* selectButton; // 0x18
		::UnityEngine::GameObject* disableButton; // 0x20
		UILabel* selectAmountLabel; // 0x28
		UILabel* disableAmountLabel; // 0x30
		Il2CppObject* diceConfirmDiceTexs; // 0x38
		::MX::Data::EventContentDiceRaceProbInfo* diceRaceProbInfo; // 0x40

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEITEM_ONCLICKSELECT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentDiceRaceProbInfo* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::EventContentDiceRaceProbInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEITEM_SETDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshSelectItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEITEM_REFRESHSELECTITEM_OFFSET))(nullptr);
		}

	};

