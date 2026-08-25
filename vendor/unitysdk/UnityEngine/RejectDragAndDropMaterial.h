#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_REJECTDRAGANDDROPMATERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5650)

namespace UnityEngine
{
	inline static constexpr unsigned int RejectDragAndDropMaterial_TypeDefinitionIndex = 37873;

	class RejectDragAndDropMaterial : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REJECTDRAGANDDROPMATERIAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

