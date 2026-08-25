#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDREFLECTION_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0xA1B8900)
#define UNITYENGINE_ANDROIDREFLECTION_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0xA1B8920)
#define UNITYENGINE_ANDROIDREFLECTION_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0xA1B8950)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODID_OFFSET UNITYSDK_OFFSET(0xA1B8CE0)
#define UNITYENGINE_ANDROIDREFLECTION_GETCONSTRUCTORMEMBER_OFFSET UNITYSDK_OFFSET(0xA1B9070)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODMEMBER_OFFSET UNITYSDK_OFFSET(0xA1B9580)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDMEMBER_OFFSET UNITYSDK_OFFSET(0xA1B99B0)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDCLASS_OFFSET UNITYSDK_OFFSET(0xA1B9DE0)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDSIGNATURE_OFFSET UNITYSDK_OFFSET(0xA1B9FE0)
#define UNITYENGINE_ANDROIDREFLECTION_NEWPROXYINSTANCE_OFFSET UNITYSDK_OFFSET(0xA1BA230)
#define UNITYENGINE_ANDROIDREFLECTION_CREATEINVOCATIONERROR_OFFSET UNITYSDK_OFFSET(0xA1B58B0)
#define UNITYENGINE_ANDROIDREFLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1BA3D0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidReflection_TypeDefinitionIndex = 37065;

	class AndroidReflection : public Il2CppObject
	{
	public:
		::UnityEngine::GlobalJavaObjectRef* s_ReflectionHelperClass; // 0x0
		::System::Int32 s_ReflectionHelperGetConstructorID; // 0x8
		::System::Int32 s_ReflectionHelperGetMethodID; // 0x10
		::System::Int32 s_ReflectionHelperGetFieldID; // 0x18
		::System::Int32 s_ReflectionHelperGetFieldSignature; // 0x20
		::System::Int32 s_ReflectionHelperNewProxyInstance; // 0x28
		::System::Int32 s_ReflectionHelperCeateInvocationError; // 0x30
		::System::Int32 s_FieldGetDeclaringClass; // 0x38

		::System::Boolean IsPrimitive(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_ISPRIMITIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAssignableFrom(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_ISASSIGNABLEFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetStaticMethodID(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETSTATICMETHODID_OFFSET))(str, str, str, nullptr);
		}

		::System::Int32 GetMethodID(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETMETHODID_OFFSET))(str, str, str, nullptr);
		}

		::System::Int32 GetConstructorMember(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETCONSTRUCTORMEMBER_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetMethodMember(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETMETHODMEMBER_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Int32 GetFieldMember(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDMEMBER_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Int32 GetFieldClass(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDCLASS_OFFSET))(arg, nullptr);
		}

		::System::String* GetFieldSignature(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 NewProxyInstance(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_NEWPROXYINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CreateInvocationError(::System::Exception* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Exception*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_CREATEINVOCATIONERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

