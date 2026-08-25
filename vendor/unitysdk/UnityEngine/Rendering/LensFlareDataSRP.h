#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_LENSFLAREDATASRP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBED40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareDataSRP_TypeDefinitionIndex = 34000;

	class LensFlareDataSRP : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* elements; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREDATASRP_.CTOR_OFFSET))(nullptr);
		}

	};
}

