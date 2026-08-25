#pragma once
#include "../unitysdk.h"

#define SYSTEM_ISERVICEPROVIDER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IServiceProvider_TypeDefinitionIndex = 23882;

	class IServiceProvider : public Il2CppObject
	{
	public:
		::System::Object* GetService(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ISERVICEPROVIDER_GETSERVICE_OFFSET))(arg, nullptr);
		}

	};
}

