#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class LayerMask; }

#define UNITYENGINE_RENDERING_LAYERMASKPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE38C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LayerMaskParameter_TypeDefinitionIndex = 34095;

	class LayerMaskParameter : public ::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal
	{
	public:
		::System::Void .ctor(::UnityEngine::LayerMask* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LAYERMASKPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

