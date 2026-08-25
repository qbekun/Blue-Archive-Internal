#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x924F610)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_FORMATPARAMETERS_OFFSET UNITYSDK_OFFSET(0x924BF80)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x924F6C0)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x924F850)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x924F8D0)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924FBC0)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924FC10)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETDEFAULTVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x924F790)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x924FC70)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x924FCD0)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x924FF50)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_NEW_OFFSET UNITYSDK_OFFSET(0x92504F0)
#define SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_NEW_OFFSET UNITYSDK_OFFSET(0x924BBB0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeParameterInfo_TypeDefinitionIndex = 24919;

	class RuntimeParameterInfo : public Il2CppObject
	{
	public:
		::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs; // 0x40

		::System::Void .ctor(::System::String* str, ::System::Type* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg, ::System::Reflection::MemberInfo* arg, ::System::Runtime::InteropServices::MarshalAsAttribute* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::System::Int32, ::System::Int32, ::System::Object*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatParameters(::System::Text::StringBuilder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Reflection::CallingConventions* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Object*>*, ::System::Reflection::CallingConventions*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_FORMATPARAMETERS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::ParameterInfo* arg, ::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Reflection::MemberInfo* arg, ::System::Runtime::InteropServices::MarshalAsAttribute* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* get_DefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetDefaultValueImpl(::System::Reflection::ParameterInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::ParameterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETDEFAULTVALUEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributesData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_GETPSEUDOCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

		::System::Reflection::ParameterInfo* New(::System::Reflection::ParameterInfo* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Reflection::ParameterInfo*(*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_NEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::ParameterInfo* New(::System::Type* arg, ::System::Reflection::MemberInfo* arg, ::System::Runtime::InteropServices::MarshalAsAttribute* arg)
		{
			return (return (::System::Reflection::ParameterInfo*(*)(::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPARAMETERINFO_NEW_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

