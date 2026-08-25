#pragma once
#include "unitysdk.h"

namespace FlatData { class EventTargetType; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class ContentType; }

#define CONTENTSHORTCUTHELPER_ISSATISFYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x2468B70)
#define CONTENTSHORTCUTHELPER_HANDLESHORTCUT_OFFSET UNITYSDK_OFFSET(0x2468CA0)
#define CONTENTSHORTCUTHELPER_GETTARGETCONTENT_OFFSET UNITYSDK_OFFSET(0x2468C80)
#define CONTENTSHORTCUTHELPER_CO_ENTERSCHOOLDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0x24693C0)
#define CONTENTSHORTCUTHELPER_CO_ENTERUIWEEKDUNGEONLOBBY_OFFSET UNITYSDK_OFFSET(0x2469360)

	inline static constexpr unsigned int ContentShortcutHelper_TypeDefinitionIndex = 5625;

	class ContentShortcutHelper : public Il2CppObject
	{
	public:
		::System::Boolean IsSatisfyOpenCondition(::FlatData::EventTargetType* arg, ::FlatData::OpenConditionContent&* arg2, ::MX::GameLogic::Service::OpenConditionLockReason&* arg3)
		{
			return ((::System::Boolean(*)(::FlatData::EventTargetType*, ::FlatData::OpenConditionContent&*, ::MX::GameLogic::Service::OpenConditionLockReason&*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSHORTCUTHELPER_ISSATISFYOPENCONDITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void HandleShortcut(::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSHORTCUTHELPER_HANDLESHORTCUT_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* GetTargetContent(::FlatData::EventTargetType* arg)
		{
			return ((::FlatData::OpenConditionContent*(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSHORTCUTHELPER_GETTARGETCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_EnterSchoolDungeonLobby()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSHORTCUTHELPER_CO_ENTERSCHOOLDUNGEONLOBBY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_EnterUIWeekDungeonLobby(::FlatData::ContentType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSHORTCUTHELPER_CO_ENTERUIWEEKDUNGEONLOBBY_OFFSET))(arg, nullptr);
		}

	};

