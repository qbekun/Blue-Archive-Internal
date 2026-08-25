#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9825E10)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_FROM_OFFSET UNITYSDK_OFFSET(0x9826160)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_FROM_OFFSET UNITYSDK_OFFSET(0x9826170)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_TO_OFFSET UNITYSDK_OFFSET(0x9826180)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_TO_OFFSET UNITYSDK_OFFSET(0x9826190)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x98261A0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x98261B0)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9826270)
#define SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98262E0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int RangeItemHeaderValue_TypeDefinitionIndex = 36714;

	class RangeItemHeaderValue : public Il2CppObject
	{
	public:
		Il2CppObject* _From_k__BackingField; // 0x10
		Il2CppObject* _To_k__BackingField; // 0x20

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_From()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_FROM_OFFSET))(nullptr);
		}

		::System::Void set_From(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_FROM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_To()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GET_TO_OFFSET))(nullptr);
		}

		::System::Void set_To(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SET_TO_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_RANGEITEMHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

