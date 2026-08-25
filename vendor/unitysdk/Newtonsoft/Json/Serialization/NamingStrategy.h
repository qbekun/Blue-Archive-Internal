#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class NamingStrategy; }

#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_PROCESSDICTIONARYKEYS_OFFSET UNITYSDK_OFFSET(0x94E55C0)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_PROCESSDICTIONARYKEYS_OFFSET UNITYSDK_OFFSET(0x94E55D0)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_PROCESSEXTENSIONDATANAMES_OFFSET UNITYSDK_OFFSET(0x94E55E0)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_PROCESSEXTENSIONDATANAMES_OFFSET UNITYSDK_OFFSET(0x94E55F0)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_OVERRIDESPECIFIEDNAMES_OFFSET UNITYSDK_OFFSET(0x94E5600)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_OVERRIDESPECIFIEDNAMES_OFFSET UNITYSDK_OFFSET(0x94E5610)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94E5620)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETEXTENSIONDATANAME_OFFSET UNITYSDK_OFFSET(0x94E5650)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETDICTIONARYKEY_OFFSET UNITYSDK_OFFSET(0x94E5670)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x94E5690)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_EQUALS_OFFSET UNITYSDK_OFFSET(0x94E5770)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_EQUALS_OFFSET UNITYSDK_OFFSET(0x94E57F0)
#define NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E4EC0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int NamingStrategy_TypeDefinitionIndex = 31966;

	class NamingStrategy : public Il2CppObject
	{
	public:
		::System::Boolean _ProcessDictionaryKeys_k__BackingField; // 0x10
		::System::Boolean _ProcessExtensionDataNames_k__BackingField; // 0x11
		::System::Boolean _OverrideSpecifiedNames_k__BackingField; // 0x12

		::System::Boolean get_ProcessDictionaryKeys()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_PROCESSDICTIONARYKEYS_OFFSET))(nullptr);
		}

		::System::Void set_ProcessDictionaryKeys(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_PROCESSDICTIONARYKEYS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ProcessExtensionDataNames()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_PROCESSEXTENSIONDATANAMES_OFFSET))(nullptr);
		}

		::System::Void set_ProcessExtensionDataNames(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_PROCESSEXTENSIONDATANAMES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OverrideSpecifiedNames()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GET_OVERRIDESPECIFIEDNAMES_OFFSET))(nullptr);
		}

		::System::Void set_OverrideSpecifiedNames(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_SET_OVERRIDESPECIFIEDNAMES_OFFSET))(arg, nullptr);
		}

		::System::String* GetPropertyName(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETPROPERTYNAME_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetExtensionDataName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETEXTENSIONDATANAME_OFFSET))(str, nullptr);
		}

		::System::String* GetDictionaryKey(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETDICTIONARYKEY_OFFSET))(str, nullptr);
		}

		::System::String* ResolvePropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_RESOLVEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::Newtonsoft::Json::Serialization::NamingStrategy* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Serialization::NamingStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_NAMINGSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

	};
}

