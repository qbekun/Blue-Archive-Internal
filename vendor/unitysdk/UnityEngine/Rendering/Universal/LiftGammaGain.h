#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class Vector4Parameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064370)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA064480)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA064520)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LiftGammaGain_TypeDefinitionIndex = 32679;

	class LiftGammaGain : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Vector4Parameter* lift; // 0x30
		::UnityEngine::Rendering::Vector4Parameter* gamma; // 0x38
		::UnityEngine::Rendering::Vector4Parameter* gain; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIFTGAMMAGAIN_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

	};
}

