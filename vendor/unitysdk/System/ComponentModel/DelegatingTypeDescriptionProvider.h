#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D650)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x9B2D680)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B2D6D0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x9B2D770)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9B2D7F0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B2D870)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x9B2D8F0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9B2D970)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x9B2D9F0)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B2DA70)
#define SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9B2DAF0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DelegatingTypeDescriptionProvider_TypeDefinitionIndex = 29378;

	class DelegatingTypeDescriptionProvider : public Il2CppObject
	{
	public:
		::System::Type* _type; // 0x20

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::TypeDescriptionProvider* get_Provider()
		{
			return (return (::System::ComponentModel::TypeDescriptionProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GET_PROVIDER_OFFSET))(nullptr);
		}

		::System::Object* CreateInstance(::System::IServiceProvider* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(arg, nullptr);
		}

		::System::String* GetFullComponentName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETFULLCOMPONENTNAME_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExtenderProviders(::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETEXTENDERPROVIDERS_OFFSET))(arg, nullptr);
		}

		::System::Type* GetReflectionType(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetRuntimeType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETRUNTIMETYPE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSupportedType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DELEGATINGTYPEDESCRIPTIONPROVIDER_ISSUPPORTEDTYPE_OFFSET))(arg, nullptr);
		}

	};
}

