#pragma once
#include "unitysdk.h"

#define EMPTYDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int EmptyData_TypeDefinitionIndex = 30192;

	class EmptyData : public Il2CppObject
	{
	public:
		Il2CppObject* Default; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPTYDATA_.CCTOR_OFFSET))(nullptr);
		}

	};

