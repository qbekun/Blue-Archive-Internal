#pragma once
#include "unitysdk.h"

#define UPDATEFLOATCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C0AA0)

	inline static constexpr unsigned int UpdateFloatContainer_TypeDefinitionIndex = 3633;

	class UpdateFloatContainer : public Il2CppObject
	{
	public:
		::System::Single TargetValue; // 0x10
		::System::Single PreviousTargetValue; // 0x14
		::System::Single StartValue; // 0x18
		::System::Single DiffValue; // 0x1C
		::System::Single CurrentValue; // 0x20
		::System::Int32 StartTimeMs; // 0x24
		::System::Int32 DurationMs; // 0x28

		::System::Void .ctor(::System::Single arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEFLOATCONTAINER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

