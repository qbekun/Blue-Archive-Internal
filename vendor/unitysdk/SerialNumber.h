#pragma once
#include "unitysdk.h"

#define SERIALNUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE620)

	inline static constexpr unsigned int SerialNumber_TypeDefinitionIndex = 35761;

	class SerialNumber : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALNUMBER_.CTOR_OFFSET))(nullptr);
		}

	};

