#pragma once
#include "unitysdk.h"

#define XRSHADERIDS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA094D70)

	inline static constexpr unsigned int XRShaderIDs_TypeDefinitionIndex = 32816;

	class XRShaderIDs : public Il2CppObject
	{
	public:
		::System::Int32 _SourceTexArraySlice; // 0x0
		::System::Int32 _SRGBRead; // 0x4
		::System::Int32 _SRGBWrite; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XRSHADERIDS_.CCTOR_OFFSET))(nullptr);
		}

	};

