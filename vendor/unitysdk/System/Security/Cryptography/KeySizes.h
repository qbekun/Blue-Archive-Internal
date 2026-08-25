#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x918DEB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x918DEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_SKIPSIZE_OFFSET UNITYSDK_OFFSET(0x918DED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_.CTOR_OFFSET UNITYSDK_OFFSET(0x918C130)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET UNITYSDK_OFFSET(0x918DEE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET UNITYSDK_OFFSET(0x918DF20)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int KeySizes_TypeDefinitionIndex = 24325;

	class KeySizes : public Il2CppObject
	{
	public:
		::System::Int32 m_minSize; // 0x10
		::System::Int32 m_maxSize; // 0x14
		::System::Int32 m_skipSize; // 0x18

		::System::Int32 get_MinSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MINSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_MAXSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_SkipSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_GET_SKIPSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsLegal(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLegalKeySize(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYSIZES_ISLEGALKEYSIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

