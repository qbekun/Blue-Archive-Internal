#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }

#define UIPOPUP_TIMEATTACKRESULT_POINTANISTART_OFFSET UNITYSDK_OFFSET(0xB61220)
#define UIPOPUP_TIMEATTACKRESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB61330)
#define UIPOPUP_TIMEATTACKRESULT_SETTOTALSCORELABEL_OFFSET UNITYSDK_OFFSET(0xB61640)
#define UIPOPUP_TIMEATTACKRESULT_SETBESTRECORD_OFFSET UNITYSDK_OFFSET(0xB61740)
#define UIPOPUP_TIMEATTACKRESULT_COPOINTANI_OFFSET UNITYSDK_OFFSET(0xB612B0)
#define UIPOPUP_TIMEATTACKRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB618C0)
#define UIPOPUP_TIMEATTACKRESULT_ONBACK_OFFSET UNITYSDK_OFFSET(0xB618D0)

	inline static constexpr unsigned int UIPopup_TimeAttackResult_TypeDefinitionIndex = 8421;

	class UIPopup_TimeAttackResult : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* SeasonBestIndicator; // 0xD8
		::UnityEngine::GameObject* BestRecordIndicator; // 0xE0
		::UnityEngine::GameObject* PracticeIndicator; // 0xE8
		UILabel* TotalScoreLabel; // 0xF0
		::Il2CppArray<::System::Object*>* HistoryScoreLabels; // 0xF8
		::System::Int64 roomId; // 0x100
		::System::Int64 totalPointSum; // 0x108

		::System::Void PointAniStart(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKRESULT_POINTANISTART_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKRESULT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetTotalScoreLabel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKRESULT_SETTOTALSCORELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetBestRecord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKRESULT_SETBESTRECORD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPointAni(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKRESULT_COPOINTANI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKRESULT_ONBACK_OFFSET))(nullptr);
		}

	};

