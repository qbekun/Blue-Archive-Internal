#pragma once
#include "../../../unitysdk.h"

namespace MX::AppSystem::ServiceLocator { class SupportedPlatforms; }

namespace MX::AppSystem::ServiceLocator
{
	inline static constexpr unsigned int SupportedPlatforms_TypeDefinitionIndex = 37688;

	class SupportedPlatforms : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* WindowsStandalone; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* MacStandalone; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* LinuxStandalone; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* WindowsUniversal; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* WindowsEditor; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* Android; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* MacEditor; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* LinuxEditor; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* IOS; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* Web; // 0x0
		::MX::AppSystem::ServiceLocator::SupportedPlatforms* Lumin; // 0x0

	};
}

