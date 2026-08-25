#pragma once
#include "unitysdk.h"

#define AUTOSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DFE50)
#define AUTOSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1DFF10)

	inline static constexpr unsigned int AutoScope_TypeDefinitionIndex = 30850;

	class AutoScope : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AUTOSCOPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOSCOPE_DISPOSE_OFFSET))(nullptr);
		}

	};

