#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_UIR_SHADERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA43FCB0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Shaders_TypeDefinitionIndex = 30744;

	class Shaders : public Il2CppObject
	{
	public:
		::System::String* k_AtlasBlit; // 0x0
		::System::String* k_Editor; // 0x8
		::System::String* k_Runtime; // 0x10
		::System::String* k_RuntimeWorld; // 0x18
		::System::String* k_GraphView; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

