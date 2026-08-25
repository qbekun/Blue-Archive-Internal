#pragma once
#include "unitysdk.h"

#define TYPEDESCRIPTIONNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B67200)
#define TYPEDESCRIPTIONNODE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B76BA0)
#define TYPEDESCRIPTIONNODE_GETCACHE_OFFSET UNITYSDK_OFFSET(0x9B76D30)
#define TYPEDESCRIPTIONNODE_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B76DC0)
#define TYPEDESCRIPTIONNODE_GETEXTENDERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x9B76ED0)
#define TYPEDESCRIPTIONNODE_GETFULLCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x9B76F60)
#define TYPEDESCRIPTIONNODE_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x9B76FF0)
#define TYPEDESCRIPTIONNODE_GETRUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x9B770D0)
#define TYPEDESCRIPTIONNODE_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B771A0)
#define TYPEDESCRIPTIONNODE_ISSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9B77390)

	inline static constexpr unsigned int TypeDescriptionNode_TypeDefinitionIndex = 29524;

	class TypeDescriptionNode : public Il2CppObject
	{
	public:
		TypeDescriptionNode* Next; // 0x20
		::System::ComponentModel::TypeDescriptionProvider* Provider; // 0x28

		::System::Void .ctor(::System::ComponentModel::TypeDescriptionProvider* arg)
		{
			((::System::Void(*)(::System::ComponentModel::TypeDescriptionProvider*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateInstance(::System::IServiceProvider* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::IServiceProvider*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_CREATEINSTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_GETCACHE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExtenderProviders(::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_GETEXTENDERPROVIDERS_OFFSET))(arg, nullptr);
		}

		::System::String* GetFullComponentName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_GETFULLCOMPONENTNAME_OFFSET))(arg, nullptr);
		}

		::System::Type* GetReflectionType(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_GETREFLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetRuntimeType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_GETRUNTIMETYPE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::ComponentModel::ICustomTypeDescriptor*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_GETTYPEDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSupportedType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDESCRIPTIONNODE_ISSUPPORTEDTYPE_OFFSET))(arg, nullptr);
		}

	};

