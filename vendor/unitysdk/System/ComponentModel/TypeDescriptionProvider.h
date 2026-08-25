#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B48E30)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B48E40)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B48E70)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x9B48F80)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B48FA0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x9B49060)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9B49180)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9B492F0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9B49310)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9B493A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x9B493D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B49560)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B49260)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B49580)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9B49630)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptionProvider_TypeDefinitionIndex = 29465;

	class TypeDescriptionProvider : public Il2CppObject
	{
	public:
		::System::ComponentModel::TypeDescriptionProvider* _parent; // 0x10
		EmptyCustomTypeDescriptor* _emptyDescriptor; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::TypeDescriptionProvider* arg)
		{
			((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateInstance(::System::IServiceProvider* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExtenderProviders(::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET))(arg, nullptr);
		}

		::System::String* GetFullComponentName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET))(arg, nullptr);
		}

		::System::Type* GetReflectionType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetReflectionType(::System::Object* arg)
		{
			return (return (::System::Type*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetReflectionType(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetRuntimeType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSupportedType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET))(arg, nullptr);
		}

	};
}

