#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UISlider;
class UISprite;
namespace MX::Data { class MiniGameDreamData; }
namespace MX::GameLogic::DBModel { class MiniGameDreamMakerInfoDB; }
namespace MX::Data::Excel { class MiniGameDreamInfoExcel; }

#define UIDREAMMAKERSTATINFOUI_ONCLICKOPENREWARDLIST_OFFSET UNITYSDK_OFFSET(0xB9A870)
#define UIDREAMMAKERSTATINFOUI_SETUI_OFFSET UNITYSDK_OFFSET(0xB944C0)
#define UIDREAMMAKERSTATINFOUI_AWAKE_OFFSET UNITYSDK_OFFSET(0xB9A9E0)
#define UIDREAMMAKERSTATINFOUI_.CTOR_OFFSET UNITYSDK_OFFSET(0xB9AB00)

	inline static constexpr unsigned int UIDreammakerStatInfoUI_TypeDefinitionIndex = 585;

	class UIDreammakerStatInfoUI : public Il2CppObject
	{
	public:
		UILabel* ddayLabel; // 0x18
		UILabel* turnLabel; // 0x20
		Il2CppObject* statParameterLabels; // 0x28
		Il2CppObject* statValueLabels; // 0x30
		Il2CppObject* statValueMaxLabels; // 0x38
		Il2CppObject* statValueMaxSprites; // 0x40
		Il2CppObject* widgetsPositionSetters; // 0x48
		MXButton* rewardListPopupButton; // 0x50
		UILabel* eventPointGaugeLabel; // 0x58
		UISlider* eventPointGaugeSlider; // 0x60
		UISprite* eventPointIcon; // 0x68
		::System::Int64 eventContentId; // 0x70
		::MX::Data::MiniGameDreamData* dreamData; // 0x78

		::System::Void OnClickOpenRewardList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSTATINFOUI_ONCLICKOPENREWARDLIST_OFFSET))(nullptr);
		}

		::System::Void SetUI(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB* arg, Il2CppObject* arg2, ::MX::Data::Excel::MiniGameDreamInfoExcel* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameDreamMakerInfoDB*, Il2CppObject*, ::MX::Data::Excel::MiniGameDreamInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSTATINFOUI_SETUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSTATINFOUI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKERSTATINFOUI_.CTOR_OFFSET))(nullptr);
		}

	};

