#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }

#define UICONSOLEINPUTFIELD_ADD_ONINPUTSUBMIT_OFFSET UNITYSDK_OFFSET(0x26B2780)
#define UICONSOLEINPUTFIELD_REMOVE_ONVERTICALARROW_OFFSET UNITYSDK_OFFSET(0x26B2820)
#define UICONSOLEINPUTFIELD_REMOVE_ONINPUTSUBMIT_OFFSET UNITYSDK_OFFSET(0x26B28C0)
#define UICONSOLEINPUTFIELD_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x26B2960)
#define UICONSOLEINPUTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B2BB0)
#define UICONSOLEINPUTFIELD_ADD_ONVERTICALARROW_OFFSET UNITYSDK_OFFSET(0x26B2C00)

	inline static constexpr unsigned int UIConsoleInputField_TypeDefinitionIndex = 6898;

	class UIConsoleInputField : public Il2CppObject
	{
	public:
		Il2CppObject* OnVerticalArrow; // 0x218
		::System::Action* OnInputSubmit; // 0x220

		::System::Void add_OnInputSubmit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONSOLEINPUTFIELD_ADD_ONINPUTSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnVerticalArrow(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICONSOLEINPUTFIELD_REMOVE_ONVERTICALARROW_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnInputSubmit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICONSOLEINPUTFIELD_REMOVE_ONINPUTSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UICONSOLEINPUTFIELD_ONUPDATESELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONSOLEINPUTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_OnVerticalArrow(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICONSOLEINPUTFIELD_ADD_ONVERTICALARROW_OFFSET))(arg, nullptr);
		}

	};

