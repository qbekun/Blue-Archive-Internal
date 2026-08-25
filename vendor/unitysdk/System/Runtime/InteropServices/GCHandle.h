#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9223E10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9223E20)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9223E80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_ISALLOCATED_OFFSET UNITYSDK_OFFSET(0x9223F00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x9223F50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x9224010)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ADDROFPINNEDOBJECT_OFFSET UNITYSDK_OFFSET(0x9224040)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET UNITYSDK_OFFSET(0x9224140)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET UNITYSDK_OFFSET(0x9224190)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREE_OFFSET UNITYSDK_OFFSET(0x9224200)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x92242F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9224300)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_CHECKCURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x92243F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x9224000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGETHANDLE_OFFSET UNITYSDK_OFFSET(0x9223EF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREEHANDLE_OFFSET UNITYSDK_OFFSET(0x92242E0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETADDROFPINNEDOBJECT_OFFSET UNITYSDK_OFFSET(0x9224130)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9224400)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9224410)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9224490)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FROMINTPTR_OFFSET UNITYSDK_OFFSET(0x92244A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_TOINTPTR_OFFSET UNITYSDK_OFFSET(0x92244B0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GCHandle_TypeDefinitionIndex = 24713;

	class GCHandle : public Il2CppObject
	{
	public:
		::System::Int32 handle; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Runtime::InteropServices::GCHandleType* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::InteropServices::GCHandleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsAllocated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_ISALLOCATED_OFFSET))(nullptr);
		}

		::System::Object* get_Target()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddrOfPinnedObject()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ADDROFPINNEDOBJECT_OFFSET))(nullptr);
		}

		::System::Runtime::InteropServices::GCHandle* Alloc(::System::Object* arg)
		{
			return (return (::System::Runtime::InteropServices::GCHandle*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET))(arg, nullptr);
		}

		::System::Runtime::InteropServices::GCHandle* Alloc(::System::Object* arg, ::System::Runtime::InteropServices::GCHandleType* arg)
		{
			return (return (::System::Runtime::InteropServices::GCHandle*(*)(::System::Object*, ::System::Runtime::InteropServices::GCHandleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Free()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREE_OFFSET))(nullptr);
		}

		::System::Int32 op_Explicit(::System::Runtime::InteropServices::GCHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Runtime::InteropServices::GCHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Runtime::InteropServices::GCHandle* op_Explicit(::System::Int32 arg)
		{
			return (return (::System::Runtime::InteropServices::GCHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckCurrentDomain(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_CHECKCURRENTDOMAIN_OFFSET))(arg, nullptr);
		}

		::System::Object* GetTarget(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTargetHandle(::System::Object* arg, ::System::Int32 arg, ::System::Runtime::InteropServices::GCHandleType* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Int32, ::System::Runtime::InteropServices::GCHandleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGETHANDLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FreeHandle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREEHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetAddrOfPinnedObject(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETADDROFPINNEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Runtime::InteropServices::GCHandle* arg, ::System::Runtime::InteropServices::GCHandle* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::GCHandle*, ::System::Runtime::InteropServices::GCHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Runtime::InteropServices::GCHandle* FromIntPtr(::System::Int32 arg)
		{
			return (return (::System::Runtime::InteropServices::GCHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FROMINTPTR_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToIntPtr(::System::Runtime::InteropServices::GCHandle* arg)
		{
			return (return (::System::Int32(*)(::System::Runtime::InteropServices::GCHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_TOINTPTR_OFFSET))(arg, nullptr);
		}

	};
}

