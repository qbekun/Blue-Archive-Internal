#pragma once
#include "unitysdk.h"

#define RENDERPIPELINECONFIGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D6170)

	inline static constexpr unsigned int RenderPipelineConfigData_TypeDefinitionIndex = 3727;

	class RenderPipelineConfigData : public Il2CppObject
	{
	public:
		::System::Boolean SetShadowDistance; // 0x18
		::System::Single ShadowDistance; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERPIPELINECONFIGDATA_.CTOR_OFFSET))(nullptr);
		}

	};

