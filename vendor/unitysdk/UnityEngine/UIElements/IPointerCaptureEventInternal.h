#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IPOINTERCAPTUREEVENTINTERNAL_GET_POINTERID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IPointerCaptureEventInternal_TypeDefinitionIndex = 30443;

	class IPointerCaptureEventInternal : public Il2CppObject
	{
	public:
		::System::Int32 get_pointerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTERCAPTUREEVENTINTERNAL_GET_POINTERID_OFFSET))(nullptr);
		}

	};
}

