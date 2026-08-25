#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class CharacterSortingSaveData; }
class UICharacterSelectClickCharacterMessage;

#define UIACCOUNTSTUDENTPOPUPCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E8440)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_GETEMPTYLABELTEXT_OFFSET UNITYSDK_OFFSET(0x21EC170)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_GETMAXSELECTCOUNT_OFFSET UNITYSDK_OFFSET(0x21EC210)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_ISFILTERON_OFFSET UNITYSDK_OFFSET(0x21EC220)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x21EC2A0)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_SORTDATA_OFFSET UNITYSDK_OFFSET(0x21EC350)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_USEINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x21EC420)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_LOADFILTER_OFFSET UNITYSDK_OFFSET(0x21EC430)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_ISCONTAINEDBYCHARACTERFILTER_OFFSET UNITYSDK_OFFSET(0x21EC510)
#define UIACCOUNTSTUDENTPOPUPCONTROLLER_HANDLECLICKCHARACTERCARDMESSAGE_OFFSET UNITYSDK_OFFSET(0x21EC5F0)

	inline static constexpr unsigned int UIAccountStudentPopupController_TypeDefinitionIndex = 4244;

	class UIAccountStudentPopupController : public Il2CppObject
	{
	public:
		Il2CppObject* confirmCallback; // 0x30

		::System::Void .ctor(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_GetEmptyLabelText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_GETEMPTYLABELTEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_GetMaxSelectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_GETMAXSELECTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_ISFILTERON_OFFSET))(nullptr);
		}

		::System::Void OnClickOKButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::MX::SaveData::CharacterSortingSaveData* get_SortData()
		{
			return ((::MX::SaveData::CharacterSortingSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_SORTDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_UseInfoButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_USEINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Action* get_LoadFilter()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_LOADFILTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_IsContainedByCharacterFilter()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_GET_ISCONTAINEDBYCHARACTERFILTER_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickCharacterCardMessage(UICharacterSelectClickCharacterMessage* arg)
		{
			return ((::System::Boolean(*)(UICharacterSelectClickCharacterMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTSTUDENTPOPUPCONTROLLER_HANDLECLICKCHARACTERCARDMESSAGE_OFFSET))(arg, nullptr);
		}

	};

