#pragma once
#include "unitysdk.h"

namespace MX::Data { class MiniGameDreamMakerScheduleResultExcelInfo; }

#define UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORSTART_OFFSET UNITYSDK_OFFSET(0xB9F200)
#define UIDREAMMAKER_PARAMETERDISPLAY_SKIPPARAMETERCHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0xB9FC40)
#define UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORSCHEDULEPROGRESS_OFFSET UNITYSDK_OFFSET(0xB9FE20)
#define UIDREAMMAKER_PARAMETERDISPLAY_PLAYPARAMETERCHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0xBA0870)
#define UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORSCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0xBA0AE0)
#define UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORDAYCLOSING_OFFSET UNITYSDK_OFFSET(0xB9B690)
#define UIDREAMMAKER_PARAMETERDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA16C0)

	inline static constexpr unsigned int UIDreammaker_ParameterDisplay_TypeDefinitionIndex = 602;

	class UIDreammaker_ParameterDisplay : public Il2CppObject
	{
	public:
		Il2CppObject* parameterDisplayElements; // 0x18

		::System::Void SetParameterForStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORSTART_OFFSET))(arg, nullptr);
		}

		::System::Void SkipParameterChangeAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAY_SKIPPARAMETERCHANGEANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetParameterForScheduleProgress(::System::Int64 arg, Il2CppObject* arg2, ::MX::Data::MiniGameDreamMakerScheduleResultExcelInfo* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::MX::Data::MiniGameDreamMakerScheduleResultExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORSCHEDULEPROGRESS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayParameterChangeAnimation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAY_PLAYPARAMETERCHANGEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetParameterForScheduleInfo(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORSCHEDULEINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetParameterForDayClosing(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAY_SETPARAMETERFORDAYCLOSING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAY_.CTOR_OFFSET))(nullptr);
		}

	};

