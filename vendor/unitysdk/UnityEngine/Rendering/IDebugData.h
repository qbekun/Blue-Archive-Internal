#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_IDEBUGDATA_GETRESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IDebugData_TypeDefinitionIndex = 33940;

	class IDebugData : public Il2CppObject
	{
	public:
		::System::Action* GetReset()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_IDEBUGDATA_GETRESET_OFFSET))(nullptr);
		}

	};
}

