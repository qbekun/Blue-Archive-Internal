#pragma once
#include "unitysdk.h"

class MXButton;
class UIStatDetailSlot;
class UIGrid;
class UILabel;
class CharacterDetailData;

#define UIPOPUP_STATDETAIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22C7950)
#define UIPOPUP_STATDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x22C86E0)
#define UIPOPUP_STATDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C8810)
#define UIPOPUP_STATDETAIL_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x22C8890)

	inline static constexpr unsigned int UIPopup_StatDetail_TypeDefinitionIndex = 4813;

	class UIPopup_StatDetail : public Il2CppObject
	{
	public:
		MXButton* XButton; // 0xD8
		UIStatDetailSlot* SlotPrefab; // 0xE0
		UIGrid* Grid; // 0xE8
		UILabel* TitleLabel; // 0xF0
		Il2CppObject* SlotList; // 0xF8

		::System::Void Initialize(CharacterDetailData* arg)
		{
			((::System::Void(*)(CharacterDetailData*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STATDETAIL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STATDETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STATDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STATDETAIL_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

