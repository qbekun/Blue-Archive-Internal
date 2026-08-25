#pragma once
#include "unitysdk.h"

class UILabel;

#define UIINPUTITEMCONTROLLER_GET_INPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xC1ECC0)
#define UIINPUTITEMCONTROLLER_ONCLICKTAKEOUTITEM_OFFSET UNITYSDK_OFFSET(0xC1ECD0)
#define UIINPUTITEMCONTROLLER_SET_INPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xC1ECF0)
#define UIINPUTITEMCONTROLLER_CANADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xC1ED00)
#define UIINPUTITEMCONTROLLER_GETPRESSINGREDIENTDELTA_OFFSET UNITYSDK_OFFSET(0xC1ED10)
#define UIINPUTITEMCONTROLLER_ONPRESSADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xC1ED20)
#define UIINPUTITEMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1ED50)
#define UIINPUTITEMCONTROLLER_ISCANNOTINPUT_OFFSET UNITYSDK_OFFSET(0xC1EFC0)
#define UIINPUTITEMCONTROLLER_ONCLICKREMOVEINGREDIENT_OFFSET UNITYSDK_OFFSET(0xC1EFF0)
#define UIINPUTITEMCONTROLLER_ONPRESSITEM_OFFSET UNITYSDK_OFFSET(0xC1F160)
#define UIINPUTITEMCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xC1F180)
#define UIINPUTITEMCONTROLLER_RESETPRESSINPUTDELAY_OFFSET UNITYSDK_OFFSET(0xC1ED40)
#define UIINPUTITEMCONTROLLER_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xC1F1A0)
#define UIINPUTITEMCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1F1B0)
#define UIINPUTITEMCONTROLLER_GET_CANINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xC1F1C0)
#define UIINPUTITEMCONTROLLER_GET_ISFILLDATA_OFFSET UNITYSDK_OFFSET(0xC1F1D0)
#define UIINPUTITEMCONTROLLER_ONPRESSTAKEOUTITEM_OFFSET UNITYSDK_OFFSET(0xC1F1E0)
#define UIINPUTITEMCONTROLLER_ONPRESSREMOVEINGREDIENT_OFFSET UNITYSDK_OFFSET(0xC1F200)
#define UIINPUTITEMCONTROLLER_ONCLICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xC1F220)
#define UIINPUTITEMCONTROLLER_SET_CANINPUTCOUNT_OFFSET UNITYSDK_OFFSET(0xC1F390)
#define UIINPUTITEMCONTROLLER_GET_ISINPUTITEM_OFFSET UNITYSDK_OFFSET(0xC1F3A0)

	inline static constexpr unsigned int UIInputItemController_TypeDefinitionIndex = 8869;

	class UIInputItemController : public Il2CppObject
	{
	public:
		UILabel* CanInputCountLabel; // 0x18
		UILabel* InputCountLabel; // 0x20
		::System::Single initialInputDelayTime; // 0x0
		::System::Single pressInputDelayTime; // 0x28
		::System::Single duration; // 0x2C
		::System::Int64 canInputCount; // 0x30
		::System::Int64 inputCount; // 0x38
		::System::Boolean isInputItem; // 0x40
		::System::Boolean isFillData; // 0x41
		::System::Boolean pressed; // 0x42
		::System::Int64 minCount; // 0x48

		::System::Int64 get_InputCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_GET_INPUTCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnClickTakeOutItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONCLICKTAKEOUTITEM_OFFSET))(nullptr);
		}

		::System::Void set_InputCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_SET_INPUTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanAddIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_CANADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Int64 GetPressIngredientDelta()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_GETPRESSINGREDIENTDELTA_OFFSET))(nullptr);
		}

		::System::Void OnPressAddIngredient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONPRESSADDINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsCanNotInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ISCANNOTINPUT_OFFSET))(nullptr);
		}

		::System::Void OnClickRemoveIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONCLICKREMOVEINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void OnPressItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONPRESSITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONCLICKITEM_OFFSET))(nullptr);
		}

		::System::Void ResetPressInputDelay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_RESETPRESSINPUTDELAY_OFFSET))(nullptr);
		}

		::System::Boolean IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ISDRAGGING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CanInputCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_GET_CANINPUTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFillData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_GET_ISFILLDATA_OFFSET))(nullptr);
		}

		::System::Void OnPressTakeOutItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONPRESSTAKEOUTITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressRemoveIngredient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONPRESSREMOVEINGREDIENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAddIngredient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_ONCLICKADDINGREDIENT_OFFSET))(nullptr);
		}

		::System::Void set_CanInputCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_SET_CANINPUTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInputItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTITEMCONTROLLER_GET_ISINPUTITEM_OFFSET))(nullptr);
		}

	};

