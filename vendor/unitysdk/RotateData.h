#pragma once
#include "unitysdk.h"

#define ROTATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDB940)

	inline static constexpr unsigned int RotateData_TypeDefinitionIndex = 9171;

	class RotateData : public Il2CppObject
	{
	public:
		::System::Single MinAngle; // 0x10
		::System::Single MaxAngle; // 0x14
		::System::Single Speed; // 0x18
		::System::Int32 Count; // 0x1C
		::System::Boolean ClockWise; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROTATEDATA_.CTOR_OFFSET))(nullptr);
		}

	};

