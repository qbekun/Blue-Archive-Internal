#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
class InteractiveWorldRaidUITriggerMessage;

#define INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_ONVOICEFADEOUTREQUEST_OFFSET UNITYSDK_OFFSET(0x259D4F0)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259D500)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_ONENTER_OFFSET UNITYSDK_OFFSET(0x259D6A0)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x259D770)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x259D840)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x259DC90)
#define INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_HANDLEUITRIGGERMESSAGE_OFFSET UNITYSDK_OFFSET(0x259DCA0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandShowDialogWidget_TypeDefinitionIndex = 303;

	class InteractiveWorldRaidCommandShowDialogWidget : public Il2CppObject
	{
	public:
		Il2CppObject* characters; // 0x20
		::System::Int64 groupId; // 0x28
		::System::Boolean _canShowDialog; // 0x30

		::System::Void OnVoiceFadeOutRequest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_ONVOICEFADEOUTREQUEST_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_ONENTER_OFFSET))(nullptr);
		}

		::System::Void OnLeave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_ONLEAVE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleUITriggerMessage(InteractiveWorldRaidUITriggerMessage* arg)
		{
			return ((::System::Boolean(*)(InteractiveWorldRaidUITriggerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSHOWDIALOGWIDGET_HANDLEUITRIGGERMESSAGE_OFFSET))(arg, nullptr);
		}

	};

