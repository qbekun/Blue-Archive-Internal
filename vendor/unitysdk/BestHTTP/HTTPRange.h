#pragma once
#include "../unitysdk.h"

#define BESTHTTP_HTTPRANGE_GET_FIRSTBYTEPOS_OFFSET UNITYSDK_OFFSET(0x4DC2F0)
#define BESTHTTP_HTTPRANGE_SET_FIRSTBYTEPOS_OFFSET UNITYSDK_OFFSET(0x4DC300)
#define BESTHTTP_HTTPRANGE_GET_LASTBYTEPOS_OFFSET UNITYSDK_OFFSET(0x4DC310)
#define BESTHTTP_HTTPRANGE_SET_LASTBYTEPOS_OFFSET UNITYSDK_OFFSET(0x4DC320)
#define BESTHTTP_HTTPRANGE_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x4DC330)
#define BESTHTTP_HTTPRANGE_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x4DC340)
#define BESTHTTP_HTTPRANGE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x4DC350)
#define BESTHTTP_HTTPRANGE_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x4DC360)
#define BESTHTTP_HTTPRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DC370)
#define BESTHTTP_HTTPRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DC3A0)
#define BESTHTTP_HTTPRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DC3D0)
#define BESTHTTP_HTTPRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4DC440)

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPRange_TypeDefinitionIndex = 21301;

	class HTTPRange : public Il2CppObject
	{
	public:
		::System::Int64 _FirstBytePos_k__BackingField; // 0x10
		::System::Int64 _LastBytePos_k__BackingField; // 0x18
		::System::Int64 _ContentLength_k__BackingField; // 0x20
		::System::Boolean _IsValid_k__BackingField; // 0x28

		::System::Int64 get_FirstBytePos()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_GET_FIRSTBYTEPOS_OFFSET))(nullptr);
		}

		::System::Void set_FirstBytePos(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_SET_FIRSTBYTEPOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LastBytePos()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_GET_LASTBYTEPOS_OFFSET))(nullptr);
		}

		::System::Void set_LastBytePos(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_SET_LASTBYTEPOS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ContentLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_ContentLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_SET_CONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_IsValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_SET_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRANGE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

