#pragma once
#include "../unitysdk.h"

#define BESTHTTP_ASYNCHTTPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D7020)
#define BESTHTTP_ASYNCHTTPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D7080)
#define BESTHTTP_ASYNCHTTPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D70E0)
#define BESTHTTP_ASYNCHTTPEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4D7160)

namespace BestHTTP
{
	inline static constexpr unsigned int AsyncHTTPException_TypeDefinitionIndex = 21288;

	class AsyncHTTPException : public Il2CppObject
	{
	public:
		::System::Int32 StatusCode; // 0x90
		::System::String* Content; // 0x98

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ASYNCHTTPEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ASYNCHTTPEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ASYNCHTTPEXCEPTION_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ASYNCHTTPEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

