#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }

#define INVENTORYFULLSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2701AE0)
#define INVENTORYFULLSCROLLCONTROLLER_GET_SHORTCUTTYPE_OFFSET UNITYSDK_OFFSET(0x2701B20)

	inline static constexpr unsigned int InventoryFullScrollController_TypeDefinitionIndex = 7081;

	class InventoryFullScrollController : public ::System::Xml::XmlNamedNodeMap
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFULLSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ShortcutType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFULLSCROLLCONTROLLER_GET_SHORTCUTTYPE_OFFSET))(nullptr);
		}

	};

