#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace MX::Data { class StickerInfo; }

#define UIPOPUP_STICKERBOOKLISTDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xB31600)
#define UIPOPUP_STICKERBOOKLISTDETAIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB31610)
#define UIPOPUP_STICKERBOOKLISTDETAIL_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB31630)
#define UIPOPUP_STICKERBOOKLISTDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0xB316C0)
#define UIPOPUP_STICKERBOOKLISTDETAIL___N__0_OFFSET UNITYSDK_OFFSET(0xB317F0)

	inline static constexpr unsigned int UIPopup_StickerBookListDetail_TypeDefinitionIndex = 8294;

	class UIPopup_StickerBookListDetail : public Il2CppObject
	{
	public:
		MXButton* Back; // 0xD8
		UITexture* Image; // 0xE0
		::MX::Data::StickerInfo* stickerInfo; // 0xE8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKLISTDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::StickerInfo* arg)
		{
			((::System::Void(*)(::MX::Data::StickerInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKLISTDETAIL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKLISTDETAIL_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKLISTDETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKLISTDETAIL___N__0_OFFSET))(nullptr);
		}

	};

