#pragma once
#include "unitysdk.h"

class StickerBookNoticeScrollController;
class MXButton;
class UILabel;

#define UIPOPUP_STICKERBOOKNOTICE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB31AA0)
#define UIPOPUP_STICKERBOOKNOTICE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB31D60)
#define UIPOPUP_STICKERBOOKNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB31DF0)
#define UIPOPUP_STICKERBOOKNOTICE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB31E00)
#define UIPOPUP_STICKERBOOKNOTICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB32660)

	inline static constexpr unsigned int UIPopup_StickerBookNotice_TypeDefinitionIndex = 8295;

	class UIPopup_StickerBookNotice : public Il2CppObject
	{
	public:
		StickerBookNoticeScrollController* scrollController; // 0xD8
		MXButton* confirmBtn; // 0xE0
		MXButton* closeBtn; // 0xE8
		UILabel* countLabel; // 0xF0
		Il2CppObject* receivedStickerDBs; // 0xF8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKNOTICE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKNOTICE_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKNOTICE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKNOTICE_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

