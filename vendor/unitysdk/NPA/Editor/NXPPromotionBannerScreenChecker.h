#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPScreenOrientationType; }

#define NPA_EDITOR_NXPPROMOTIONBANNERSCREENCHECKER_SETSCREENORIENTATIONCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x9D875B0)
#define NPA_EDITOR_NXPPROMOTIONBANNERSCREENCHECKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9D875C0)
#define NPA_EDITOR_NXPPROMOTIONBANNERSCREENCHECKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D87630)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPPromotionBannerScreenChecker_TypeDefinitionIndex = 26281;

	class NXPPromotionBannerScreenChecker : public Il2CppObject
	{
	public:
		::NPA::Editor::NXPScreenOrientationType* currentScreenOrientationType; // 0x18
		Il2CppObject* screenOrientationChangeCallback; // 0x20

		::System::Void SetScreenOrientationChangeCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNERSCREENCHECKER_SETSCREENORIENTATIONCHANGECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNERSCREENCHECKER_ONUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPPROMOTIONBANNERSCREENCHECKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

