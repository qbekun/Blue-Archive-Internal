#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
namespace Newtonsoft::Json { class ReferenceLoopHandling; }
namespace Newtonsoft::Json { class TypeNameHandling; }

#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ID_OFFSET UNITYSDK_OFFSET(0x944AD10)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ID_OFFSET UNITYSDK_OFFSET(0x944AD20)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x944AD30)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x944AD40)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x944AD50)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x944AD60)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x944AD70)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x944AD80)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x944AD90)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x944ADA0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x944ADB0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x944ADC0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x944ADF0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x944AE00)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYINSTANCE_OFFSET UNITYSDK_OFFSET(0x944AE30)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYINSTANCE_OFFSET UNITYSDK_OFFSET(0x944AE40)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x944AE50)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x944AE80)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x944AEE0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x944AF10)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x944AF70)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x944AFA0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x944B000)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x944B030)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944AC70)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944ACD0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonContainerAttribute_TypeDefinitionIndex = 31683;

	class JsonContainerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::System::String* _Title_k__BackingField; // 0x18
		::System::String* _Description_k__BackingField; // 0x20
		::System::Type* _ItemConverterType_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _ItemConverterParameters_k__BackingField; // 0x30
		::Newtonsoft::Json::Serialization::NamingStrategy* _NamingStrategyInstance_k__BackingField; // 0x38
		Il2CppObject* _isReference; // 0x40
		Il2CppObject* _itemIsReference; // 0x42
		Il2CppObject* _itemReferenceLoopHandling; // 0x44
		Il2CppObject* _itemTypeNameHandling; // 0x4C
		::System::Type* _namingStrategyType; // 0x58
		::Il2CppArray<::System::Object*>* _namingStrategyParameters; // 0x60

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ID_OFFSET))(str, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Type* get_ItemConverterType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ItemConverterType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ItemConverterParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_ItemConverterParameters(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Type* get_NamingStrategyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_NamingStrategyType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_NamingStrategyParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_NamingStrategyParameters(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategyInstance()
		{
			return (return (::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYINSTANCE_OFFSET))(nullptr);
		}

		::System::Void set_NamingStrategyInstance(::Newtonsoft::Json::Serialization::NamingStrategy* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::NamingStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ISREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_IsReference(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ISREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ItemIsReference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMISREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_ItemIsReference(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMISREFERENCE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ReferenceLoopHandling* get_ItemReferenceLoopHandling()
		{
			return (return (::Newtonsoft::Json::ReferenceLoopHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReferenceLoopHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameHandling* get_ItemTypeNameHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

