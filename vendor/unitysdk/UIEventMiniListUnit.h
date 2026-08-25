#pragma once
#include "unitysdk.h"

class MXButton;
namespace FlatData { class EventTargetType; }
namespace FlatData { class OpenConditionContent; }
namespace MX::GameLogic::Service { class OpenConditionLockReason; }
namespace MX::Data::Excel { class EventContentMiniEventShortCutExcel; }

#define UIEVENTMINILISTUNIT_ISSATISFYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x24B4940)
#define UIEVENTMINILISTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24B4960)
#define UIEVENTMINILISTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B4B80)
#define UIEVENTMINILISTUNIT_ONCLICKSHORTCUT_OFFSET UNITYSDK_OFFSET(0x24B4B90)
#define UIEVENTMINILISTUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B4BA0)
#define UIEVENTMINILISTUNIT_ONCLICKDISABLESHORTCUT_OFFSET UNITYSDK_OFFSET(0x24B4DB0)

	inline static constexpr unsigned int UIEventMiniListUnit_TypeDefinitionIndex = 5858;

	class UIEventMiniListUnit : public Il2CppObject
	{
	public:
		Il2CppObject* titles; // 0x18
		MXButton* enableShortcutButton; // 0x20
		MXButton* disableShortcutButton; // 0x28
		::FlatData::EventTargetType* shortcutType; // 0x30
		::FlatData::OpenConditionContent* content; // 0x34
		::MX::GameLogic::Service::OpenConditionLockReason* reason; // 0x38

		::System::Boolean IsSatisfyOpenCondition(::FlatData::EventTargetType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMINILISTUNIT_ISSATISFYOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::EventContentMiniEventShortCutExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentMiniEventShortCutExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMINILISTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMINILISTUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMINILISTUNIT_ONCLICKSHORTCUT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMINILISTUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickDisableShortcut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMINILISTUNIT_ONCLICKDISABLESHORTCUT_OFFSET))(nullptr);
		}

	};

