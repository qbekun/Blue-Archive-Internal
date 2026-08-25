#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9B326F0)
#define SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32720)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InstanceCreationEditor_TypeDefinitionIndex = 29412;

	class InstanceCreationEditor : public Il2CppObject
	{
	public:
		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_CREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTANCECREATIONEDITOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

