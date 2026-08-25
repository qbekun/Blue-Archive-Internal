#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_EDITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9B238E0)
#define SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_EDITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B23900)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentEditor_TypeDefinitionIndex = 29349;

	class ComponentEditor : public Il2CppObject
	{
	public:
		::System::Boolean EditComponent(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_EDITCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean EditComponent(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_EDITCOMPONENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTEDITOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

