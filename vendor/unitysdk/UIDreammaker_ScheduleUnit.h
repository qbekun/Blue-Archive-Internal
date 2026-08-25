#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class UIGrid;
class MXButton;
namespace MX::Data::Excel { class MiniGameDreamInfoExcel; }
namespace MX::Data { class MiniGameDreamMakerScheduleExcelInfo; }
class UIPopup_DreammakerScheduleInfo;

#define UIDREAMMAKER_SCHEDULEUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0xBA27F0)
#define UIDREAMMAKER_SCHEDULEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA2910)
#define UIDREAMMAKER_SCHEDULEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBA2920)
#define UIDREAMMAKER_SCHEDULEUNIT__OPENSCHEDULEPOPUP_B__8_0_OFFSET UNITYSDK_OFFSET(0xBA2E50)
#define UIDREAMMAKER_SCHEDULEUNIT_OPENSCHEDULEPOPUP_OFFSET UNITYSDK_OFFSET(0xBA2FA0)

	inline static constexpr unsigned int UIDreammaker_ScheduleUnit_TypeDefinitionIndex = 611;

	class UIDreammaker_ScheduleUnit : public Il2CppObject
	{
	public:
		UITexture* iconTexture; // 0x18
		UILabel* activityTextLabel; // 0x20
		UIGrid* parameterGrid; // 0x28
		Il2CppObject* parameterIconList; // 0x30
		MXButton* openScheduleButton; // 0x38
		::MX::Data::Excel::MiniGameDreamInfoExcel* infoExcel; // 0x40
		::MX::Data::MiniGameDreamMakerScheduleExcelInfo* scheduleExcelInfo; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::MiniGameDreamInfoExcel* arg, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamInfoExcel*, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEUNIT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OpenSchedulePopup_b__8_0(UIPopup_DreammakerScheduleInfo* arg)
		{
			((::System::Void(*)(UIPopup_DreammakerScheduleInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEUNIT__OPENSCHEDULEPOPUP_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSchedulePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_SCHEDULEUNIT_OPENSCHEDULEPOPUP_OFFSET))(nullptr);
		}

	};

