#pragma once
#include "../unitysdk.h"

namespace NPA { class NPLoginType; }

#define NPA_LOGINTYPEEXTENSIONS_ISMAINPROVIDERTYPE_OFFSET UNITYSDK_OFFSET(0x9BBA980)
#define NPA_LOGINTYPEEXTENSIONS_ISVALIDLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9BBA9B0)

namespace NPA
{
	inline static constexpr unsigned int LoginTypeExtensions_TypeDefinitionIndex = 25487;

	class LoginTypeExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsMainProviderType(::NPA::NPLoginType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGINTYPEEXTENSIONS_ISMAINPROVIDERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidLoginType(::NPA::NPLoginType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NPLoginType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_LOGINTYPEEXTENSIONS_ISVALIDLOGINTYPE_OFFSET))(arg, nullptr);
		}

	};
}

