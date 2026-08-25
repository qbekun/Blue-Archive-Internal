#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ShopFilterClassifiedExcel; }

#define ITEMFILTERSHOPRESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC390)
#define ITEMFILTERSHOPRESOURCE_RESETSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FCB470)
#define ITEMFILTERSHOPRESOURCE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCDA40)
#define ITEMFILTERSHOPRESOURCE_SAVESELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FCBE00)
#define ITEMFILTERSHOPRESOURCE_GET_SHOPRESOURCEPARCELKEYPAIRS_OFFSET UNITYSDK_OFFSET(0x1FCDB10)
#define ITEMFILTERSHOPRESOURCE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB180)
#define ITEMFILTERSHOPRESOURCE_SETRESOURCEPARCELKEYPAIRS_OFFSET UNITYSDK_OFFSET(0x1FCDB20)
#define ITEMFILTERSHOPRESOURCE_LOADSELECTEDFILTERSLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FCBB40)

	inline static constexpr unsigned int ItemFilterShopResource_TypeDefinitionIndex = 2995;

	class ItemFilterShopResource : public ::MX::Logic::Actions::GroggyAction
	{
	public:
		Il2CppObject* selectedFilterTypes; // 0x28
		Il2CppObject* shopResourceParcelKeyPairs; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_RESETSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SaveSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_SAVESELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopResourceParcelKeyPairs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_GET_SHOPRESOURCEPARCELKEYPAIRS_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(::MX::Data::Excel::ShopFilterClassifiedExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopFilterClassifiedExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetResourceParcelKeyPairs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_SETRESOURCEPARCELKEYPAIRS_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSelectedFiltersLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHOPRESOURCE_LOADSELECTEDFILTERSLOCALLY_OFFSET))(nullptr);
		}

	};

