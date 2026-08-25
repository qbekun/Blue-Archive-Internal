#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_IGRAPHICENABLEDDISABLED_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IGraphicEnabledDisabled_TypeDefinitionIndex = 34772;

	class IGraphicEnabledDisabled : public Il2CppObject
	{
	public:
		::System::Void OnSiblingGraphicEnabledDisabled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IGRAPHICENABLEDDISABLED_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET))(nullptr);
		}

	};
}

