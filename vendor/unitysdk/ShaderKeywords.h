#pragma once
#include "unitysdk.h"

#define SHADERKEYWORDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8F7B0)
#define SHADERKEYWORDS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD8F7C0)

	inline static constexpr unsigned int ShaderKeywords_TypeDefinitionIndex = 9704;

	class ShaderKeywords : public Il2CppObject
	{
	public:
		::System::Int32 s_Center; // 0x0
		::System::Int32 s_Radius; // 0x4
		::System::Int32 s_Amount; // 0x8
		::System::Int32 s_ColorLevel; // 0xC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERKEYWORDS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERKEYWORDS_.CCTOR_OFFSET))(nullptr);
		}

	};

