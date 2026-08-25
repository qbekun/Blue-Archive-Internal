#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
class UIInput;

#define UIPOPUP_QUICKCRAFTEDITNAME_SETNORMALBUTTONSACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x27712A0)
#define UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x2771350)
#define UIPOPUP_QUICKCRAFTEDITNAME_SETPREVINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x27713C0)
#define UIPOPUP_QUICKCRAFTEDITNAME_AWAKE_OFFSET UNITYSDK_OFFSET(0x2771470)
#define UIPOPUP_QUICKCRAFTEDITNAME_GETPRESETNAME_OFFSET UNITYSDK_OFFSET(0x2771C60)
#define UIPOPUP_QUICKCRAFTEDITNAME_ONCHANGEINPUT_OFFSET UNITYSDK_OFFSET(0x2771D20)
#define UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKCLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0x2771EB0)
#define UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x2771F40)
#define UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKNORMALBUTTON_OFFSET UNITYSDK_OFFSET(0x2772210)
#define UIPOPUP_QUICKCRAFTEDITNAME_SETDATA_OFFSET UNITYSDK_OFFSET(0x2772400)
#define UIPOPUP_QUICKCRAFTEDITNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x27725F0)

	inline static constexpr unsigned int UIPopup_QuickCraftEditName_TypeDefinitionIndex = 7345;

	class UIPopup_QuickCraftEditName : public Il2CppObject
	{
	public:
		MXButton* closeBtn; // 0xD8
		::UnityEngine::GameObject* dropDownList; // 0xE0
		UILabel* currentTabLabel; // 0xE8
		MXButton* dropDownArrowButton; // 0xF0
		UISprite* dropDownArrowSprite; // 0xF8
		UIInput* input; // 0x100
		MXButton* confirmButton; // 0x108
		UILabel* inputLabel; // 0x110
		Il2CppObject* normalButtons; // 0x118
		Il2CppObject* pressedButtons; // 0x120
		Il2CppObject* normalButtonLabels; // 0x128
		Il2CppObject* pressedButtonLabels; // 0x130
		Il2CppObject* presetNames; // 0x138
		Il2CppObject* OnConfirm; // 0x140
		::System::Int32 tabIndex; // 0x148

		::System::Void SetNormalButtonsActiveCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_SETNORMALBUTTONSACTIVECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDropDownList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKDROPDOWNLIST_OFFSET))(nullptr);
		}

		::System::Void SetPrevInputText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_SETPREVINPUTTEXT_OFFSET))(str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_AWAKE_OFFSET))(nullptr);
		}

		::System::String* GetPresetName(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_GETPRESETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_ONCHANGEINPUT_OFFSET))(nullptr);
		}

		::System::Void OnClickClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKCLOSEPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickNormalButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_ONCLICKNORMALBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_QUICKCRAFTEDITNAME_.CTOR_OFFSET))(nullptr);
		}

	};

