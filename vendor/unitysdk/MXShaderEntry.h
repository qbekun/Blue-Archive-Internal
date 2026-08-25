#pragma once
#include "unitysdk.h"

#define MXSHADERENTRY_START_OFFSET UNITYSDK_OFFSET(0x9402210)
#define MXSHADERENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9402220)
#define MXSHADERENTRY_UPDATE_OFFSET UNITYSDK_OFFSET(0x9402230)

	inline static constexpr unsigned int MXShaderEntry_TypeDefinitionIndex = 38107;

	class MXShaderEntry : public Il2CppObject
	{
	public:
		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSHADERENTRY_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSHADERENTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSHADERENTRY_UPDATE_OFFSET))(nullptr);
		}

	};

