#pragma once
#include "unitysdk.h"

#define EROSIONTOPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF050)

	inline static constexpr unsigned int ErosionToPlay_TypeDefinitionIndex = 19957;

	class ErosionToPlay : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x10
		::System::DateTime* CreateDate; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EROSIONTOPLAY_.CTOR_OFFSET))(nullptr);
		}

	};

