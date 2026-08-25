#pragma once
#include "unitysdk.h"

class UITable;
class UITexture;
class UISprite;
class UILabel;
class ShopListElementData;

#define UISHOPSLOT_PACKAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB9DB0)
#define UISHOPSLOT_PACKAGE_SETDATA_OFFSET UNITYSDK_OFFSET(0xAB9DC0)
#define UISHOPSLOT_PACKAGE_ALIGNLISTTABLEREPOSITION_OFFSET UNITYSDK_OFFSET(0xABA330)

	inline static constexpr unsigned int UIShopSlot_Package_TypeDefinitionIndex = 8017;

	class UIShopSlot_Package : public Il2CppObject
	{
	public:
		UITable* alignListTable; // 0x18
		UITexture* itemIconTexture; // 0x20
		UISprite* rarityBg; // 0x28
		UILabel* itemCountLabel; // 0x30
		UILabel* itemNameLabel; // 0x38
		::Il2CppArray<::System::Object*>* packageItems; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_PACKAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(ShopListElementData* arg)
		{
			((::System::Void(*)(ShopListElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_PACKAGE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AlignListTableReposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_PACKAGE_ALIGNLISTTABLEREPOSITION_OFFSET))(nullptr);
		}

	};

