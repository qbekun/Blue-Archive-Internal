#pragma once
#include "unitysdk.h"

#define BOOLFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB24A0)

	inline static constexpr unsigned int BoolField_TypeDefinitionIndex = 33957;

	class BoolField : public ::MX::Logic::Actions::ActionLock
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLFIELD_.CTOR_OFFSET))(nullptr);
		}

	};

