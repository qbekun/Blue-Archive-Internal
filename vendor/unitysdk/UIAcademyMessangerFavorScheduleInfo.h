#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UICharacterThumbnail;
class UILabel;
class MXButton;
class UIGrid;
class UILobby;
namespace MX::Data::Excel { class MomotalkScheduleSpoilerPopupExcel; }

#define UIACADEMYMESSANGERFAVORSCHEDULEINFO__ATTENDSCHEDULE_G__ENTER|22_3_OFFSET UNITYSDK_OFFSET(0x21A25C0)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_SHOW_OFFSET UNITYSDK_OFFSET(0x21A2750)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO__ATTENDSCHEDULE_B__22_1_OFFSET UNITYSDK_OFFSET(0x21A3210)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x21A3220)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO__YIELDCLOSE_B__18_0_OFFSET UNITYSDK_OFFSET(0x21A3310)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_ATTENDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x21A3340)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_YIELDCLOSE_OFFSET UNITYSDK_OFFSET(0x21A32A0)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_ONCLICKSTARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x21A3690)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_GET_SMALLPARCELS_OFFSET UNITYSDK_OFFSET(0x21A31A0)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A3740)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_ATTENDSCHEDULEAFTERCHECKINGSPOILER_OFFSET UNITYSDK_OFFSET(0x21A3750)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_ONCLICKSTART_OFFSET UNITYSDK_OFFSET(0x21A3950)
#define UIACADEMYMESSANGERFAVORSCHEDULEINFO_GET_SCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0x21A2700)

	inline static constexpr unsigned int UIAcademyMessangerFavorScheduleInfo_TypeDefinitionIndex = 4157;

	class UIAcademyMessangerFavorScheduleInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0x18
		UICharacterThumbnail* thumbnail; // 0x20
		UILabel* favorRank; // 0x28
		UILabel* characterName; // 0x30
		UILabel* episodeNumber; // 0x38
		UILabel* episodeName; // 0x40
		MXButton* scheduleButton; // 0x48
		MXButton* closeButton; // 0x50
		UIGrid* grid; // 0x58
		::Il2CppArray<::System::Object*>* smallParcels; // 0x60
		::System::Int64 FavorScheduleId; // 0x68
		::System::Int64 ScenarioGroupId; // 0x70

		::System::Void _AttendSchedule_g__Enter|22_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO__ATTENDSCHEDULE_G__ENTER|22_3_OFFSET))(nullptr);
		}

		::System::Void Show(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void _AttendSchedule_b__22_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO__ATTENDSCHEDULE_B__22_1_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void _YieldClose_b__18_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO__YIELDCLOSE_B__18_0_OFFSET))(nullptr);
		}

		::System::Void AttendSchedule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_ATTENDSCHEDULE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldClose()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_YIELDCLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OnClickStartCoroutine(UILobby* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(UILobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_ONCLICKSTARTCOROUTINE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SmallParcels()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_GET_SMALLPARCELS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AttendScheduleAfterCheckingSpoiler(::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MomotalkScheduleSpoilerPopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_ATTENDSCHEDULEAFTERCHECKINGSPOILER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_ONCLICKSTART_OFFSET))(nullptr);
		}

		Il2CppObject* get_ScheduleInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEINFO_GET_SCHEDULEINFO_OFFSET))(nullptr);
		}

	};

