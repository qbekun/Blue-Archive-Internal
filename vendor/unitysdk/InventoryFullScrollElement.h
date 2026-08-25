#pragma once
#include "unitysdk.h"

class UIEquipmentCard;
class UINonEquipmentCard;
class UILabel;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define INVENTORYFULLSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2701E70)
#define INVENTORYFULLSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2701EB0)

	inline static constexpr unsigned int InventoryFullScrollElement_TypeDefinitionIndex = 7082;

	class InventoryFullScrollElement : public ::System::Xml::Serialization::XmlNodeEventArgs
	{
	public:
		UIEquipmentCard* equipmentCard; // 0x28
		UINonEquipmentCard* nonEquipmentCard; // 0x30
		UILabel* nameLabel; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFULLSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFULLSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

