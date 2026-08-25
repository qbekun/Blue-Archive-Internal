#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCHTYPEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA065140)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXGlitchTypeParameter_TypeDefinitionIndex = 32695;

	class MXGlitchTypeParameter : public ::System::Net::Cache::RequestCacheProtocol
	{
	public:
		::System::Void .ctor(eType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(eType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCHTYPEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

