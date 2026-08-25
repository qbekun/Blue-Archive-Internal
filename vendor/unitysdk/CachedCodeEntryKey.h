#pragma once
#include "unitysdk.h"

#define CACHEDCODEENTRYKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AE1A10)
#define CACHEDCODEENTRYKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AE1C80)
#define CACHEDCODEENTRYKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AE1D30)
#define CACHEDCODEENTRYKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9ADE060)
#define CACHEDCODEENTRYKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9AE1D90)

	inline static constexpr unsigned int CachedCodeEntryKey_TypeDefinitionIndex = 29215;

	class CachedCodeEntryKey : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::RegexOptions* _options; // 0x10
		::System::String* _cultureKey; // 0x18
		::System::String* _pattern; // 0x20

		::System::Void .ctor(::System::Text::RegularExpressions::RegexOptions* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::RegexOptions*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDCODEENTRYKEY_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDCODEENTRYKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(CachedCodeEntryKey* arg)
		{
			return (return (::System::Boolean(*)(CachedCodeEntryKey*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDCODEENTRYKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(CachedCodeEntryKey* arg, CachedCodeEntryKey* arg)
		{
			return (return (::System::Boolean(*)(CachedCodeEntryKey*, CachedCodeEntryKey*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEDCODEENTRYKEY_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDCODEENTRYKEY_GETHASHCODE_OFFSET))(nullptr);
		}

	};

