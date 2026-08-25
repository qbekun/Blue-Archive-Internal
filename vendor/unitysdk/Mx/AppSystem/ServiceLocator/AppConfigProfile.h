#pragma once
#include "../../../unitysdk.h"

#define MX_APPSYSTEM_SERVICELOCATOR_APPCONFIGPROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA312C0)

namespace MX::AppSystem::ServiceLocator
{
	inline static constexpr unsigned int AppConfigProfile_TypeDefinitionIndex = 37694;

	class AppConfigProfile : public ::TriInspector::HideInEditModeAttribute
	{
	public:
		::System::String* manifestLocation; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_APPCONFIGPROFILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

