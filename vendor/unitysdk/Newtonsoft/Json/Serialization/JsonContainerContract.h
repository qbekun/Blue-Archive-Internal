#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json { class JsonConverter; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C9130)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C9140)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C91C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x94C91D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x94C91E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x94C9200)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x94C9210)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94C9220)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94C9230)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94C9240)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94C9250)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C8680)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContainerContract_TypeDefinitionIndex = 31933;

	class JsonContainerContract : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::JsonContract* _itemContract; // 0x90
		::Newtonsoft::Json::Serialization::JsonContract* _finalItemContract; // 0x98
		::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField; // 0xA0
		Il2CppObject* _ItemIsReference_k__BackingField; // 0xA8
		Il2CppObject* _ItemReferenceLoopHandling_k__BackingField; // 0xAC
		Il2CppObject* _ItemTypeNameHandling_k__BackingField; // 0xB4

		::Newtonsoft::Json::Serialization::JsonContract* get_ItemContract()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET))(nullptr);
		}

		::System::Void set_ItemContract(::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_FinalItemContract()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonConverter* get_ItemConverter()
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET))(nullptr);
		}

		::System::Void set_ItemConverter(::Newtonsoft::Json::JsonConverter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonConverter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemIsReference()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_ItemIsReference(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemReferenceLoopHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemReferenceLoopHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemTypeNameHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemTypeNameHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

