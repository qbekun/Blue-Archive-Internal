#pragma once
#include "unitysdk.h"

class SubSortingRuleTabController;
class SortingRuleTabController;
class ActiveTab;
class SortingRuleWrapper;
class SortingRule;

#define SUBSORTINGRULEALLTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF4CC0)
#define SUBSORTINGRULEALLTABCONTROLLER_SETNORMALTABDYNAMICKEYSANDTABS_OFFSET UNITYSDK_OFFSET(0xAF4CD0)
#define SUBSORTINGRULEALLTABCONTROLLER_ONSUBCHANGED_OFFSET UNITYSDK_OFFSET(0xAF4D30)
#define SUBSORTINGRULEALLTABCONTROLLER_SETSUBTABDYNAMICKEYSANDTABS_OFFSET UNITYSDK_OFFSET(0xAF4D80)
#define SUBSORTINGRULEALLTABCONTROLLER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAF4DE0)
#define SUBSORTINGRULEALLTABCONTROLLER_ONNORMALCHANGED_OFFSET UNITYSDK_OFFSET(0xAF4E60)
#define SUBSORTINGRULEALLTABCONTROLLER_GET_NORMALTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAF4EB0)
#define SUBSORTINGRULEALLTABCONTROLLER_GET_SUBTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAF4EC0)
#define SUBSORTINGRULEALLTABCONTROLLER_SETTAB_OFFSET UNITYSDK_OFFSET(0xAF4ED0)
#define SUBSORTINGRULEALLTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF4F70)

	inline static constexpr unsigned int SubSortingRuleAllTabController_TypeDefinitionIndex = 8146;

	class SubSortingRuleAllTabController : public Il2CppObject
	{
	public:
		SubSortingRuleTabController* subTabController; // 0x18
		SortingRuleTabController* normalTabController; // 0x20
		ActiveTab* activeTab; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetNormalTabDynamicKeysAndTabs(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_SETNORMALTABDYNAMICKEYSANDTABS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSubChanged(::System::Boolean arg, SortingRuleWrapper* arg2)
		{
			((::System::Void(*)(::System::Boolean, SortingRuleWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_ONSUBCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSubTabDynamicKeysAndTabs(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_SETSUBTABDYNAMICKEYSANDTABS_OFFSET))(arg, arg2, nullptr);
		}

		SortingRuleWrapper* get_Current()
		{
			return ((SortingRuleWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void OnNormalChanged(::System::Boolean arg, SortingRule* arg2)
		{
			((::System::Void(*)(::System::Boolean, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_ONNORMALCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		SortingRuleTabController* get_NormalTabController()
		{
			return ((SortingRuleTabController*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_GET_NORMALTABCONTROLLER_OFFSET))(nullptr);
		}

		SubSortingRuleTabController* get_SubTabController()
		{
			return ((SubSortingRuleTabController*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_GET_SUBTABCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetTab(SortingRuleWrapper* arg)
		{
			((::System::Void(*)(SortingRuleWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_SETTAB_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBSORTINGRULEALLTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

	};

