#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
class UITexture;
namespace UnityEngine { class Transform; }
class UILabel;
namespace MX::Data { class EventContentCollectionInfo; }
class CGOrientation;

#define UIEVENTCOLLECTIONPHOTODETAILPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A4D40)
#define UIEVENTCOLLECTIONPHOTODETAILPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A2A20)
#define UIEVENTCOLLECTIONPHOTODETAILPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A4D50)
#define UIEVENTCOLLECTIONPHOTODETAILPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x24A4E70)

	inline static constexpr unsigned int UIEventCollectionPhotoDetailPopup_TypeDefinitionIndex = 5798;

	class UIEventCollectionPhotoDetailPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		::UnityEngine::Animation* popupOpenAnimation; // 0x20
		::UnityEngine::GameObject* cgLandscapeRoot; // 0x28
		UITexture* cgLandscapeTexture; // 0x30
		::UnityEngine::Transform* cgLandscapeTextRoot; // 0x38
		UILabel* cgLandscapeTitleLabel; // 0x40
		UILabel* cgLandscapeDescriptionLabel; // 0x48
		::UnityEngine::GameObject* cgPortraitRoot; // 0x50
		UITexture* cgPortraitTexture; // 0x58
		::UnityEngine::Transform* cgPortraitTextRoot; // 0x60
		UILabel* cgPortraitTitleLabel; // 0x68
		UILabel* cgPortraitDescriptionLabel; // 0x70
		UITexture* cgDecoTexture; // 0x78
		::UnityEngine::GameObject* cgObjectRoot; // 0x80
		UITexture* cgObjectTexture; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONPHOTODETAILPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentCollectionInfo* arg, CGOrientation* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentCollectionInfo*, CGOrientation*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONPHOTODETAILPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONPHOTODETAILPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONPHOTODETAILPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

	};

