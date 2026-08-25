#pragma once
#include "unitysdk.h"

#define DELAYANIMATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D15A0)
#define DELAYANIMATIONDATA_COPLAY_OFFSET UNITYSDK_OFFSET(0x20D15B0)

	inline static constexpr unsigned int DelayAnimationData_TypeDefinitionIndex = 3708;

	class DelayAnimationData : public Il2CppObject
	{
	public:
		::System::Single duration; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYANIMATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYANIMATIONDATA_COPLAY_OFFSET))(nullptr);
		}

	};

