#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURE_OFFSET UNITYSDK_OFFSET(0x949A370)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSUREDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ISFALSE_OFFSET UNITYSDK_OFFSET(0x949A530)
#define NEWTONSOFT_JSON_UTILITIES_AOTHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x949A580)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int AotHelper_TypeDefinitionIndex = 31804;

	class AotHelper : public Il2CppObject
	{
	public:
		::System::Boolean s_alwaysFalse; // 0x0

		::System::Void Ensure(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURE_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURETYPE_OFFSET))(nullptr);
		}

		::System::Void EnsureList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSURELIST_OFFSET))(nullptr);
		}

		::System::Void EnsureDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ENSUREDICTIONARY_OFFSET))(nullptr);
		}

		::System::Boolean IsFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_ISFALSE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_AOTHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

