#pragma once
#include "unitysdk.h"

class UIEquipmentInfo;
class UIEquipmentCard;
class MXButton;
class UILabel;
class UISlider;
class EquipmentObject;

#define UIEQUIPMENTBATCHINFOPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x23FE060)
#define UIEQUIPMENTBATCHINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x23FE0F0)
#define UIEQUIPMENTBATCHINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x23FE300)
#define UIEQUIPMENTBATCHINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x23FE620)

	inline static constexpr unsigned int UIEquipmentBatchInfoPopup_TypeDefinitionIndex = 5441;

	class UIEquipmentBatchInfoPopup : public Il2CppObject
	{
	public:
		UIEquipmentInfo* equipmentInfo; // 0xD8
		UIEquipmentCard* card; // 0xE0
		MXButton* closeBtn; // 0xE8
		MXButton* confirnBtn; // 0xF0
		UILabel* expText; // 0xF8
		UISlider* levelGage; // 0x100

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHINFOPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(EquipmentObject* arg)
		{
			((::System::Void(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHINFOPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

