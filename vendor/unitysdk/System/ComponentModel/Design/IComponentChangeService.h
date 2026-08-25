#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_ICOMPONENTCHANGESERVICE_ONCOMPONENTCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_DESIGN_ICOMPONENTCHANGESERVICE_ONCOMPONENTCHANGING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int IComponentChangeService_TypeDefinitionIndex = 29540;

	class IComponentChangeService : public Il2CppObject
	{
	public:
		::System::Void OnComponentChanged(::System::Object* arg, ::System::ComponentModel::MemberDescriptor* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::MemberDescriptor*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ICOMPONENTCHANGESERVICE_ONCOMPONENTCHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnComponentChanging(::System::Object* arg, ::System::ComponentModel::MemberDescriptor* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::MemberDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ICOMPONENTCHANGESERVICE_ONCOMPONENTCHANGING_OFFSET))(arg, arg, nullptr);
		}

	};
}

