#pragma once
#include "../unitysdk.h"

#define SYSTEM_NOTIMPLEMENTED_BYDESIGNWITHMESSAGE_OFFSET UNITYSDK_OFFSET(0x9ACEA30)

namespace System
{
	inline static constexpr unsigned int NotImplemented_TypeDefinitionIndex = 29163;

	class NotImplemented : public Il2CppObject
	{
	public:
		::System::Exception* ByDesignWithMessage(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NOTIMPLEMENTED_BYDESIGNWITHMESSAGE_OFFSET))(str, nullptr);
		}

	};
}

