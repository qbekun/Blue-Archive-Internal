#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class MXButton;
namespace MX::Data { class VideoPlayInfo; }

#define UIPOPUP_VIDEOPLAY_SET_VIDEOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x277F2F0)
#define UIPOPUP_VIDEOPLAY_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x277F310)
#define UIPOPUP_VIDEOPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x277F4A0)
#define UIPOPUP_VIDEOPLAY_GET_VIDEOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x277F4B0)
#define UIPOPUP_VIDEOPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x277F4C0)
#define UIPOPUP_VIDEOPLAY_GET_TEENAGEMODE_OFFSET UNITYSDK_OFFSET(0x277F7C0)
#define UIPOPUP_VIDEOPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x277F850)
#define UIPOPUP_VIDEOPLAY__ONCLICKCONFIRM_G__ONENDVIDEOPLAY|11_0_OFFSET UNITYSDK_OFFSET(0x277F980)

	inline static constexpr unsigned int UIPopup_VideoPlay_TypeDefinitionIndex = 7375;

	class UIPopup_VideoPlay : public Il2CppObject
	{
	public:
		UITexture* VideoTexture; // 0xD8
		UILabel* VideoLabel; // 0xE0
		MXButton* ConfirmButton; // 0xE8
		::MX::Data::VideoPlayInfo* _videoPlayInfo_k__BackingField; // 0xF0

		::System::Void set_videoPlayInfo(::MX::Data::VideoPlayInfo* arg)
		{
			((::System::Void(*)(::MX::Data::VideoPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY_SET_VIDEOPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::VideoPlayInfo* get_videoPlayInfo()
		{
			return ((::MX::Data::VideoPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY_GET_VIDEOPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TeenageMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY_GET_TEENAGEMODE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickConfirm_g__OnEndVideoPlay|11_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VIDEOPLAY__ONCLICKCONFIRM_G__ONENDVIDEOPLAY|11_0_OFFSET))(nullptr);
		}

	};

