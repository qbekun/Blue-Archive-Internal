#pragma once
#include "unitysdk.h"

#define ATTRIBUTEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B665C0)
#define ATTRIBUTEPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B74F60)

	inline static constexpr unsigned int AttributeProvider_TypeDefinitionIndex = 29514;

	class AttributeProvider : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _attrs; // 0x20

		::System::Void .ctor(::System::ComponentModel::TypeDescriptionProvider* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEPROVIDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

	};

