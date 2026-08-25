#pragma once
#include "unitysdk.h"

namespace FlatData { class ShopGroupType; }

#define UISHOPTABDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xABA990)
#define UISHOPTABDISPLAY_SETPARCELICON_OFFSET UNITYSDK_OFFSET(0xABA9A0)
#define UISHOPTABDISPLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xAA96C0)
#define UISHOPTABDISPLAY_SETNAME_OFFSET UNITYSDK_OFFSET(0xABAD50)

	inline static constexpr unsigned int UIShopTabDisplay_TypeDefinitionIndex = 8020;

	class UIShopTabDisplay : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* spriteRoots; // 0x18
		::Il2CppArray<::System::Object*>* iconSprites; // 0x20
		::Il2CppArray<::System::Object*>* skewingIconSprites; // 0x28
		::Il2CppArray<::System::Object*>* nameLabels; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPTABDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetParcelIcon(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPTABDISPLAY_SETPARCELICON_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPTABDISPLAY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetName(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPTABDISPLAY_SETNAME_OFFSET))(arg, nullptr);
		}

	};

