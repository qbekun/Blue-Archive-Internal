#pragma once
#include "unitysdk.h"

#define IACTIVATIONFACTORY_ACTIVATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IActivationFactory_TypeDefinitionIndex = 38119;

	class IActivationFactory : public Il2CppObject
	{
	public:
		::System::Object* ActivateInstance()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACTIVATIONFACTORY_ACTIVATEINSTANCE_OFFSET))(nullptr);
		}

	};

