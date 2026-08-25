#pragma once
#include "unitysdk.h"

#define UNITASKUTILS_DISABLE_OFFSET UNITYSDK_OFFSET(0xC22820)

	inline static constexpr unsigned int UniTaskUtils_TypeDefinitionIndex = 8883;

	class UniTaskUtils : public Il2CppObject
	{
	public:
		::System::Void Disable(::System::Threading::CancellationTokenSource&* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationTokenSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITASKUTILS_DISABLE_OFFSET))(arg, nullptr);
		}

	};

