#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_ITYPERESOLUTIONSERVICE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_DESIGN_ITYPERESOLUTIONSERVICE_GETPATHOFASSEMBLY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ITypeResolutionService_TypeDefinitionIndex = 29547;

	class ITypeResolutionService : public Il2CppObject
	{
	public:
		::System::Type* GetType(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ITYPERESOLUTIONSERVICE_GETTYPE_OFFSET))(str, nullptr);
		}

		::System::String* GetPathOfAssembly(::System::Reflection::AssemblyName* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::AssemblyName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ITYPERESOLUTIONSERVICE_GETPATHOFASSEMBLY_OFFSET))(arg, nullptr);
		}

	};
}

