#pragma once
#include "unitysdk.h"

#define POWEROVFL_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7280)

	inline static constexpr unsigned int PowerOvfl_TypeDefinitionIndex = 24024;

	class PowerOvfl : public Il2CppObject
	{
	public:
		::System::UInt32 Hi; // 0x10
		::System::UInt64 MidLo; // 0x18

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + POWEROVFL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

