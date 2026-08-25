#pragma once
#include "unitysdk.h"

#define POPUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1852130)

	inline static constexpr unsigned int PopupData_TypeDefinitionIndex = 15850;

	class PopupData : public Il2CppObject
	{
	public:
		::System::String* ButtonName; // 0x10
		::System::String* KeyMappingID; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPUPDATA_.CTOR_OFFSET))(nullptr);
		}

	};

