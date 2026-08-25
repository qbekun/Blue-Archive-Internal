#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_SERVICES_TYPEEXTENSIONS_BASETYPESANDSELF_OFFSET UNITYSDK_OFFSET(0x1016730)

namespace MX::Core::Services
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 12781;

	class TypeExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* BaseTypesAndSelf(::System::Type* arg)
		{
			return ((Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_TYPEEXTENSIONS_BASETYPESANDSELF_OFFSET))(arg, nullptr);
		}

	};
}

