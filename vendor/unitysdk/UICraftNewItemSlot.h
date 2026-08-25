#pragma once
#include "unitysdk.h"

class UILabel;
class UINonEquipmentCard;
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define UICRAFTNEWITEMSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x23922E0)
#define UICRAFTNEWITEMSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2392430)

	inline static constexpr unsigned int UICraftNewItemSlot_TypeDefinitionIndex = 5155;

	class UICraftNewItemSlot : public ::System::Xml::Serialization::XmlTypeSerializationSource
	{
	public:
		UILabel* itemNameLabel; // 0x28
		UINonEquipmentCard* card; // 0x30

		::System::Void SetData(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNEWITEMSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTNEWITEMSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

