#pragma once
#include "../unitysdk.h"

#define SYSTEM_KNOWNTERMINALS_GET_LINUX_OFFSET UNITYSDK_OFFSET(0x93B8650)
#define SYSTEM_KNOWNTERMINALS_GET_XTERM_OFFSET UNITYSDK_OFFSET(0x93B86B0)
#define SYSTEM_KNOWNTERMINALS_GET_ANSI_OFFSET UNITYSDK_OFFSET(0x93B8710)

namespace System
{
	inline static constexpr unsigned int KnownTerminals_TypeDefinitionIndex = 23976;

	class KnownTerminals : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* get_linux()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_KNOWNTERMINALS_GET_LINUX_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_xterm()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_KNOWNTERMINALS_GET_XTERM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ansi()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_KNOWNTERMINALS_GET_ANSI_OFFSET))(nullptr);
		}

	};
}

