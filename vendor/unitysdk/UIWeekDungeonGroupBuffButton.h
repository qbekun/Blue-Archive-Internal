#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIWeekDungeonRecommandSchool;
namespace MX::Data::Excel { class WeekDungeonGroupBuffExcel; }
namespace FlatData { class School; }

#define UIWEEKDUNGEONGROUPBUFFBUTTON_SETDATA_OFFSET UNITYSDK_OFFSET(0xBC7ED0)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_GET_ICON_OFFSET UNITYSDK_OFFSET(0xBC8030)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_SET_POPUPUI_OFFSET UNITYSDK_OFFSET(0xBC80C0)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_SETSCHOOLDATA_OFFSET UNITYSDK_OFFSET(0xBC7F20)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_SET_GROUPBUFFID_OFFSET UNITYSDK_OFFSET(0xBC8160)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0xBC8170)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_GET_POPUPUI_OFFSET UNITYSDK_OFFSET(0xBC8280)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xBC8290)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xBC82A0)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_ONSELECTBUFF_OFFSET UNITYSDK_OFFSET(0xBC8330)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_GET_NAMELABEL_OFFSET UNITYSDK_OFFSET(0xBC80D0)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_GET_GROUPBUFFID_OFFSET UNITYSDK_OFFSET(0xBC8380)
#define UIWEEKDUNGEONGROUPBUFFBUTTON_ONCLICK_OFFSET UNITYSDK_OFFSET(0xBC8390)

	inline static constexpr unsigned int UIWeekDungeonGroupBuffButton_TypeDefinitionIndex = 8634;

	class UIWeekDungeonGroupBuffButton : public Il2CppObject
	{
	public:
		UITexture* icon; // 0x18
		UILabel* nameLabel; // 0x20
		::UnityEngine::GameObject* selected; // 0x28
		::System::Int64 _GroupBuffId_k__BackingField; // 0x30
		UIWeekDungeonRecommandSchool* _PopupUI_k__BackingField; // 0x38

		::System::Void SetData(::MX::Data::Excel::WeekDungeonGroupBuffExcel* arg, UIWeekDungeonRecommandSchool* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonGroupBuffExcel*, UIWeekDungeonRecommandSchool*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		UITexture* get_Icon()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_GET_ICON_OFFSET))(nullptr);
		}

		::System::Void set_PopupUI(UIWeekDungeonRecommandSchool* arg)
		{
			((::System::Void(*)(UIWeekDungeonRecommandSchool*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_SET_POPUPUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetSchoolData(::FlatData::School* arg)
		{
			((::System::Void(*)(::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_SETSCHOOLDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupBuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_SET_GROUPBUFFID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_Selected()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_GET_SELECTED_OFFSET))(nullptr);
		}

		UIWeekDungeonRecommandSchool* get_PopupUI()
		{
			return ((UIWeekDungeonRecommandSchool*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_GET_POPUPUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectBuff(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_ONSELECTBUFF_OFFSET))(arg, nullptr);
		}

		UILabel* get_NameLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_GET_NAMELABEL_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupBuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_GET_GROUPBUFFID_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONGROUPBUFFBUTTON_ONCLICK_OFFSET))(nullptr);
		}

	};

