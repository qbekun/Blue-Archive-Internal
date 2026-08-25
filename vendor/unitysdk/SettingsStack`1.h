#pragma once
#include "unitysdk.h"

#define SETTINGSSTACK`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_SETAPPLYACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_FILLINITIALVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_FILLINITIALVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_ADDTOTOPANDAPPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_REMOVEANDAPPLYTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_POPTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_MOVETOTOPANDAPPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_MOVETOTOPANDAPPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_REAPPLYTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_ISTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_PEEKTOPVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SETTINGSSTACK`1_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SettingsStack`1_TypeDefinitionIndex = 3738;

	class SettingsStack`1 : public Il2CppObject
	{
	public:
		Il2CppObject* settingsList; // 0x0
		Il2CppObject* applyAction; // 0x0

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetApplyAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_SETAPPLYACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean FillInitialValue(Il2CppObject* arg, ::System::Boolean arg2, ::System::Object&* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_FILLINITIALVALUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean FillInitialValues(Il2CppObject* arg, ::System::Boolean arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_FILLINITIALVALUES_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddToTopAndApply(Il2CppObject* arg, ::System::Object&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_ADDTOTOPANDAPPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveAndApplyTop(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_REMOVEANDAPPLYTOP_OFFSET))(arg, nullptr);
		}

		::System::Void PopTop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_POPTOP_OFFSET))(nullptr);
		}

		::System::Void MoveToTopAndApply(Il2CppObject* arg, ::System::Object&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_MOVETOTOPANDAPPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveToTopAndApply(::System::Object&* arg)
		{
			((::System::Void(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_MOVETOTOPANDAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void ReapplyTop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_REAPPLYTOP_OFFSET))(nullptr);
		}

		::System::Boolean IsTop(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_ISTOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean PeekTopValue(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_PEEKTOPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReadValue(::System::Object* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Object*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SETTINGSSTACK`1_READVALUE_OFFSET))(arg, arg2, nullptr);
		}

	};

