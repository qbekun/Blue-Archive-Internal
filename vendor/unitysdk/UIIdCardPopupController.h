#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class CharacterSortingSaveData; }
class UICharacterSelectClickCharacterMessage;

#define UIIDCARDPOPUPCONTROLLER_GET_ISFILTERON_OFFSET UNITYSDK_OFFSET(0x21EC720)
#define UIIDCARDPOPUPCONTROLLER_GET_SORTDATA_OFFSET UNITYSDK_OFFSET(0x21EC7A0)
#define UIIDCARDPOPUPCONTROLLER_GET_LOADFILTER_OFFSET UNITYSDK_OFFSET(0x21EC870)
#define UIIDCARDPOPUPCONTROLLER_GET_USEINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x21EC950)
#define UIIDCARDPOPUPCONTROLLER_GET_GETMAXSELECTCOUNT_OFFSET UNITYSDK_OFFSET(0x21EC960)
#define UIIDCARDPOPUPCONTROLLER_GET_GETEMPTYLABELTEXT_OFFSET UNITYSDK_OFFSET(0x21EC970)
#define UIIDCARDPOPUPCONTROLLER_HANDLECLICKCHARACTERCARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x21ECA10)
#define UIIDCARDPOPUPCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21ECB40)
#define UIIDCARDPOPUPCONTROLLER_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x21ECC90)
#define UIIDCARDPOPUPCONTROLLER_GET_ISCONTAINEDBYCHARACTERFILTER_OFFSET UNITYSDK_OFFSET(0x21ECD40)

	inline static constexpr unsigned int UIIdCardPopupController_TypeDefinitionIndex = 4245;

	class UIIdCardPopupController : public Il2CppObject
	{
	public:
		Il2CppObject* confirmCallback; // 0x30

		::System::Boolean get_IsFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_GET_ISFILTERON_OFFSET))(nullptr);
		}

		::MX::SaveData::CharacterSortingSaveData* get_SortData()
		{
			return ((::MX::SaveData::CharacterSortingSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_GET_SORTDATA_OFFSET))(nullptr);
		}

		::System::Action* get_LoadFilter()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_GET_LOADFILTER_OFFSET))(nullptr);
		}

		::System::Boolean get_UseInfoButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_GET_USEINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Int32 get_GetMaxSelectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_GET_GETMAXSELECTCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_GetEmptyLabelText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_GET_GETEMPTYLABELTEXT_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickCharacterCardMessage(UICharacterSelectClickCharacterMessage* arg)
		{
			return ((::System::Boolean(*)(UICharacterSelectClickCharacterMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_HANDLECLICKCHARACTERCARDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickOKButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* get_IsContainedByCharacterFilter()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDPOPUPCONTROLLER_GET_ISCONTAINEDBYCHARACTERFILTER_OFFSET))(nullptr);
		}

	};

