#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class UIScrollView;
class UITexture;
class ItemObject;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UINONEQUIPMENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x26B55C0)
#define UINONEQUIPMENTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x26B5690)
#define UINONEQUIPMENTINFO_SETUI_OFFSET UNITYSDK_OFFSET(0x26B5E60)
#define UINONEQUIPMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B6440)

	inline static constexpr unsigned int UINonEquipmentInfo_TypeDefinitionIndex = 6905;

	class UINonEquipmentInfo : public Il2CppObject
	{
	public:
		UILabel* NameText; // 0x18
		UISprite* RarityIcon; // 0x20
		UILabel* TierText; // 0x28
		UILabel* DescText; // 0x30
		UIScrollView* DescScroll; // 0x38
		UILabel* StackCountText; // 0x40
		UITexture* ItemImage; // 0x48
		UILabel* ExpirationDateTime; // 0x50

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINFO_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

