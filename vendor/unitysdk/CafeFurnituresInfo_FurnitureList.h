#pragma once
#include "unitysdk.h"

#define CAFEFURNITURESINFO_FURNITURELIST_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x225E260)
#define CAFEFURNITURESINFO_FURNITURELIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x225F3F0)
#define CAFEFURNITURESINFO_FURNITURELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x225F430)

	inline static constexpr unsigned int CafeFurnituresInfo_FurnitureList_TypeDefinitionIndex = 4566;

	class CafeFurnituresInfo_FurnitureList : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITURELIST_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITURELIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITURELIST_.CTOR_OFFSET))(nullptr);
		}

	};

