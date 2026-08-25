#pragma once
#include "unitysdk.h"

#define EQUIPMENTFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAE9C00)
#define EQUIPMENTFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE9C10)

	inline static constexpr unsigned int EquipmentFilterTabController_TypeDefinitionIndex = 8103;

	class EquipmentFilterTabController : public AstType
	{
	public:
		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

