#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
class MXButton;
class AssistUIOpener;
namespace MX::Data { class EventContentSeasonInfo; }

#define ASSISTMANAGEMENTBUTTONCONTROLLER_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x22053F0)
#define ASSISTMANAGEMENTBUTTONCONTROLLER_SETEVENTCONTENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x2205420)
#define ASSISTMANAGEMENTBUTTONCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2205490)
#define ASSISTMANAGEMENTBUTTONCONTROLLER_DECIDESHOWBUTTON_OFFSET UNITYSDK_OFFSET(0x22054F0)
#define ASSISTMANAGEMENTBUTTONCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2205A10)
#define ASSISTMANAGEMENTBUTTONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2205BF0)

	inline static constexpr unsigned int AssistManagementButtonController_TypeDefinitionIndex = 4307;

	class AssistManagementButtonController : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _contentType; // 0x18
		MXButton* _button; // 0x20
		AssistUIOpener* _uiOpener; // 0x28
		::MX::Data::EventContentSeasonInfo* _seasonInfo; // 0x30

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTMANAGEMENTBUTTONCONTROLLER_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetEventContentSeasonInfo(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ASSISTMANAGEMENTBUTTONCONTROLLER_SETEVENTCONTENTSEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTMANAGEMENTBUTTONCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean DecideShowButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTMANAGEMENTBUTTONCONTROLLER_DECIDESHOWBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTMANAGEMENTBUTTONCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTMANAGEMENTBUTTONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

