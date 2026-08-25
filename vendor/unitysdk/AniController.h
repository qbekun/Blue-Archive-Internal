#pragma once
#include "unitysdk.h"

#define ANICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D00)

	inline static constexpr unsigned int AniController_TypeDefinitionIndex = 9877;

	class AniController : public Il2CppObject
	{
	public:
		::System::String* StateMachineName; // 0x18
		::System::Int32 State; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANICONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

