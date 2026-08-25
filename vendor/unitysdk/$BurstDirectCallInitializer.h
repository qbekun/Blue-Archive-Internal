#pragma once
#include "unitysdk.h"

#define $BURSTDIRECTCALLINITIALIZER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E368C0)

	inline static constexpr unsigned int $BurstDirectCallInitializer_TypeDefinitionIndex = 37281;

	class $BurstDirectCallInitializer : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + $BURSTDIRECTCALLINITIALIZER_INITIALIZE_OFFSET))(nullptr);
		}

	};

