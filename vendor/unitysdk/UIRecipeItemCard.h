#pragma once
#include "unitysdk.h"

class UINonEquipmentCard;
class UIEquipmentCard;
class UILabel;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIRECIPEITEMCARD_GET_ISENOUGHITEM_OFFSET UNITYSDK_OFFSET(0x2345A10)
#define UIRECIPEITEMCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x2345A50)
#define UIRECIPEITEMCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2345ED0)

	inline static constexpr unsigned int UIRecipeItemCard_TypeDefinitionIndex = 5000;

	class UIRecipeItemCard : public Il2CppObject
	{
	public:
		UINonEquipmentCard* nonEquipmentCard; // 0x18
		UIEquipmentCard* equipmentCard; // 0x20
		UILabel* amountLebel; // 0x28
		::System::Boolean isEnoughItem; // 0x30

		::System::Boolean get_IsEnoughItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECIPEITEMCARD_GET_ISENOUGHITEM_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECIPEITEMCARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECIPEITEMCARD_.CTOR_OFFSET))(nullptr);
		}

	};

