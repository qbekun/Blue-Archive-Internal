#pragma once
#include "unitysdk.h"

#define SETACTIVEFALSEINNSEC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x205DE10)
#define SETACTIVEFALSEINNSEC_.CTOR_OFFSET UNITYSDK_OFFSET(0x205DE40)
#define SETACTIVEFALSEINNSEC_UPDATE_OFFSET UNITYSDK_OFFSET(0x205DE60)

	inline static constexpr unsigned int SetActiveFalseInNSec_TypeDefinitionIndex = 3374;

	class SetActiveFalseInNSec : public Il2CppObject
	{
	public:
		::System::Single Duration; // 0x18
		::System::Boolean UnscaledTime; // 0x1C
		::System::Single setActiveFalseTime; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETACTIVEFALSEINNSEC_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETACTIVEFALSEINNSEC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETACTIVEFALSEINNSEC_UPDATE_OFFSET))(nullptr);
		}

	};

