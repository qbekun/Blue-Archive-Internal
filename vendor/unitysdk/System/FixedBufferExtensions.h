#pragma once
#include "../unitysdk.h"

#define SYSTEM_FIXEDBUFFEREXTENSIONS_GETSTRINGFROMFIXEDBUFFER_OFFSET UNITYSDK_OFFSET(0x9385190)
#define SYSTEM_FIXEDBUFFEREXTENSIONS_GETFIXEDBUFFERSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x9385260)
#define SYSTEM_FIXEDBUFFEREXTENSIONS_FIXEDBUFFEREQUALSSTRING_OFFSET UNITYSDK_OFFSET(0x93852C0)

namespace System
{
	inline static constexpr unsigned int FixedBufferExtensions_TypeDefinitionIndex = 23879;

	class FixedBufferExtensions : public Il2CppObject
	{
	public:
		::System::String* GetStringFromFixedBuffer(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FIXEDBUFFEREXTENSIONS_GETSTRINGFROMFIXEDBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetFixedBufferStringLength(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FIXEDBUFFEREXTENSIONS_GETFIXEDBUFFERSTRINGLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FixedBufferEqualsString(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FIXEDBUFFEREXTENSIONS_FIXEDBUFFEREQUALSSTRING_OFFSET))(arg, str, nullptr);
		}

	};
}

