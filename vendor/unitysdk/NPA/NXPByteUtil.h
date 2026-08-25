#pragma once
#include "../unitysdk.h"

#define NPA_NXPBYTEUTIL_BYTESTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x9BC3860)
#define NPA_NXPBYTEUTIL_HEXSTRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x9BC3920)
#define NPA_NXPBYTEUTIL_STRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x9BC3B70)

namespace NPA
{
	inline static constexpr unsigned int NXPByteUtil_TypeDefinitionIndex = 25583;

	class NXPByteUtil : public Il2CppObject
	{
	public:
		::System::String* BytesToHexString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPBYTEUTIL_BYTESTOHEXSTRING_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* HexStringToBytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPBYTEUTIL_HEXSTRINGTOBYTES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* StringToBytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPBYTEUTIL_STRINGTOBYTES_OFFSET))(str, nullptr);
		}

	};
}

