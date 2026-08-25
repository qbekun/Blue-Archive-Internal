#pragma once
#include "unitysdk.h"

#define CACD_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D14F0)

	inline static constexpr unsigned int CACD_TypeDefinitionIndex = 24445;

	class CACD : public Il2CppObject
	{
	public:
		::System::Object* d; // 0x10
		::System::Object* c; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACD_.CTOR_OFFSET))(nullptr);
		}

	};

