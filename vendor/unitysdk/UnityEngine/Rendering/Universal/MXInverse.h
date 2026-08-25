#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXINVERSE_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0651A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXINVERSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0651B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXINVERSE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA065220)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXInverse_TypeDefinitionIndex = 32696;

	class MXInverse : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::BoolParameter* use; // 0x30

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXINVERSE_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXINVERSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXINVERSE_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

