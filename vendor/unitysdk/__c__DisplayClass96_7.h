#pragma once
#include "unitysdk.h"

namespace MX::Data { class ItemData; }
namespace MX::GameLogic::DBModel { class ItemDB; }
class UIPopup_NonEquipmentItem;

#define <>C__DISPLAYCLASS96_7_.CTOR_OFFSET UNITYSDK_OFFSET(0x26628D0)
#define <>C__DISPLAYCLASS96_7__ADDPOPUPS_B__41_OFFSET UNITYSDK_OFFSET(0x26628E0)
#define <>C__DISPLAYCLASS96_7__ADDPOPUPS_B__42_OFFSET UNITYSDK_OFFSET(0x2662940)
#define <>C__DISPLAYCLASS96_7__ADDPOPUPS_B__43_OFFSET UNITYSDK_OFFSET(0x2662AB0)

	inline static constexpr unsigned int <>c__DisplayClass96_7_TypeDefinitionIndex = 6650;

	class <>c__DisplayClass96_7 : public Il2CppObject
	{
	public:
		::MX::Data::ItemData* itemData; // 0x10
		Il2CppObject* deletedItems; // 0x18
		::System::Boolean trackCompleted; // 0x20
		::System::Action* __9__43; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_7_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddPopups_b__41(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_7__ADDPOPUPS_B__41_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__42(UIPopup_NonEquipmentItem* arg)
		{
			((::System::Void(*)(UIPopup_NonEquipmentItem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_7__ADDPOPUPS_B__42_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__43()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_7__ADDPOPUPS_B__43_OFFSET))(nullptr);
		}

	};

