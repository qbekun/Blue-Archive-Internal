#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_STRINGCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98169E0)
#define SYSTEM_NET_HTTP_STRINGCONTENT_GETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x9816B50)

namespace System::Net::Http
{
	inline static constexpr unsigned int StringContent_TypeDefinitionIndex = 36666;

	class StringContent : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Text::Encoding* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Text::Encoding*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STRINGCONTENT_.CTOR_OFFSET))(str, arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetByteArray(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_STRINGCONTENT_GETBYTEARRAY_OFFSET))(str, arg, nullptr);
		}

	};
}

