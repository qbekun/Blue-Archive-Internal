#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEFEATURE_GET_ISDYNAMICCODESUPPORTED_OFFSET UNITYSDK_OFFSET(0x9227FF0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeFeature_TypeDefinitionIndex = 24761;

	class RuntimeFeature : public Il2CppObject
	{
	public:
		::System::Boolean get_IsDynamicCodeSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEFEATURE_GET_ISDYNAMICCODESUPPORTED_OFFSET))(nullptr);
		}

	};
}

