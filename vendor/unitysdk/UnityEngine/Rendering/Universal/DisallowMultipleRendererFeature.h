#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DISALLOWMULTIPLERENDERERFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA069ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DISALLOWMULTIPLERENDERERFEATURE_GET_CUSTOMTITLE_OFFSET UNITYSDK_OFFSET(0xA069F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DISALLOWMULTIPLERENDERERFEATURE_SET_CUSTOMTITLE_OFFSET UNITYSDK_OFFSET(0xA069F10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DisallowMultipleRendererFeature_TypeDefinitionIndex = 32730;

	class DisallowMultipleRendererFeature : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _customTitle_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DISALLOWMULTIPLERENDERERFEATURE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_customTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DISALLOWMULTIPLERENDERERFEATURE_GET_CUSTOMTITLE_OFFSET))(nullptr);
		}

		::System::Void set_customTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DISALLOWMULTIPLERENDERERFEATURE_SET_CUSTOMTITLE_OFFSET))(str, nullptr);
		}

	};
}

