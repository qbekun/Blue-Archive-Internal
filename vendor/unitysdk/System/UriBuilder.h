#pragma once
#include "../unitysdk.h"

#define SYSTEM_URIBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACEBD0)
#define SYSTEM_URIBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACEF90)
#define SYSTEM_URIBUILDER_INIT_OFFSET UNITYSDK_OFFSET(0x9ACEDD0)
#define SYSTEM_URIBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACF310)
#define SYSTEM_URIBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACF6B0)
#define SYSTEM_URIBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACF7A0)
#define SYSTEM_URIBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACF880)
#define SYSTEM_URIBUILDER_SET_EXTRA_OFFSET UNITYSDK_OFFSET(0x9ACFA00)
#define SYSTEM_URIBUILDER_SET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x9ACFB90)
#define SYSTEM_URIBUILDER_SET_HOST_OFFSET UNITYSDK_OFFSET(0x9ACF5D0)
#define SYSTEM_URIBUILDER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9ACFCD0)
#define SYSTEM_URIBUILDER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x9ACF7D0)
#define SYSTEM_URIBUILDER_SET_PORT_OFFSET UNITYSDK_OFFSET(0x9ACF730)
#define SYSTEM_URIBUILDER_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x9ACFCE0)
#define SYSTEM_URIBUILDER_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x9ACFC30)
#define SYSTEM_URIBUILDER_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x9ACF490)
#define SYSTEM_URIBUILDER_GET_URI_OFFSET UNITYSDK_OFFSET(0x9ACFCF0)
#define SYSTEM_URIBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9ACFD90)
#define SYSTEM_URIBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9ACFDF0)
#define SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET UNITYSDK_OFFSET(0x9ACF150)
#define SYSTEM_URIBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9ACFE20)

namespace System
{
	inline static constexpr unsigned int UriBuilder_TypeDefinitionIndex = 29165;

	class UriBuilder : public Il2CppObject
	{
	public:
		::System::Boolean _changed; // 0x10
		::System::String* _fragment; // 0x18
		::System::String* _host; // 0x20
		::System::String* _password; // 0x28
		::System::String* _path; // 0x30
		::System::Int32 _port; // 0x38
		::System::String* _query; // 0x40
		::System::String* _scheme; // 0x48
		::System::String* _schemeDelimiter; // 0x50
		::System::Uri* _uri; // 0x58
		::System::String* _username; // 0x60

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_.CTOR_OFFSET))(str, str, arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_.CTOR_OFFSET))(str, str, arg, str, str, nullptr);
		}

		::System::Void set_Extra(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_EXTRA_OFFSET))(str, nullptr);
		}

		::System::Void set_Fragment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_FRAGMENT_OFFSET))(str, nullptr);
		}

		::System::Void set_Host(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_HOST_OFFSET))(str, nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PATH_OFFSET))(str, nullptr);
		}

		::System::Void set_Port(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PORT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Query()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_QUERY_OFFSET))(nullptr);
		}

		::System::Void set_Query(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_QUERY_OFFSET))(str, nullptr);
		}

		::System::Void set_Scheme(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_SCHEME_OFFSET))(str, nullptr);
		}

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_URI_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void SetFieldsFromUri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

