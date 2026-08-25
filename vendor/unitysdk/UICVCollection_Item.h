#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class CVCollectionInfo;
namespace MX::Data { class LocalizeData; }
class UIPopup_CVCollection;
class UIPopup_System;
class MessagePopupPayload;

#define UICVCOLLECTION_ITEM_TRYPLAYCLIP_OFFSET UNITYSDK_OFFSET(0x2324F50)
#define UICVCOLLECTION_ITEM__TRYPLAYCLIP_B__15_0_OFFSET UNITYSDK_OFFSET(0x23251B0)
#define UICVCOLLECTION_ITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x2326120)
#define UICVCOLLECTION_ITEM_CO_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x2325120)
#define UICVCOLLECTION_ITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2326400)
#define UICVCOLLECTION_ITEM_SETPLAYINGICON_OFFSET UNITYSDK_OFFSET(0x2326350)
#define UICVCOLLECTION_ITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2326440)
#define UICVCOLLECTION_ITEM_CREATEMESSAGEPOPUPPAYLOAD_OFFSET UNITYSDK_OFFSET(0x2325220)

	inline static constexpr unsigned int UICVCollection_Item_TypeDefinitionIndex = 4923;

	class UICVCollection_Item : public ::System::Xml::Ucs4Encoding1234
	{
	public:
		::UnityEngine::GameObject* LockObject; // 0x28
		::UnityEngine::GameObject* Type1Root; // 0x30
		UILabel* Type1description; // 0x38
		UILabel* Type1FavorLevel; // 0x40
		::UnityEngine::GameObject* Type2Root; // 0x48
		UILabel* Type2description; // 0x50
		MXButton* AudioClipPlayButton; // 0x58
		::UnityEngine::GameObject* playingIcon; // 0x60
		CVCollectionInfo* cvInfo; // 0x68
		::MX::Data::LocalizeData* localData; // 0x70
		::System::Boolean isUnlocked; // 0x78
		UIPopup_CVCollection* uiParent; // 0x80

		::System::Void TryPlayClip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM_TRYPLAYCLIP_OFFSET))(nullptr);
		}

		::System::Void _TryPlayClip_b__15_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM__TRYPLAYCLIP_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(CVCollectionInfo* arg)
		{
			((::System::Void(*)(CVCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayClip(CVCollectionInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(CVCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM_CO_PLAYCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetPlayingIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM_SETPLAYINGICON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM_AWAKE_OFFSET))(nullptr);
		}

		MessagePopupPayload* CreateMessagePopupPayload()
		{
			return ((MessagePopupPayload*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICVCOLLECTION_ITEM_CREATEMESSAGEPOPUPPAYLOAD_OFFSET))(nullptr);
		}

	};

