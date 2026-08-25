#pragma once
#include "unitysdk.h"

#define SPKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A79980)
#define SPKEY_GET_USESPROXY_OFFSET UNITYSDK_OFFSET(0x9A79EA0)
#define SPKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9A79EF0)
#define SPKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9A79FD0)

	inline static constexpr unsigned int SPKey_TypeDefinitionIndex = 29790;

	class SPKey : public Il2CppObject
	{
	public:
		::System::Uri* uri; // 0x10
		::System::Uri* proxy; // 0x18
		::System::Boolean use_connect; // 0x20

		::System::Void .ctor(::System::Uri* arg, ::System::Uri* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Uri*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPKEY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_UsesProxy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPKEY_GET_USESPROXY_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPKEY_EQUALS_OFFSET))(arg, nullptr);
		}

	};

