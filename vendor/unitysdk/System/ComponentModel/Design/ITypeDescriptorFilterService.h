#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_ITYPEDESCRIPTORFILTERSERVICE_FILTERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_DESIGN_ITYPEDESCRIPTORFILTERSERVICE_FILTEREVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_DESIGN_ITYPEDESCRIPTORFILTERSERVICE_FILTERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ITypeDescriptorFilterService_TypeDefinitionIndex = 29546;

	class ITypeDescriptorFilterService : public Il2CppObject
	{
	public:
		::System::Boolean FilterAttributes(::System::ComponentModel::IComponent* arg, ::System::Collections::IDictionary* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ITYPEDESCRIPTORFILTERSERVICE_FILTERATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FilterEvents(::System::ComponentModel::IComponent* arg, ::System::Collections::IDictionary* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ITYPEDESCRIPTORFILTERSERVICE_FILTEREVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FilterProperties(::System::ComponentModel::IComponent* arg, ::System::Collections::IDictionary* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::IComponent*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ITYPEDESCRIPTORFILTERSERVICE_FILTERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

	};
}

