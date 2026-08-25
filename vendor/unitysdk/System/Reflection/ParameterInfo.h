#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_PARAMETERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x923D880)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x923D890)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x923D8A0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x923D8B0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x923D8C0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x923D8D0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ISIN_OFFSET UNITYSDK_OFFSET(0x923D8E0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x923D900)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOUT_OFFSET UNITYSDK_OFFSET(0x923D920)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x923D940)
#define SYSTEM_REFLECTION_PARAMETERINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x923D970)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x923DA20)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x923DAC0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x923DBE0)
#define SYSTEM_REFLECTION_PARAMETERINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x923DEC0)

namespace System::Reflection
{
	inline static constexpr unsigned int ParameterInfo_TypeDefinitionIndex = 24872;

	class ParameterInfo : public Il2CppObject
	{
	public:
		::System::Reflection::ParameterAttributes* AttrsImpl; // 0x10
		::System::Type* ClassImpl; // 0x18
		::System::Object* DefaultValueImpl; // 0x20
		::System::Reflection::MemberInfo* MemberImpl; // 0x28
		::System::String* NameImpl; // 0x30
		::System::Int32 PositionImpl; // 0x38
		::System::Int32 MetadataToken_ParamDef; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::ParameterAttributes* get_Attributes()
		{
			return (return (::System::Reflection::ParameterAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Reflection::MemberInfo* get_Member()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_MEMBER_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Type* get_ParameterType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_PARAMETERTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_Position()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ISIN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOptional()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOPTIONAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOUT_OFFSET))(nullptr);
		}

		::System::Object* get_DefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

