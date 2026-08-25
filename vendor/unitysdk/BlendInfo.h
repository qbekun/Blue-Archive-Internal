#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

	inline static constexpr unsigned int BlendInfo_TypeDefinitionIndex = 3739;

	class BlendInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Material* Material; // 0x10
		::System::Int32 SrcBlend; // 0x18
		::System::Int32 DstBlend; // 0x1C
		::System::Int32 ZWrite; // 0x20
		::System::Int32 RenderQueue; // 0x24

	};

