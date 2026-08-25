#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIDreammaker_ParameterDisplay;
class UISprite;
class UIGrid;
class UIScrollView;
namespace MX::Data::Excel { class MiniGameDreamInfoExcel; }
namespace MX::Data { class MiniGameDreamMakerScheduleExcelInfo; }

#define UIPOPUP_DREAMMAKERSCHEDULEINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xBA31F0)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xBA3280)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_SETPARAMETERUI_OFFSET UNITYSDK_OFFSET(0xBA3370)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_SETREWARDS_OFFSET UNITYSDK_OFFSET(0xBA33A0)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0xBA2E90)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_ONCLICKSTART_OFFSET UNITYSDK_OFFSET(0xBA3A70)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBA3D80)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_SETACTIONBEFOREAFTERUI_OFFSET UNITYSDK_OFFSET(0xBA3DD0)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA45D0)
#define UIPOPUP_DREAMMAKERSCHEDULEINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xBA45E0)

	inline static constexpr unsigned int UIPopup_DreammakerScheduleInfo_TypeDefinitionIndex = 617;

	class UIPopup_DreammakerScheduleInfo : public Il2CppObject
	{
	public:
		MXButton* startButton; // 0xD8
		::UnityEngine::GameObject* startButtonDisabled; // 0xE0
		MXButton* closeButton; // 0xE8
		UILabel* activityTitle; // 0xF0
		UIDreammaker_ParameterDisplay* parameterDisplay; // 0xF8
		UISprite* eventMaterialSprite; // 0x100
		UILabel* materialCountNow; // 0x108
		UILabel* materialCountAfter; // 0x110
		UISprite* eventMaterialSpriteNotEnough; // 0x118
		UILabel* materialCountNowNotEnough; // 0x120
		UILabel* materialCountAfterNotEnough; // 0x128
		UILabel* actionCount; // 0x130
		UILabel* actionCountNotEnough; // 0x138
		UIGrid* rewardGrid; // 0x140
		UIScrollView* rewardListScrollView; // 0x148
		Il2CppObject* rewardParcels; // 0x150
		::System::Int64 eventContentId; // 0x158
		::System::Int64 scheduleGroupId; // 0x160
		::MX::Data::Excel::MiniGameDreamInfoExcel* infoExcel; // 0x168
		::MX::Data::MiniGameDreamMakerScheduleExcelInfo* scheduleExcelInfo; // 0x178

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void SetParameterUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_SETPARAMETERUI_OFFSET))(nullptr);
		}

		::System::Void SetRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_SETREWARDS_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::MiniGameDreamInfoExcel* arg, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamInfoExcel*, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_ONCLICKSTART_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetActionBeforeAfterUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_SETACTIONBEFOREAFTERUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKERSCHEDULEINFO_AWAKE_OFFSET))(nullptr);
		}

	};

