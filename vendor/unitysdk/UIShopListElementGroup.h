#pragma once
#include "unitysdk.h"

class ShopListElementGroupData;
class UIShopListElement;

#define UISHOPLISTELEMENTGROUP_ADD_SELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAB4260)
#define UISHOPLISTELEMENTGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xAB4300)
#define UISHOPLISTELEMENTGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xAB4470)
#define UISHOPLISTELEMENTGROUP_REMOVE_SELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAB4590)
#define UISHOPLISTELEMENTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB4630)
#define UISHOPLISTELEMENTGROUP_ONSELECTBOXSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAB4670)
#define UISHOPLISTELEMENTGROUP_GETSHOPLISTELEMENT_OFFSET UNITYSDK_OFFSET(0xAB4690)

	inline static constexpr unsigned int UIShopListElementGroup_TypeDefinitionIndex = 7996;

	class UIShopListElementGroup : public ::System::Xml::Serialization::XmlTypeConvertorAttribute
	{
	public:
		::Il2CppArray<::System::Object*>* shopListElements; // 0x28
		::System::Action* SelectBoxStateChanged; // 0x30

		::System::Void add_SelectBoxStateChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUP_ADD_SELECTBOXSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(ShopListElementGroupData* arg)
		{
			((::System::Void(*)(ShopListElementGroupData*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SelectBoxStateChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUP_REMOVE_SELECTBOXSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSelectBoxStateChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUP_ONSELECTBOXSTATECHANGED_OFFSET))(nullptr);
		}

		UIShopListElement* GetShopListElement(::System::Int64 arg)
		{
			return ((UIShopListElement*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTGROUP_GETSHOPLISTELEMENT_OFFSET))(arg, nullptr);
		}

	};

