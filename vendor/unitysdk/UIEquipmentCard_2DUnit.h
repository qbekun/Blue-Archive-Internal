#pragma once
#include "unitysdk.h"

#define UIEQUIPMENTCARD_2DUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2206720)

	inline static constexpr unsigned int UIEquipmentCard_2DUnit_TypeDefinitionIndex = 4331;

	class UIEquipmentCard_2DUnit : public Result
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCARD_2DUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

