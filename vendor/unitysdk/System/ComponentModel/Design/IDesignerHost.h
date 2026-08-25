#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNERHOST_GET_ROOTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNERHOST_GETDESIGNER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int IDesignerHost_TypeDefinitionIndex = 29542;

	class IDesignerHost : public Il2CppObject
	{
	public:
		::System::ComponentModel::IComponent* get_RootComponent()
		{
			return (return (::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNERHOST_GET_ROOTCOMPONENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::Design::IDesigner* GetDesigner(::System::ComponentModel::IComponent* arg)
		{
			return (return (::System::ComponentModel::Design::IDesigner*(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_IDESIGNERHOST_GETDESIGNER_OFFSET))(arg, nullptr);
		}

	};
}

