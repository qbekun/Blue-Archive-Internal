#pragma once
#include "unitysdk.h"

class UIStickerBookListNormalUnit;
namespace MX::Data { class StickerInfo; }

#define UIPOPUP_STICKERBOOKUNLOCK_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB32680)
#define UIPOPUP_STICKERBOOKUNLOCK___N__0_OFFSET UNITYSDK_OFFSET(0xB32710)
#define UIPOPUP_STICKERBOOKUNLOCK_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB32720)
#define UIPOPUP_STICKERBOOKUNLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0xB327C0)
#define UIPOPUP_STICKERBOOKUNLOCK__ONOPENED_B__5_0_OFFSET UNITYSDK_OFFSET(0xB327D0)
#define UIPOPUP_STICKERBOOKUNLOCK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB31580)

	inline static constexpr unsigned int UIPopup_StickerBookUnlock_TypeDefinitionIndex = 8298;

	class UIPopup_StickerBookUnlock : public Il2CppObject
	{
	public:
		UIStickerBookListNormalUnit* Sticker; // 0xD8
		::MX::Data::StickerInfo* stickerInfo; // 0xE0
		::System::Action* onComplete; // 0xE8

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKUNLOCK_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKUNLOCK___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKUNLOCK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKUNLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKUNLOCK__ONOPENED_B__5_0_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::StickerInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::StickerInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STICKERBOOKUNLOCK_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

