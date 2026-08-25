#pragma once
#include "unitysdk.h"

class MXButton;
class MXToggle;
namespace MX::Data { class StickerInfo; }
class UIStickerBookListNormalUnit;
namespace MX::NetworkProtocol { class StickerUseStickerResponse; }

#define UIPOPUP_STICKERBOOKATTACH_.CTOR_OFFSET UNITYSDK_OFFSET(0xB30A60)
#define UIPOPUP_STICKERBOOKATTACH_SETDATA_OFFSET UNITYSDK_OFFSET(0xB30A70)
#define UIPOPUP_STICKERBOOKATTACH_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xB30AB0)
#define UIPOPUP_STICKERBOOKATTACH__REQUESTUSESTICKER_B__7_0_OFFSET UNITYSDK_OFFSET(0xB30B90)
#define UIPOPUP_STICKERBOOKATTACH_REQUESTUSESTICKER_OFFSET UNITYSDK_OFFSET(0xB30AC0)
#define UIPOPUP_STICKERBOOKATTACH_AWAKE_OFFSET UNITYSDK_OFFSET(0xB30F30)

	inline static constexpr unsigned int UIPopup_StickerBookAttach_TypeDefinitionIndex = 8291;

	class UIPopup_StickerBookAttach : public Il2CppObject
	{
	public:
		MXButton* confirm; // 0xD8
		MXToggle* skipAni; // 0xE0
		::MX::Data::StickerInfo* stickerInfo; // 0xE8
		UIStickerBookListNormalUnit* stickerUnit; // 0xF0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKATTACH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(UIStickerBookListNormalUnit* arg, ::MX::Data::StickerInfo* arg2)
		{
			((::System::Void(*)(UIStickerBookListNormalUnit*, ::MX::Data::StickerInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKATTACH_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKATTACH_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void _RequestUseSticker_b__7_0(::MX::NetworkProtocol::StickerUseStickerResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::StickerUseStickerResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKATTACH__REQUESTUSESTICKER_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void RequestUseSticker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKATTACH_REQUESTUSESTICKER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKATTACH_AWAKE_OFFSET))(nullptr);
		}

	};

