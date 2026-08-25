#pragma once
#include "unitysdk.h"

class SortingRuleTabController;
class ActiveTab;
class SortingRule;

#define EVENTSORTINGRULETABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE7C70)
#define EVENTSORTINGRULETABCONTROLLER_SETNORMALTABDYNAMICKEYSANDTABS_OFFSET UNITYSDK_OFFSET(0xAE7C80)
#define EVENTSORTINGRULETABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAE7CE0)
#define EVENTSORTINGRULETABCONTROLLER_GET_NORMALTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAE8010)
#define EVENTSORTINGRULETABCONTROLLER_SETTAB_OFFSET UNITYSDK_OFFSET(0xAE8020)
#define EVENTSORTINGRULETABCONTROLLER_SETEVENTTABDYNAMICKEYSANDTABS_OFFSET UNITYSDK_OFFSET(0xAE80B0)
#define EVENTSORTINGRULETABCONTROLLER_GET_EVENTTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAE8110)
#define EVENTSORTINGRULETABCONTROLLER_ONEVENTCHANGED_OFFSET UNITYSDK_OFFSET(0xAE8120)
#define EVENTSORTINGRULETABCONTROLLER_ONNORMALCHANGED_OFFSET UNITYSDK_OFFSET(0xAE8170)
#define EVENTSORTINGRULETABCONTROLLER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAE81C0)

	inline static constexpr unsigned int EventSortingRuleTabController_TypeDefinitionIndex = 8098;

	class EventSortingRuleTabController : public Il2CppObject
	{
	public:
		SortingRuleTabController* eventTabController; // 0x18
		SortingRuleTabController* normalTabController; // 0x20
		ActiveTab* activeTab; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetNormalTabDynamicKeysAndTabs(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_SETNORMALTABDYNAMICKEYSANDTABS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		SortingRuleTabController* get_NormalTabController()
		{
			return ((SortingRuleTabController*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_GET_NORMALTABCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetTab(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_SETTAB_OFFSET))(arg, nullptr);
		}

		::System::Void SetEventTabDynamicKeysAndTabs(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_SETEVENTTABDYNAMICKEYSANDTABS_OFFSET))(arg, arg2, nullptr);
		}

		SortingRuleTabController* get_EventTabController()
		{
			return ((SortingRuleTabController*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_GET_EVENTTABCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnEventChanged(::System::Boolean arg, SortingRule* arg2)
		{
			((::System::Void(*)(::System::Boolean, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_ONEVENTCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnNormalChanged(::System::Boolean arg, SortingRule* arg2)
		{
			((::System::Void(*)(::System::Boolean, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_ONNORMALCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		SortingRule* get_Current()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSORTINGRULETABCONTROLLER_GET_CURRENT_OFFSET))(nullptr);
		}

	};

