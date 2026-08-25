#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_BOX_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A0060)
#define UNITYENGINE_UIELEMENTS_BOX_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A00F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Box_TypeDefinitionIndex = 30309;

	class Box : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BOX_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BOX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

