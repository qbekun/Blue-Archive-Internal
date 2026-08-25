#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ICustomStyle; }

#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLERESOLVEDEVENT_GET_CUSTOMSTYLE_OFFSET UNITYSDK_OFFSET(0xA3FE6E0)
#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLERESOLVEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FE760)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CustomStyleResolvedEvent_TypeDefinitionIndex = 30543;

	class CustomStyleResolvedEvent : public <>c__DisplayClass48_1
	{
	public:
		::UnityEngine::UIElements::ICustomStyle* get_customStyle()
		{
			return (return (::UnityEngine::UIElements::ICustomStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLERESOLVEDEVENT_GET_CUSTOMSTYLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLERESOLVEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

