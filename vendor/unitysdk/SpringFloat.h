#pragma once
#include "unitysdk.h"

#define SPRINGFLOAT_UPDATE_OFFSET UNITYSDK_OFFSET(0xB84A40)
#define SPRINGFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB85A50)

	inline static constexpr unsigned int SpringFloat_TypeDefinitionIndex = 8536;

	class SpringFloat : public Il2CppObject
	{
	public:
		::System::Single Target; // 0x10
		::System::Single Value; // 0x14
		::System::Single Velocity; // 0x18
		::System::Single Frequency; // 0x1C
		::System::Single maxReboundVelocity; // 0x20

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPRINGFLOAT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRINGFLOAT_.CTOR_OFFSET))(nullptr);
		}

	};

