#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INESTEDCONTAINER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int INestedContainer_TypeDefinitionIndex = 29405;

	class INestedContainer : public Il2CppObject
	{
	public:
		::System::ComponentModel::IComponent* get_Owner()
		{
			return (return (::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INESTEDCONTAINER_GET_OWNER_OFFSET))(nullptr);
		}

	};
}

