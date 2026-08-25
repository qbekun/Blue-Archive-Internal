#pragma once
#include "unitysdk.h"

#define BASE32_CHARTOINT_OFFSET UNITYSDK_OFFSET(0x212D140)
#define BASE32_FROMBASE32STRING_OFFSET UNITYSDK_OFFSET(0x212D160)
#define BASE32_TOBASE32STRING_OFFSET UNITYSDK_OFFSET(0x2104BE0)
#define BASE32_TOBASE32STRING_OFFSET UNITYSDK_OFFSET(0x212D3F0)
#define BASE32_.CCTOR_OFFSET UNITYSDK_OFFSET(0x212D720)

	inline static constexpr unsigned int Base32_TypeDefinitionIndex = 3930;

	class Base32 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _digits; // 0x0
		::System::Int32 _mask; // 0x0
		::System::Int32 _shift; // 0x0

		::System::Int32 CharToInt(::System::Char arg)
		{
			return ((::System::Int32(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + BASE32_CHARTOINT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBase32String(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BASE32_FROMBASE32STRING_OFFSET))(str, nullptr);
		}

		::System::String* ToBase32String(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BASE32_TOBASE32STRING_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToBase32String(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BASE32_TOBASE32STRING_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASE32_.CCTOR_OFFSET))(nullptr);
		}

	};

