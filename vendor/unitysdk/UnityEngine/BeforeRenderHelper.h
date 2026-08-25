#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1E3F30)
#define UNITYENGINE_BEFORERENDERHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1F1130)

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderHelper_TypeDefinitionIndex = 30987;

	class BeforeRenderHelper : public Il2CppObject
	{
	public:
		Il2CppObject* s_OrderBlocks; // 0x0

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

