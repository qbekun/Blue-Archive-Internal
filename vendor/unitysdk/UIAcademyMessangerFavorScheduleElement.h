#pragma once
#include "unitysdk.h"

class UIAcademyMessangerMessageUnit;
class MXButton;
class UISprite;
namespace UnityEngine { class Transform; }
namespace MX::Data { class AcademyMessageData; }
namespace UnityEngine { class Vector3; }
class UIWidget;

#define UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A1A90)
#define UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_TRYSETFAVORSCHEDULE_OFFSET UNITYSDK_OFFSET(0x21A1AA0)
#define UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_SETPOS_OFFSET UNITYSDK_OFFSET(0x21A2070)
#define UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_HIDEFAVORSCHEDULEBUTTON_OFFSET UNITYSDK_OFFSET(0x21A2140)
#define UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_ONCLICKSCHEDULE_OFFSET UNITYSDK_OFFSET(0x21A2380)
#define UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_GET_BG_OFFSET UNITYSDK_OFFSET(0x21A25B0)

	inline static constexpr unsigned int UIAcademyMessangerFavorScheduleElement_TypeDefinitionIndex = 4152;

	class UIAcademyMessangerFavorScheduleElement : public Il2CppObject
	{
	public:
		UIAcademyMessangerMessageUnit* messageUnit; // 0x18
		MXButton* favorScheduleButton; // 0x20
		UISprite* favorBg; // 0x28
		::UnityEngine::Transform* MyTransform; // 0x30
		::System::Int64 chosenMessageId; // 0x38
		::System::Int64 FavorScheduleId; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TrySetFavorSchedule(::MX::Data::AcademyMessageData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_TRYSETFAVORSCHEDULE_OFFSET))(arg, nullptr);
		}

		::System::Void SetPos(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_SETPOS_OFFSET))(arg, nullptr);
		}

		::System::Void HideFavorScheduleButton(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_HIDEFAVORSCHEDULEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSchedule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_ONCLICKSCHEDULE_OFFSET))(nullptr);
		}

		UIWidget* get_Bg()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERFAVORSCHEDULEELEMENT_GET_BG_OFFSET))(nullptr);
		}

	};

