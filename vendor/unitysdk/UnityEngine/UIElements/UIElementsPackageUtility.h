#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_UIELEMENTSPACKAGEUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA37EB10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIElementsPackageUtility_TypeDefinitionIndex = 30217;

	class UIElementsPackageUtility : public Il2CppObject
	{
	public:
		::System::String* EditorResourcesBasePath; // 0x0
		::System::Boolean IsUIEPackageLoaded; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSPACKAGEUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

