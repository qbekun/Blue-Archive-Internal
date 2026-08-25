#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ADDOID_OFFSET UNITYSDK_OFFSET(0x91AF4F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x919E600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x91AF540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET UNITYSDK_OFFSET(0x91B1320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET UNITYSDK_OFFSET(0x91B1370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x91B1A00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ADDALGORITHM_OFFSET UNITYSDK_OFFSET(0x91B1B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODEOID_OFFSET UNITYSDK_OFFSET(0x91B1F40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODELONGNUMBER_OFFSET UNITYSDK_OFFSET(0x91B2350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_GET_ALLOWONLYFIPSALGORITHMS_OFFSET UNITYSDK_OFFSET(0x91A60D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x91B2530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91B2540)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConfig_TypeDefinitionIndex = 24390;

	class CryptoConfig : public Il2CppObject
	{
	public:
		::System::Object* lockObject; // 0x0
		Il2CppObject* algorithms; // 0x8

		::System::Void AddOID(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ADDOID_OFFSET))(str, arg, nullptr);
		}

		::System::Object* CreateFromName(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Object* CreateFromName(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET))(str, arg, nullptr);
		}

		::System::String* MapNameToOID(::System::String* str, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET))(str, arg, nullptr);
		}

		::System::String* MapNameToOID(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET))(str, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void AddAlgorithm(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ADDALGORITHM_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeOID(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODEOID_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeLongNumber(::System::Int64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODELONGNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowOnlyFipsAlgorithms()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_GET_ALLOWONLYFIPSALGORITHMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_.CCTOR_OFFSET))(nullptr);
		}

	};
}

