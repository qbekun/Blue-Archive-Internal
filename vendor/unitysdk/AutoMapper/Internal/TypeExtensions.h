#pragma once
#include "../../unitysdk.h"

#define AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_ISCOLLECTION_OFFSET UNITYSDK_OFFSET(0x4D24D0)
#define AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x4D25A0)
#define AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETIENUMERABLETYPE_OFFSET UNITYSDK_OFFSET(0x4D2640)
#define AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETGENERICINTERFACE_OFFSET UNITYSDK_OFFSET(0x4D26B0)
#define AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETDECLAREDCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x4D2830)
#define AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETSTATICMETHOD_OFFSET UNITYSDK_OFFSET(0x4D1AD0)
#define AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETINSTANCEMETHOD_OFFSET UNITYSDK_OFFSET(0x4D2860)

namespace AutoMapper::Internal
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 37643;

	class TypeExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsCollection(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_ISCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGenericType(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetIEnumerableType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETIENUMERABLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetGenericInterface(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETGENERICINTERFACE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDeclaredConstructors(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETDECLAREDCONSTRUCTORS_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetStaticMethod(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETSTATICMETHOD_OFFSET))(arg, str, nullptr);
		}

		::System::Reflection::MethodInfo* GetInstanceMethod(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEEXTENSIONS_GETINSTANCEMETHOD_OFFSET))(arg, str, nullptr);
		}

	};
}

