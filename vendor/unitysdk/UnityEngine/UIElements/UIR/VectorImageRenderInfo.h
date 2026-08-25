#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class GradientRemap; }
namespace UnityEngine::UIElements::UIR { class Alloc; }

#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGERENDERINFO_RESET_OFFSET UNITYSDK_OFFSET(0xA340810)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGERENDERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA340780)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int VectorImageRenderInfo_TypeDefinitionIndex = 30753;

	class VectorImageRenderInfo : public CertId
	{
	public:
		::System::Int32 useCount; // 0x18
		::UnityEngine::UIElements::UIR::GradientRemap* firstGradientRemap; // 0x20
		::UnityEngine::UIElements::UIR::Alloc* gradientSettingsAlloc; // 0x28

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGERENDERINFO_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGERENDERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

