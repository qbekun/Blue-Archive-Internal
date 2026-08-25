#pragma once
#include "../unitysdk.h"

#define NPA_NXPSTRINGUTIL_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x9BC5370)
#define NPA_NXPSTRINGUTIL_ISNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x9BC5380)
#define NPA_NXPSTRINGUTIL_ISNULLORBLANK_OFFSET UNITYSDK_OFFSET(0x9BC53A0)
#define NPA_NXPSTRINGUTIL_GETOREMPTY_OFFSET UNITYSDK_OFFSET(0x9BC53B0)
#define NPA_NXPSTRINGUTIL_GETORDEFAULT_OFFSET UNITYSDK_OFFSET(0x9BC53F0)

namespace NPA
{
	inline static constexpr unsigned int NXPStringUtil_TypeDefinitionIndex = 25589;

	class NXPStringUtil : public Il2CppObject
	{
	public:
		::System::Boolean IsNullOrEmpty(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPSTRINGUTIL_ISNULLOREMPTY_OFFSET))(str, nullptr);
		}

		::System::Boolean IsNotEmpty(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPSTRINGUTIL_ISNOTEMPTY_OFFSET))(str, nullptr);
		}

		::System::Boolean IsNullOrBlank(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPSTRINGUTIL_ISNULLORBLANK_OFFSET))(str, nullptr);
		}

		::System::String* GetOrEmpty(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPSTRINGUTIL_GETOREMPTY_OFFSET))(str, nullptr);
		}

		::System::String* GetOrDefault(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPSTRINGUTIL_GETORDEFAULT_OFFSET))(str, str, nullptr);
		}

	};
}

