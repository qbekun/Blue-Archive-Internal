#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_STACKFRAME_GET_FRAME_INFO_OFFSET UNITYSDK_OFFSET(0x92C54F0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5500)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5560)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILELINENUMBER_OFFSET UNITYSDK_OFFSET(0x92C55D0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x92C55E0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETSECUREFILENAME_OFFSET UNITYSDK_OFFSET(0x92C55F0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETILOFFSET_OFFSET UNITYSDK_OFFSET(0x92C56D0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x92C56E0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETNATIVEOFFSET_OFFSET UNITYSDK_OFFSET(0x92C56F0)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODADDRESS_OFFSET UNITYSDK_OFFSET(0x92C5700)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODINDEX_OFFSET UNITYSDK_OFFSET(0x92C5710)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_GETINTERNALMETHODNAME_OFFSET UNITYSDK_OFFSET(0x92C5720)
#define SYSTEM_DIAGNOSTICS_STACKFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92C5730)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackFrame_TypeDefinitionIndex = 25031;

	class StackFrame : public Il2CppObject
	{
	public:
		::System::Int32 OFFSET_UNKNOWN; // 0x0
		::System::Int32 ilOffset; // 0x10
		::System::Int32 nativeOffset; // 0x14
		::System::Int64 methodAddress; // 0x18
		::System::UInt32 methodIndex; // 0x20
		::System::Reflection::MethodBase* methodBase; // 0x28
		::System::String* fileName; // 0x30
		::System::Int32 lineNumber; // 0x38
		::System::Int32 columnNumber; // 0x3C
		::System::String* internalMethodName; // 0x40

		::System::Boolean get_frame_info(::System::Int32 arg, ::System::Boolean arg, ::System::Reflection::MethodBase&* arg, int32_t&* arg, int32_t&* arg, ::System::String&* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::System::Reflection::MethodBase&*, int32_t&*, int32_t&*, ::System::String&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GET_FRAME_INFO_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetFileLineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILELINENUMBER_OFFSET))(nullptr);
		}

		::System::String* GetFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETFILENAME_OFFSET))(nullptr);
		}

		::System::String* GetSecureFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETSECUREFILENAME_OFFSET))(nullptr);
		}

		::System::Int32 GetILOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETILOFFSET_OFFSET))(nullptr);
		}

		::System::Reflection::MethodBase* GetMethod()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHOD_OFFSET))(nullptr);
		}

		::System::Int32 GetNativeOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETNATIVEOFFSET_OFFSET))(nullptr);
		}

		::System::Int64 GetMethodAddress()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODADDRESS_OFFSET))(nullptr);
		}

		::System::UInt32 GetMethodIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETMETHODINDEX_OFFSET))(nullptr);
		}

		::System::String* GetInternalMethodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_GETINTERNALMETHODNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAME_TOSTRING_OFFSET))(nullptr);
		}

	};
}

