#pragma once
#include "unitysdk.h"

#define SHADERCONSTANTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FDB560)

	inline static constexpr unsigned int ShaderConstants_TypeDefinitionIndex = 34062;

	class ShaderConstants : public Il2CppObject
	{
	public:
		::System::Int32 _FsrEasuConstants0; // 0x0
		::System::Int32 _FsrEasuConstants1; // 0x4
		::System::Int32 _FsrEasuConstants2; // 0x8
		::System::Int32 _FsrEasuConstants3; // 0xC
		::System::Int32 _FsrRcasConstants; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERCONSTANTS_.CCTOR_OFFSET))(nullptr);
		}

	};

