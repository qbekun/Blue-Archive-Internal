#pragma once
#include "../../../unitysdk.h"

#define MX_APPSYSTEM_SERVICELOCATOR_BASEAPPPROFILE_GET_ISCUSTOMPROFILE_OFFSET UNITYSDK_OFFSET(0xA312A0)
#define MX_APPSYSTEM_SERVICELOCATOR_BASEAPPPROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA312B0)

namespace MX::AppSystem::ServiceLocator
{
	inline static constexpr unsigned int BaseAppProfile_TypeDefinitionIndex = 37693;

	class BaseAppProfile : public Il2CppObject
	{
	public:
		::System::Boolean isCustomProfile; // 0x18

		::System::Boolean get_IsCustomProfile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_BASEAPPPROFILE_GET_ISCUSTOMPROFILE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPSYSTEM_SERVICELOCATOR_BASEAPPPROFILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

