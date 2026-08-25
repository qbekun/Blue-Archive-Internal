#pragma once
#include "unitysdk.h"

#define ORBIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2832600)

	inline static constexpr unsigned int Orbit_TypeDefinitionIndex = 34218;

	class Orbit : public Il2CppObject
	{
	public:
		::System::Single m_Height; // 0x10
		::System::Single m_Radius; // 0x14

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ORBIT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

