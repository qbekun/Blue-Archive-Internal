#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Rect; }

#define UNITYENGINE_UIELEMENTS_UIR_DRAWPARAMS_RESET_OFFSET UNITYSDK_OFFSET(0xA34C6F0)
#define UNITYENGINE_UIELEMENTS_UIR_DRAWPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3463C0)
#define UNITYENGINE_UIELEMENTS_UIR_DRAWPARAMS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA34EF10)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int DrawParams_TypeDefinitionIndex = 30782;

	class DrawParams : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* k_UnlimitedRect; // 0x0
		::UnityEngine::Rect* k_FullNormalizedRect; // 0x10
		Il2CppObject* view; // 0x10
		Il2CppObject* scissor; // 0x18
		Il2CppObject* renderTexture; // 0x20
		Il2CppObject* defaultMaterial; // 0x28

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_DRAWPARAMS_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_DRAWPARAMS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_DRAWPARAMS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

