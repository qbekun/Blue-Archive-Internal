#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_YIELDAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x922AB90)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int YieldAwaitable_TypeDefinitionIndex = 24789;

	class YieldAwaitable : public Il2CppObject
	{
	public:
		YieldAwaiter* GetAwaiter()
		{
			return (return (YieldAwaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_YIELDAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

