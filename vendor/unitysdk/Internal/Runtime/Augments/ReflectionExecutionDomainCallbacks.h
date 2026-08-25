#pragma once
#include "../../../unitysdk.h"

#define INTERNAL_RUNTIME_AUGMENTS_REFLECTIONEXECUTIONDOMAINCALLBACKS_CREATEMISSINGMETADATAEXCEPTION_OFFSET UNITYSDK_OFFSET(0x914C390)
#define INTERNAL_RUNTIME_AUGMENTS_REFLECTIONEXECUTIONDOMAINCALLBACKS_.CTOR_OFFSET UNITYSDK_OFFSET(0x914C380)

namespace Internal::Runtime::Augments
{
	inline static constexpr unsigned int ReflectionExecutionDomainCallbacks_TypeDefinitionIndex = 23661;

	class ReflectionExecutionDomainCallbacks : public Il2CppObject
	{
	public:
		::System::Exception* CreateMissingMetadataException(::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_REFLECTIONEXECUTIONDOMAINCALLBACKS_CREATEMISSINGMETADATAEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_REFLECTIONEXECUTIONDOMAINCALLBACKS_.CTOR_OFFSET))(nullptr);
		}

	};
}

