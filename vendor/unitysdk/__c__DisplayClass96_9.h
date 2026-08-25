#pragma once
#include "unitysdk.h"

namespace MX::Data { class ItemData; }
namespace MX::GameLogic::DBModel { class ItemDB; }
class UIPopup_ParcelExchange;

#define <>C__DISPLAYCLASS96_9_.CTOR_OFFSET UNITYSDK_OFFSET(0x2662CB0)
#define <>C__DISPLAYCLASS96_9__ADDPOPUPS_B__47_OFFSET UNITYSDK_OFFSET(0x2662CC0)
#define <>C__DISPLAYCLASS96_9__ADDPOPUPS_B__48_OFFSET UNITYSDK_OFFSET(0x2662D20)
#define <>C__DISPLAYCLASS96_9__ADDPOPUPS_B__49_OFFSET UNITYSDK_OFFSET(0x2662E10)

	inline static constexpr unsigned int <>c__DisplayClass96_9_TypeDefinitionIndex = 6652;

	class <>c__DisplayClass96_9 : public Il2CppObject
	{
	public:
		::MX::Data::ItemData* itemData; // 0x10
		Il2CppObject* list; // 0x18
		::System::String* title; // 0x20
		::System::String* message; // 0x28
		::System::Boolean trackCompleted; // 0x30
		::System::Action* __9__49; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_9_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddPopups_b__47(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_9__ADDPOPUPS_B__47_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__48(UIPopup_ParcelExchange* arg)
		{
			((::System::Void(*)(UIPopup_ParcelExchange*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_9__ADDPOPUPS_B__48_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__49()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_9__ADDPOPUPS_B__49_OFFSET))(nullptr);
		}

	};

