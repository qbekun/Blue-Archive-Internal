#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9222C90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x9222F40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222EA0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222F70)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9222FA0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DllImportAttribute_TypeDefinitionIndex = 24707;

	class DllImportAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _val; // 0x10
		::System::String* EntryPoint; // 0x18
		::System::Runtime::InteropServices::CharSet* CharSet; // 0x20
		::System::Boolean SetLastError; // 0x24
		::System::Boolean ExactSpelling; // 0x25
		::System::Boolean PreserveSig; // 0x26
		::System::Runtime::InteropServices::CallingConvention* CallingConvention; // 0x28
		::System::Boolean BestFitMapping; // 0x2C
		::System::Boolean ThrowOnUnmappableChar; // 0x2D

		::System::Attribute* GetCustomAttribute(::System::Reflection::RuntimeMethodInfo* arg)
		{
			return (return (::System::Attribute*(*)(::System::Reflection::RuntimeMethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Reflection::RuntimeMethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_ISDEFINED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Runtime::InteropServices::CharSet* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Runtime::InteropServices::CallingConvention* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Runtime::InteropServices::CharSet*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Runtime::InteropServices::CallingConvention*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DLLIMPORTATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

