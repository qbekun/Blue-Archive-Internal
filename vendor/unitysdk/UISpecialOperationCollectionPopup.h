#pragma once
#include "unitysdk.h"

class MXButton;
class UISprite;
class UITexture;
class UILabel;
class UIScrollView;
namespace MX::Data { class EventContentCollectionInfo; }
namespace MX::Data { class ScenarioCollectionInfo; }

#define UISPECIALOPERATIONCOLLECTIONPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A8120)
#define UISPECIALOPERATIONCOLLECTIONPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A7730)
#define UISPECIALOPERATIONCOLLECTIONPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A7E50)
#define UISPECIALOPERATIONCOLLECTIONPOPUP_RESETCOLLECTIONSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x24A8250)
#define UISPECIALOPERATIONCOLLECTIONPOPUP_ONCLOSEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x24A8280)
#define UISPECIALOPERATIONCOLLECTIONPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A82A0)

	inline static constexpr unsigned int UISpecialOperationCollectionPopup_TypeDefinitionIndex = 5817;

	class UISpecialOperationCollectionPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UISprite* emblemIcon; // 0xE0
		UITexture* collectionIcon; // 0xE8
		UILabel* collectionName; // 0xF0
		UILabel* collectionSubName; // 0xF8
		UILabel* collectionDescription; // 0x100
		UIScrollView* collectionScrollView; // 0x108

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentCollectionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::ScenarioCollectionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ScenarioCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ResetCollectionScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONPOPUP_RESETCOLLECTIONSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnCloseButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONPOPUP_ONCLOSEBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTIONPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

