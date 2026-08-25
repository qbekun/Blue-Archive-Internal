#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace UnityEngine { class Transform; }
namespace MX::Data { class EventContentCollectionInfo; }

#define UIEVENTCGOBJECTPOPUP_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x249EF70)
#define UIEVENTCGOBJECTPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x249EFB0)
#define UIEVENTCGOBJECTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x249F300)
#define UIEVENTCGOBJECTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x249F5F0)
#define UIEVENTCGOBJECTPOPUP_ONCLICKEVENTCOLLECTIONMOVEBUTTON_OFFSET UNITYSDK_OFFSET(0x249F620)

	inline static constexpr unsigned int UIEventCGObjectPopup_TypeDefinitionIndex = 5775;

	class UIEventCGObjectPopup : public Il2CppObject
	{
	public:
		MXButton* buttonX; // 0xD8
		MXButton* closeButton; // 0xE0
		MXButton* eventCollectionMoveButton; // 0xE8
		UITexture* cgHorizonTexture; // 0xF0
		UITexture* cgVerticalTexture; // 0xF8
		UITexture* objectTexture; // 0x100
		UITexture* cgDecoTexture; // 0x108
		::UnityEngine::Transform* sizeTarget; // 0x110
		::System::Single horizonScaleY; // 0x118
		::System::Single verticalScaleY; // 0x11C
		::System::Single objectScaleY; // 0x120
		::System::Int64 eventContentId; // 0x128
		::System::Action* moveUIEventContentCollectionCallback; // 0x130
		::System::Action* cancelAction; // 0x138

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCGOBJECTPOPUP_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentCollectionInfo* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::EventContentCollectionInfo*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCGOBJECTPOPUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCGOBJECTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCGOBJECTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickEventCollectionMoveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCGOBJECTPOPUP_ONCLICKEVENTCOLLECTIONMOVEBUTTON_OFFSET))(nullptr);
		}

	};

