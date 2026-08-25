#pragma once
#include "unitysdk.h"

#define UTF8STRINGHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2F120)
#define UTF8STRINGHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9D358A0)

	inline static constexpr unsigned int UTF8StringHandle_TypeDefinitionIndex = 26072;

	class UTF8StringHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UTF8STRINGHANDLE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8STRINGHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

