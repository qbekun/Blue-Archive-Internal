#pragma once
#include "unitysdk.h"

#define ATTRIBUTETYPEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B74FF0)
#define ATTRIBUTETYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B75020)

	inline static constexpr unsigned int AttributeTypeDescriptor_TypeDefinitionIndex = 29513;

	class AttributeTypeDescriptor : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _attributeArray; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::ComponentModel::ICustomTypeDescriptor* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::ComponentModel::ICustomTypeDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(nullptr);
		}

	};

