#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_TIMEOUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93D7AF0)

namespace System::Threading
{
	inline static constexpr unsigned int Timeout_TypeDefinitionIndex = 24049;

	class Timeout : public Il2CppObject
	{
	public:
		::System::TimeSpan* InfiniteTimeSpan; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

