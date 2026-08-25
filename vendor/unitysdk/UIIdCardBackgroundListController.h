#pragma once
#include "unitysdk.h"

#define UIIDCARDBACKGROUNDLISTCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x2576A40)
#define UIIDCARDBACKGROUNDLISTCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2576A50)
#define UIIDCARDBACKGROUNDLISTCONTROLLER_GET_CURRENTSELECTED_OFFSET UNITYSDK_OFFSET(0x2576F60)
#define UIIDCARDBACKGROUNDLISTCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x2576F70)
#define UIIDCARDBACKGROUNDLISTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2576F90)
#define UIIDCARDBACKGROUNDLISTCONTROLLER_SET_CURRENTSELECTED_OFFSET UNITYSDK_OFFSET(0x2576FE0)

	inline static constexpr unsigned int UIIdCardBackgroundListController_TypeDefinitionIndex = 6172;

	class UIIdCardBackgroundListController : public ::System::Xml::XmlComment
	{
	public:
		::System::Int64 _CurrentSelected_k__BackingField; // 0x90
		::System::Int32 columnCount; // 0x98

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTCONTROLLER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentSelected()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTCONTROLLER_GET_CURRENTSELECTED_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTCONTROLLER_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSelected(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTCONTROLLER_SET_CURRENTSELECTED_OFFSET))(arg, nullptr);
		}

	};

