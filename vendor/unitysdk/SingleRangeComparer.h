#pragma once
#include "unitysdk.h"

#define SINGLERANGECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AEDE90)
#define SINGLERANGECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9AEDEA0)
#define SINGLERANGECOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AEDF00)

	inline static constexpr unsigned int SingleRangeComparer_TypeDefinitionIndex = 29221;

	class SingleRangeComparer : public Il2CppObject
	{
	public:
		SingleRangeComparer* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLERANGECOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(SingleRange* arg, SingleRange* arg)
		{
			return (return (::System::Int32(*)(SingleRange*, SingleRange*, ::PVOID))((::PBYTE)hIl2Cpp + SINGLERANGECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SINGLERANGECOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};

