#pragma once
#include "unitysdk.h"

class TimeScaleHandler;

#define <>C__DISPLAYCLASS14_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS14_0`1__RESUME_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass14_0`1_TypeDefinitionIndex = 3057;

	class <>c__DisplayClass14_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* client; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Resume_b__0(TimeScaleHandler* arg)
		{
			return ((::System::Boolean(*)(TimeScaleHandler*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_0`1__RESUME_B__0_OFFSET))(arg, nullptr);
		}

	};

