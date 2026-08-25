#pragma once
#include "unitysdk.h"

#define INFINITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD959B0)
#define INFINITY_VALIDATERANGE_OFFSET UNITYSDK_OFFSET(0xD959C0)
#define INFINITY_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD959D0)

	inline static constexpr unsigned int Infinity_TypeDefinitionIndex = 9745;

	class Infinity : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFINITY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ValidateRange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFINITY_VALIDATERANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INFINITY_GET_MAXCOUNT_OFFSET))(nullptr);
		}

	};

