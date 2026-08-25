#pragma once
#include "unitysdk.h"

#define RENDERPASSBLOCK_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA059420)

	inline static constexpr unsigned int RenderPassBlock_TypeDefinitionIndex = 32636;

	class RenderPassBlock : public Il2CppObject
	{
	public:
		::System::Int32 BeforeRendering; // 0x0
		::System::Int32 MainRenderingOpaque; // 0x4
		::System::Int32 MainRenderingTransparent; // 0x8
		::System::Int32 AfterRendering; // 0xC

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERPASSBLOCK_.CCTOR_OFFSET))(nullptr);
		}

	};

