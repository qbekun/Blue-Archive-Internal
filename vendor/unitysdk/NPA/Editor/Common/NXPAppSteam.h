#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Service { class LaunchMode; }

#define NPA_EDITOR_COMMON_NXPAPPSTEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C458C0)
#define NPA_EDITOR_COMMON_NXPAPPSTEAM_GETLAUNCHMODE_OFFSET UNITYSDK_OFFSET(0x9C45990)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppSteam_TypeDefinitionIndex = 26841;

	class NXPAppSteam : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPSTEAM_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Service::LaunchMode* GetLaunchMode()
		{
			return (return (::NPA::Editor::Service::LaunchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPSTEAM_GETLAUNCHMODE_OFFSET))(nullptr);
		}

	};
}

