#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x9227D80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FormattableStringFactory_TypeDefinitionIndex = 24750;

	class FormattableStringFactory : public Il2CppObject
	{
	public:
		::System::FormattableString* Create(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::FormattableString*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CREATE_OFFSET))(str, arg, nullptr);
		}

	};
}

