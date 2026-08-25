#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x923D130)
#define SYSTEM_REFLECTION_MODULE_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x923D140)
#define SYSTEM_REFLECTION_MODULE_GET_FULLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x923D170)
#define SYSTEM_REFLECTION_MODULE_GET_MODULEVERSIONID_OFFSET UNITYSDK_OFFSET(0x923D1A0)
#define SYSTEM_REFLECTION_MODULE_GET_SCOPENAME_OFFSET UNITYSDK_OFFSET(0x923D1D0)
#define SYSTEM_REFLECTION_MODULE_ISRESOURCE_OFFSET UNITYSDK_OFFSET(0x923D200)
#define SYSTEM_REFLECTION_MODULE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x923D230)
#define SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x923D260)
#define SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x923D290)
#define SYSTEM_REFLECTION_MODULE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x923D2C0)
#define SYSTEM_REFLECTION_MODULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x923D2F0)
#define SYSTEM_REFLECTION_MODULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x923D300)
#define SYSTEM_REFLECTION_MODULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x923D310)
#define SYSTEM_REFLECTION_MODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x923D350)
#define SYSTEM_REFLECTION_MODULE_FILTERTYPENAMEIMPL_OFFSET UNITYSDK_OFFSET(0x923D370)
#define SYSTEM_REFLECTION_MODULE_FILTERTYPENAMEIGNORECASEIMPL_OFFSET UNITYSDK_OFFSET(0x923D4B0)
#define SYSTEM_REFLECTION_MODULE_GETMODULEVERSIONID_OFFSET UNITYSDK_OFFSET(0x923D630)
#define SYSTEM_REFLECTION_MODULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x923D680)

namespace System::Reflection
{
	inline static constexpr unsigned int Module_TypeDefinitionIndex = 24870;

	class Module : public Il2CppObject
	{
	public:
		::System::Reflection::TypeFilter* FilterTypeName; // 0x0
		::System::Reflection::TypeFilter* FilterTypeNameIgnoreCase; // 0x8
		::System::Reflection::BindingFlags* DefaultLookup; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GET_ASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_FullyQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GET_FULLYQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Guid* get_ModuleVersionId()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GET_MODULEVERSIONID_OFFSET))(nullptr);
		}

		::System::String* get_ScopeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GET_SCOPENAME_OFFSET))(nullptr);
		}

		::System::Boolean IsResource()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_ISRESOURCE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Reflection::Module* arg, ::System::Reflection::Module* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::Module*, ::System::Reflection::Module*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean FilterTypeNameImpl(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_FILTERTYPENAMEIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FilterTypeNameIgnoreCaseImpl(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_FILTERTYPENAMEIGNORECASEIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Guid* GetModuleVersionId()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETMODULEVERSIONID_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

