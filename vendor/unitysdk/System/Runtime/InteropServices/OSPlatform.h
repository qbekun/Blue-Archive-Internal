#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GET_LINUX_OFFSET UNITYSDK_OFFSET(0x9221FE0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GET_OSX_OFFSET UNITYSDK_OFFSET(0x9222030)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GET_WINDOWS_OFFSET UNITYSDK_OFFSET(0x9222080)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92220D0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_CREATE_OFFSET UNITYSDK_OFFSET(0x9222190)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_EQUALS_OFFSET UNITYSDK_OFFSET(0x92221C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9222220)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9222240)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9222310)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9222330)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9222390)
#define SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9222450)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int OSPlatform_TypeDefinitionIndex = 24684;

	class OSPlatform : public Il2CppObject
	{
	public:
		::System::String* _osPlatform; // 0x10
		::System::Runtime::InteropServices::OSPlatform* _Linux_k__BackingField; // 0x0
		::System::Runtime::InteropServices::OSPlatform* _OSX_k__BackingField; // 0x8
		::System::Runtime::InteropServices::OSPlatform* _Windows_k__BackingField; // 0x10

		::System::Runtime::InteropServices::OSPlatform* get_Linux()
		{
			return (return (::System::Runtime::InteropServices::OSPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GET_LINUX_OFFSET))(nullptr);
		}

		::System::Runtime::InteropServices::OSPlatform* get_OSX()
		{
			return (return (::System::Runtime::InteropServices::OSPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GET_OSX_OFFSET))(nullptr);
		}

		::System::Runtime::InteropServices::OSPlatform* get_Windows()
		{
			return (return (::System::Runtime::InteropServices::OSPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GET_WINDOWS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Runtime::InteropServices::OSPlatform* Create(::System::String* str)
		{
			return (return (::System::Runtime::InteropServices::OSPlatform*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_CREATE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Runtime::InteropServices::OSPlatform* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::OSPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_EQUALS_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Runtime::InteropServices::OSPlatform* arg, ::System::Runtime::InteropServices::OSPlatform* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::OSPlatform*, ::System::Runtime::InteropServices::OSPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_OSPLATFORM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

