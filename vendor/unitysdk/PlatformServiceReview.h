#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define PLATFORMSERVICEREVIEW_CALL_CHARACTER_OFFSET UNITYSDK_OFFSET(0xC6FCB0)
#define PLATFORMSERVICEREVIEW_CHECK_STAGECLEAR_OFFSET UNITYSDK_OFFSET(0xC6FF30)
#define PLATFORMSERVICEREVIEW_CALL_STAGECLEAR_OFFSET UNITYSDK_OFFSET(0xC6FF60)
#define PLATFORMSERVICEREVIEW_CALLREVIEWPOPUP_OFFSET UNITYSDK_OFFSET(0xC6FE50)
#define PLATFORMSERVICEREVIEW_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC6FE30)
#define PLATFORMSERVICEREVIEW_LOADDATA_OFFSET UNITYSDK_OFFSET(0xC6FFB0)

	inline static constexpr unsigned int PlatformServiceReview_TypeDefinitionIndex = 8990;

	class PlatformServiceReview : public Il2CppObject
	{
	public:
		::System::Boolean isRecordStageCall; // 0x0
		::System::Int64 checkStageID; // 0x8
		::System::Int64 checkCharID; // 0x10
		::System::DateTime* checkDateFrom; // 0x18
		::System::DateTime* checkDateTo; // 0x20

		::System::Void Call_Character(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEREVIEW_CALL_CHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Check_StageClear(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEREVIEW_CHECK_STAGECLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Call_StageClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEREVIEW_CALL_STAGECLEAR_OFFSET))(nullptr);
		}

		::System::Void CallReviewPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEREVIEW_CALLREVIEWPOPUP_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEREVIEW_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void LoadData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEREVIEW_LOADDATA_OFFSET))(nullptr);
		}

	};

