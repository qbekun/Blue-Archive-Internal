#pragma once
#include "../../../unitysdk.h"

class UITexture;

#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTEMPTYUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAD4C0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTEMPTYUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xEACD00)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIKeywordElementEmptyUnit_TypeDefinitionIndex = 10781;

	class UIKeywordElementEmptyUnit : public Il2CppObject
	{
	public:
		UITexture* symbolTexture; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTEMPTYUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDELEMENTEMPTYUNIT_SETDATA_OFFSET))(nullptr);
		}

	};
}

