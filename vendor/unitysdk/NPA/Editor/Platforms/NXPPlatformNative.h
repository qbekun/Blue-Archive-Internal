#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Platforms { class INXPNativeDynamicLoader; }

#define NPA_EDITOR_PLATFORMS_NXPPLATFORMNATIVE_GET_DYNAMICLOADER_OFFSET UNITYSDK_OFFSET(0x9C13C90)
#define NPA_EDITOR_PLATFORMS_NXPPLATFORMNATIVE_CREATELOADER_OFFSET UNITYSDK_OFFSET(0x9C13CE0)
#define NPA_EDITOR_PLATFORMS_NXPPLATFORMNATIVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C13F10)

namespace NPA::Editor::Platforms
{
	inline static constexpr unsigned int NXPPlatformNative_TypeDefinitionIndex = 26589;

	class NXPPlatformNative : public Il2CppObject
	{
	public:
		::NPA::Editor::Platforms::INXPNativeDynamicLoader* _DynamicLoader_k__BackingField; // 0x0

		::NPA::Editor::Platforms::INXPNativeDynamicLoader* get_DynamicLoader()
		{
			return (return (::NPA::Editor::Platforms::INXPNativeDynamicLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_NXPPLATFORMNATIVE_GET_DYNAMICLOADER_OFFSET))(nullptr);
		}

		::NPA::Editor::Platforms::INXPNativeDynamicLoader* CreateLoader()
		{
			return (return (::NPA::Editor::Platforms::INXPNativeDynamicLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_NXPPLATFORMNATIVE_CREATELOADER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_NXPPLATFORMNATIVE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

