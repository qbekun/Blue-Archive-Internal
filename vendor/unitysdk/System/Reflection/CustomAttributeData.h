#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9247540)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9247550)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9247630)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x92477B0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x9247810)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9247820)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9247AA0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9247AB0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_NAMEDARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9247AD0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9247AF0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9247B40)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTESINTERNAL_OFFSET UNITYSDK_OFFSET(0x9247B90)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9247BE0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9247C30)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x9247C80)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9247CB0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_UNBOXVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x9248290)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92489D0)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeData_TypeDefinitionIndex = 24906;

	class CustomAttributeData : public Il2CppObject
	{
	public:
		::System::Reflection::ConstructorInfo* ctorInfo; // 0x10
		Il2CppObject* ctorArgs; // 0x18
		Il2CppObject* namedArgs; // 0x20
		LazyCAttrData* lazyData; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Reflection::ConstructorInfo* arg, ::System::Reflection::Assembly* arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::ConstructorInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::ConstructorInfo* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Reflection::ConstructorInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ResolveArgumentsInternal(::System::Reflection::ConstructorInfo* arg, ::System::Reflection::Assembly* arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::Int32, ::System::UInt32, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTSINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ResolveArguments()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Reflection::ConstructorInfo* get_Constructor()
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConstructorArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTORARGUMENTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_NamedArguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_NAMEDARGUMENTS_OFFSET))(nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::Assembly* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributesInternal(::System::RuntimeType* arg)
		{
			return (return (Il2CppObject*(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTESINTERNAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::Module* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::Module*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCustomAttributes(::System::Reflection::ParameterInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::ParameterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Type* get_AttributeType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_ATTRIBUTETYPE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_TOSTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* UnboxValues(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_UNBOXVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

