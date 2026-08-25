#pragma once
#include "unitysdk.h"

#define OVERUIRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D82CF0)

	inline static constexpr unsigned int OverUIResult_TypeDefinitionIndex = 20336;

	class OverUIResult : public Il2CppObject
	{
	public:
		::System::Boolean IgnoreDefender; // 0x10
		::System::Boolean Defender; // 0x11
		::System::Boolean SkillCard; // 0x12

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + OVERUIRESULT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

