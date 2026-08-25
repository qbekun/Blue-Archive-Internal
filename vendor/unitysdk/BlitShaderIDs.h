#pragma once
#include "unitysdk.h"

#define BLITSHADERIDS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FD37B0)

	inline static constexpr unsigned int BlitShaderIDs_TypeDefinitionIndex = 34051;

	class BlitShaderIDs : public Il2CppObject
	{
	public:
		::System::Int32 _BlitTexture; // 0x0
		::System::Int32 _BlitCubeTexture; // 0x4
		::System::Int32 _BlitScaleBias; // 0x8
		::System::Int32 _BlitScaleBiasRt; // 0xC
		::System::Int32 _BlitMipLevel; // 0x10
		::System::Int32 _BlitTextureSize; // 0x14
		::System::Int32 _BlitPaddingSize; // 0x18
		::System::Int32 _InputDepth; // 0x1C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLITSHADERIDS_.CCTOR_OFFSET))(nullptr);
		}

	};

