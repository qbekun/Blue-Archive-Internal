#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ALWAYSEXPANDED_OFFSET UNITYSDK_OFFSET(0x9DCF140)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_HIDEADDBUTTON_OFFSET UNITYSDK_OFFSET(0x9DCF150)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_HIDEREMOVEBUTTON_OFFSET UNITYSDK_OFFSET(0x9DCF160)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_DRAGGABLE_OFFSET UNITYSDK_OFFSET(0x9DCF170)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWELEMENTLABELS_OFFSET UNITYSDK_OFFSET(0x9DCF180)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLE_OFFSET UNITYSDK_OFFSET(0x9DCF190)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ALWAYSEXPANDED_OFFSET UNITYSDK_OFFSET(0x9DCF1A0)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_HIDEREMOVEBUTTON_OFFSET UNITYSDK_OFFSET(0x9DCF1B0)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWELEMENTLABELS_OFFSET UNITYSDK_OFFSET(0x9DCF1C0)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF1D0)
#define TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_HIDEADDBUTTON_OFFSET UNITYSDK_OFFSET(0x9DCF1E0)

namespace TriInspector
{
	inline static constexpr unsigned int ListDrawerSettingsAttribute_TypeDefinitionIndex = 37843;

	class ListDrawerSettingsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _Draggable_k__BackingField; // 0x10
		::System::Boolean _HideAddButton_k__BackingField; // 0x11
		::System::Boolean _HideRemoveButton_k__BackingField; // 0x12
		::System::Boolean _AlwaysExpanded_k__BackingField; // 0x13
		::System::Boolean _ShowElementLabels_k__BackingField; // 0x14

		::System::Boolean get_AlwaysExpanded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ALWAYSEXPANDED_OFFSET))(nullptr);
		}

		::System::Boolean get_HideAddButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_HIDEADDBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_HideRemoveButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_HIDEREMOVEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_Draggable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_DRAGGABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowElementLabels()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWELEMENTLABELS_OFFSET))(nullptr);
		}

		::System::Boolean get_Draggable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLE_OFFSET))(nullptr);
		}

		::System::Void set_AlwaysExpanded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ALWAYSEXPANDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideRemoveButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_HIDEREMOVEBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_ShowElementLabels(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWELEMENTLABELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_HideAddButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_HIDEADDBUTTON_OFFSET))(arg, nullptr);
		}

	};
}

