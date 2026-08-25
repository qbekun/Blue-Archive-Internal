#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_GET_ISERIALIZABLECREATOR_OFFSET UNITYSDK_OFFSET(0x94CB980)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_SET_ISERIALIZABLECREATOR_OFFSET UNITYSDK_OFFSET(0x94CB990)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C40B0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonISerializableContract_TypeDefinitionIndex = 31945;

	class JsonISerializableContract : public Il2CppObject
	{
	public:
		Il2CppObject* _ISerializableCreator_k__BackingField; // 0xC0

		Il2CppObject* get_ISerializableCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_GET_ISERIALIZABLECREATOR_OFFSET))(nullptr);
		}

		::System::Void set_ISerializableCreator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_SET_ISERIALIZABLECREATOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONISERIALIZABLECONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

