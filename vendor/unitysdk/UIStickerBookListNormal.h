#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
class UIStickerBookIndicator;
class MXButton;
class UIStickerBookListNormalUnit;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace UnityEngine { class Texture; }

#define UISTICKERBOOKLISTNORMAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB33FC0)
#define UISTICKERBOOKLISTNORMAL_ONPREV_OFFSET UNITYSDK_OFFSET(0xB34940)
#define UISTICKERBOOKLISTNORMAL_ENDUNLOCKANI_OFFSET UNITYSDK_OFFSET(0xB34A00)
#define UISTICKERBOOKLISTNORMAL_COINITPAGE_OFFSET UNITYSDK_OFFSET(0xB34A60)
#define UISTICKERBOOKLISTNORMAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xB34B10)
#define UISTICKERBOOKLISTNORMAL__INITIALIZE_B__17_0_OFFSET UNITYSDK_OFFSET(0xB34B20)
#define UISTICKERBOOKLISTNORMAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xB34B50)
#define UISTICKERBOOKLISTNORMAL_ONNEXT_OFFSET UNITYSDK_OFFSET(0xB34E40)
#define UISTICKERBOOKLISTNORMAL_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB34E60)
#define UISTICKERBOOKLISTNORMAL_INITPAGE_OFFSET UNITYSDK_OFFSET(0xB34960)
#define UISTICKERBOOKLISTNORMAL_REFRESHPAGE_OFFSET UNITYSDK_OFFSET(0xB34A30)

	inline static constexpr unsigned int UIStickerBookListNormal_TypeDefinitionIndex = 8308;

	class UIStickerBookListNormal : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Stickers; // 0xD8
		UILabel* Title; // 0xE0
		UILabel* Description; // 0xE8
		UITexture* Image; // 0xF0
		::UnityEngine::GameObject* CompleteIcon; // 0xF8
		UIStickerBookIndicator* Indicator; // 0x100
		MXButton* Back; // 0x108
		MXButton* Prev; // 0x110
		MXButton* Next; // 0x118
		::System::Int64 groupId; // 0x120
		::System::Int64 PageCompleteSlot; // 0x128
		Il2CppObject* allPageInfos; // 0x130
		Il2CppObject* allPageHasInfo; // 0x138
		::System::Int64 curPageId; // 0x140
		::System::Int64 maxPageId; // 0x148

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_ONPREV_OFFSET))(nullptr);
		}

		::System::Void EndUnlockAni(UIStickerBookListNormalUnit* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(UIStickerBookListNormalUnit*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_ENDUNLOCKANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoInitPage(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_COINITPAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__17_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL__INITIALIZE_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_ONNEXT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void InitPage(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_INITPAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshPage(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKLISTNORMAL_REFRESHPAGE_OFFSET))(arg, nullptr);
		}

	};

