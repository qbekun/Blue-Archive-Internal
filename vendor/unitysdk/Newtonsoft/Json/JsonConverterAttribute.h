#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x944F6D0)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x944F6E0)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F6F0)
#define NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F7C0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverterAttribute_TypeDefinitionIndex = 31687;

	class JsonConverterAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _converterType; // 0x10
		::Il2CppArray<::System::Object*>* _ConverterParameters_k__BackingField; // 0x18

		::System::Type* get_ConverterType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ConverterParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_GET_CONVERTERPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

