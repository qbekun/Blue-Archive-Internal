#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentData; }
namespace MX::SaveData { class EventNotifyWatchedSaveData; }
namespace MX::Data { class EventContentSeasonInfo; }
class UIPopup_NotifyEvent;

#define <>C__DISPLAYCLASS96_18_.CTOR_OFFSET UNITYSDK_OFFSET(0x2663C10)
#define <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__69_OFFSET UNITYSDK_OFFSET(0x2663C20)
#define <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__70_OFFSET UNITYSDK_OFFSET(0x2663CA0)
#define <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__71_OFFSET UNITYSDK_OFFSET(0x2663E30)
#define <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__72_OFFSET UNITYSDK_OFFSET(0x2663E40)

	inline static constexpr unsigned int <>c__DisplayClass96_18_TypeDefinitionIndex = 6661;

	class <>c__DisplayClass96_18 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentData* eventContentData; // 0x10
		::System::DateTime* currentTime; // 0x18
		::MX::SaveData::EventNotifyWatchedSaveData* saveData; // 0x20
		Il2CppObject* closeNotifySeasonInfos; // 0x28
		::System::Boolean popupClosed; // 0x30
		::System::Action* __9__71; // 0x38
		Il2CppObject* __9__72; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_18_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddPopups_b__69(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__69_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__70(UIPopup_NotifyEvent* arg)
		{
			((::System::Void(*)(UIPopup_NotifyEvent*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__70_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__71()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__71_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__72(UIPopup_NotifyEvent* arg)
		{
			((::System::Void(*)(UIPopup_NotifyEvent*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_18__ADDPOPUPS_B__72_OFFSET))(arg, nullptr);
		}

	};

