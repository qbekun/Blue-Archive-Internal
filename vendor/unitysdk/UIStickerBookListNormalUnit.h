#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
class StickerHasInfo;
namespace MX::Data { class StickerInfo; }
namespace UnityEngine { class Animation; }
class UIPopup_StickerBookAttach;
class UIPopup_StickerBookListDetail;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UISTICKERBOOKLISTNORMALUNIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB35AD0)
#define UISTICKERBOOKLISTNORMALUNIT_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0xB35CF0)
#define UISTICKERBOOKLISTNORMALUNIT_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB35DC0)
#define UISTICKERBOOKLISTNORMALUNIT_DISABLESTICKER_OFFSET UNITYSDK_OFFSET(0xB35EB0)
#define UISTICKERBOOKLISTNORMALUNIT_INITSTICKER_OFFSET UNITYSDK_OFFSET(0xB35BA0)
#define UISTICKERBOOKLISTNORMALUNIT__ONCLICK_B__18_0_OFFSET UNITYSDK_OFFSET(0xB35F50)
#define UISTICKERBOOKLISTNORMALUNIT_SET_HASINFO_OFFSET UNITYSDK_OFFSET(0xB35F80)
#define UISTICKERBOOKLISTNORMALUNIT_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0xB35F90)
#define UISTICKERBOOKLISTNORMALUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB35FA0)
#define UISTICKERBOOKLISTNORMALUNIT_PLAYUNLOCKSTICKER_OFFSET UNITYSDK_OFFSET(0xB35FF0)
#define UISTICKERBOOKLISTNORMALUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB36070)
#define UISTICKERBOOKLISTNORMALUNIT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB36100)
#define UISTICKERBOOKLISTNORMALUNIT__OPENDETAIL_B__19_0_OFFSET UNITYSDK_OFFSET(0xB36110)
#define UISTICKERBOOKLISTNORMALUNIT_ONENDUNLOCK_OFFSET UNITYSDK_OFFSET(0xB361C0)

	inline static constexpr unsigned int UIStickerBookListNormalUnit_TypeDefinitionIndex = 8310;

	class UIStickerBookListNormalUnit : public Il2CppObject
	{
	public:
		UITexture* Texture; // 0x18
		::UnityEngine::GameObject* CanUnlock; // 0x20
		::UnityEngine::GameObject* UnlockFx; // 0x28
		StickerHasInfo* _HasInfo_k__BackingField; // 0x30
		::MX::Data::StickerInfo* stickerInfo; // 0x38
		::UnityEngine::Animation* ani; // 0x40
		::System::String* canUnlockLoopAni; // 0x48
		::System::String* fadeOutAni; // 0x50
		::System::String* unLockAni; // 0x58

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_OPENDETAIL_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void DisableSticker()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_DISABLESTICKER_OFFSET))(nullptr);
		}

		::System::Void InitSticker(StickerHasInfo* arg)
		{
			((::System::Void(*)(StickerHasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_INITSTICKER_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClick_b__18_0(UIPopup_StickerBookAttach* arg)
		{
			((::System::Void(*)(UIPopup_StickerBookAttach*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT__ONCLICK_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasInfo(StickerHasInfo* arg)
		{
			((::System::Void(*)(StickerHasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_SET_HASINFO_OFFSET))(arg, nullptr);
		}

		StickerHasInfo* get_HasInfo()
		{
			return ((StickerHasInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_GET_HASINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void PlayUnlockSticker(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_PLAYUNLOCKSTICKER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OpenDetail_b__19_0(UIPopup_StickerBookListDetail* arg)
		{
			((::System::Void(*)(UIPopup_StickerBookListDetail*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT__OPENDETAIL_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndUnlock(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMALUNIT_ONENDUNLOCK_OFFSET))(arg, nullptr);
		}

	};

