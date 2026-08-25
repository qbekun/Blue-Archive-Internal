#pragma once
#include "unitysdk.h"

class UIPopup_Input_ReturnResult;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UISprite;
namespace FlatData { class EchelonExtensionType; }

#define UIPOPUP_FORMATION_NOTICE_EDITNAME_AWAKE_OFFSET UNITYSDK_OFFSET(0x256A6E0)
#define UIPOPUP_FORMATION_NOTICE_EDITNAME_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2569FF0)
#define UIPOPUP_FORMATION_NOTICE_EDITNAME_SAVENAME_OFFSET UNITYSDK_OFFSET(0x256AA90)
#define UIPOPUP_FORMATION_NOTICE_EDITNAME_ONCLICKDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x256ADC0)
#define UIPOPUP_FORMATION_NOTICE_EDITNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x256AE30)
#define UIPOPUP_FORMATION_NOTICE_EDITNAME_ONCLICKNORMALBUTTON_OFFSET UNITYSDK_OFFSET(0x256AE40)

	inline static constexpr unsigned int UIPopup_Formation_Notice_EditName_TypeDefinitionIndex = 6142;

	class UIPopup_Formation_Notice_EditName : public Il2CppObject
	{
	public:
		UIPopup_Input_ReturnResult* presetName; // 0x18
		UIPopup_Input_ReturnResult* groupName; // 0x20
		::UnityEngine::GameObject* dropDownList; // 0x28
		UILabel* currentTabLabel; // 0x30
		MXButton* dropDownArrowButton; // 0x38
		UISprite* dropDownArrowSprite; // 0x40
		Il2CppObject* normalButtons; // 0x48
		Il2CppObject* pressedButtons; // 0x50
		Il2CppObject* normalButtonLabels; // 0x58
		Il2CppObject* pressedButtonLabels; // 0x60
		::System::Int32 tabIndex; // 0x68
		::System::Int32 elementIndex; // 0x6C
		::System::Boolean isEditPresetName; // 0x70
		::FlatData::EchelonExtensionType* extensionType; // 0x74

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_EDITNAME_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::Int32 arg2, ::FlatData::EchelonExtensionType* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_EDITNAME_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SaveName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_EDITNAME_SAVENAME_OFFSET))(str, nullptr);
		}

		::System::Void OnClickDropDownList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_EDITNAME_ONCLICKDROPDOWNLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_EDITNAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickNormalButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_NOTICE_EDITNAME_ONCLICKNORMALBUTTON_OFFSET))(nullptr);
		}

	};

