#pragma once
#include "unitysdk.h"

#define EVENTCONTENTBANNEROPENCONDITIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EC25C0)
#define EVENTCONTENTBANNEROPENCONDITIONCONTROLLER_COPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1EC26C0)

	inline static constexpr unsigned int EventContentBannerOpenConditionController_TypeDefinitionIndex = 1760;

	class EventContentBannerOpenConditionController : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBANNEROPENCONDITIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBANNEROPENCONDITIONCONTROLLER_COPLAYANIMATION_OFFSET))(nullptr);
		}

	};

