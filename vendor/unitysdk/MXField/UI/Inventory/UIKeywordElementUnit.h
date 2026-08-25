#pragma once
#include "../../../unitysdk.h"

class UILabel;
namespace MXField::Shared::Data { class FieldKeywordInfo; }

#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xEACE20)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAD930)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIKeywordElementUnit_TypeDefinitionIndex = 10784;

	class UIKeywordElementUnit : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x18
		UILabel* descriptionLabel; // 0x20

		::System::Void SetData(::MXField::Shared::Data::FieldKeywordInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldKeywordInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTUNIT_.CTOR_OFFSET))(nullptr);
		}

	};
}

