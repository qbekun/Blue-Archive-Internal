#pragma once
#include "unitysdk.h"

class MXButton;
class UIStickerBookIndicator;
class UIPopup_StickerBookNotice;

#define UISTICKERBOOK_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB32B20)
#define UISTICKERBOOK___N__0_OFFSET UNITYSDK_OFFSET(0xB32FC0)
#define UISTICKERBOOK_ONPREV_OFFSET UNITYSDK_OFFSET(0xB32FD0)
#define UISTICKERBOOK_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB32FE0)
#define UISTICKERBOOK__ONOPENED_B__11_0_OFFSET UNITYSDK_OFFSET(0xB33050)
#define UISTICKERBOOK_ONNEXT_OFFSET UNITYSDK_OFFSET(0xB33090)
#define UISTICKERBOOK_INITPAGE_OFFSET UNITYSDK_OFFSET(0xB32E10)
#define UISTICKERBOOK_AWAKE_OFFSET UNITYSDK_OFFSET(0xB330A0)
#define UISTICKERBOOK__INITINDICATOR_G__ISREDDOTPAGE|15_0_OFFSET UNITYSDK_OFFSET(0xB33390)
#define UISTICKERBOOK_INITINDICATOR_OFFSET UNITYSDK_OFFSET(0xB32D00)
#define UISTICKERBOOK_.CTOR_OFFSET UNITYSDK_OFFSET(0xB33810)

	inline static constexpr unsigned int UIStickerBook_TypeDefinitionIndex = 8301;

	class UIStickerBook : public Il2CppObject
	{
	public:
		MXButton* Back; // 0xD8
		::Il2CppArray<::System::Object*>* UIStickerBookUnit; // 0xE0
		UIStickerBookIndicator* Indicator; // 0xE8
		MXButton* Prev; // 0xF0
		MXButton* Next; // 0xF8
		Il2CppObject* groupInfos; // 0x100
		::System::Int32 curPageIndex; // 0x108
		::System::Int32 maxPageIndex; // 0x10C
		Il2CppObject* receivedStickerDBs; // 0x110

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK___N__0_OFFSET))(nullptr);
		}

		::System::Void OnPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_ONPREV_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__11_0(UIPopup_StickerBookNotice* arg)
		{
			((::System::Void(*)(UIPopup_StickerBookNotice*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK__ONOPENED_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_ONNEXT_OFFSET))(nullptr);
		}

		::System::Void InitPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_INITPAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean _InitIndicator_g__IsReddotPage|15_0(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK__INITINDICATOR_G__ISREDDOTPAGE|15_0_OFFSET))(arg, nullptr);
		}

		::System::Void InitIndicator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_INITINDICATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOK_.CTOR_OFFSET))(nullptr);
		}

	};

