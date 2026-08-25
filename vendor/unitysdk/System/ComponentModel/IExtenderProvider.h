#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IEXTENDERPROVIDER_CANEXTEND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IExtenderProvider_TypeDefinitionIndex = 29402;

	class IExtenderProvider : public Il2CppObject
	{
	public:
		::System::Boolean CanExtend(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IEXTENDERPROVIDER_CANEXTEND_OFFSET))(arg, nullptr);
		}

	};
}

