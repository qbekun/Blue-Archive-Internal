#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92271E0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9227200)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_COPY_OFFSET UNITYSDK_OFFSET(0x9227210)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int MarshalAsAttribute_TypeDefinitionIndex = 24718;

	class MarshalAsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* MarshalCookie; // 0x10
		::System::String* MarshalType; // 0x18
		::System::Type* MarshalTypeRef; // 0x20
		::System::Type* SafeArrayUserDefinedSubType; // 0x28
		::System::Runtime::InteropServices::UnmanagedType* utype; // 0x30
		::System::Runtime::InteropServices::UnmanagedType* ArraySubType; // 0x34
		::System::Runtime::InteropServices::VarEnum* SafeArraySubType; // 0x38
		::System::Int32 SizeConst; // 0x3C
		::System::Int32 IidParameterIndex; // 0x40
		::System::Int16 SizeParamIndex; // 0x44

		::System::Void .ctor(::System::Runtime::InteropServices::UnmanagedType* arg)
		{
			((::System::Void(*)(::System::Runtime::InteropServices::UnmanagedType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::InteropServices::UnmanagedType* get_Value()
		{
			return (return (::System::Runtime::InteropServices::UnmanagedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Runtime::InteropServices::MarshalAsAttribute* Copy()
		{
			return (return (::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_COPY_OFFSET))(nullptr);
		}

	};
}

