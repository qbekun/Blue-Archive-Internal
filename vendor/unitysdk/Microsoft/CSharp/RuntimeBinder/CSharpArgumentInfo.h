#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfoFlags; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9082580)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9082590)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90825A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x90825E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_USECOMPILETIMETYPE_OFFSET UNITYSDK_OFFSET(0x9082060)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_LITERALCONSTANT_OFFSET UNITYSDK_OFFSET(0x9081650)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_NAMEDARGUMENT_OFFSET UNITYSDK_OFFSET(0x9082290)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_ISBYREFOROUT_OFFSET UNITYSDK_OFFSET(0x9082650)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_ISOUT_OFFSET UNITYSDK_OFFSET(0x9082660)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_ISSTATICTYPE_OFFSET UNITYSDK_OFFSET(0x9082670)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9082680)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int CSharpArgumentInfo_TypeDefinitionIndex = 34425;

	class CSharpArgumentInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* _Flags_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* get_Flags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* arg, ::System::String* str)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* Create(::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags* arg, ::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*(*)(::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfoFlags*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_CREATE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean get_UseCompileTimeType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_USECOMPILETIMETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_LiteralConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_LITERALCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean get_NamedArgument()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_NAMEDARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsByRefOrOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_ISBYREFOROUT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_ISOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStaticType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_GET_ISSTATICTYPE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_CSHARPARGUMENTINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

