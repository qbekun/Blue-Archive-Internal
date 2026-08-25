#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class NullValueHandling; }
namespace Newtonsoft::Json { class DefaultValueHandling; }
namespace Newtonsoft::Json { class ReferenceLoopHandling; }
namespace Newtonsoft::Json { class ObjectCreationHandling; }
namespace Newtonsoft::Json { class TypeNameHandling; }
namespace Newtonsoft::Json { class Required; }

#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x94507D0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x94507E0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x94507F0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9450800)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x9450810)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x9450820)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9450830)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9450840)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x9450850)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x9450880)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94508E0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x9450910)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x9450970)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94509A0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x9450A00)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x9450A30)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x9450A90)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x9450AC0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x9450B20)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x9450B50)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9450BB0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x9450BE0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x9450C40)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x9450C70)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9450CD0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9450CE0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x9450CF0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x9450D20)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x9450D80)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x9450DB0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x9450E10)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x9450E40)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9450EA0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9450EB0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonPropertyAttribute_TypeDefinitionIndex = 31697;

	class JsonPropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		Il2CppObject* _nullValueHandling; // 0x10
		Il2CppObject* _defaultValueHandling; // 0x18
		Il2CppObject* _referenceLoopHandling; // 0x20
		Il2CppObject* _objectCreationHandling; // 0x28
		Il2CppObject* _typeNameHandling; // 0x30
		Il2CppObject* _isReference; // 0x38
		Il2CppObject* _order; // 0x3C
		Il2CppObject* _required; // 0x44
		Il2CppObject* _itemIsReference; // 0x4C
		Il2CppObject* _itemReferenceLoopHandling; // 0x50
		Il2CppObject* _itemTypeNameHandling; // 0x58
		::System::Type* _ItemConverterType_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _ItemConverterParameters_k__BackingField; // 0x68
		::System::Type* _NamingStrategyType_k__BackingField; // 0x70
		::Il2CppArray<::System::Object*>* _NamingStrategyParameters_k__BackingField; // 0x78
		::System::String* _PropertyName_k__BackingField; // 0x80

		::System::Type* get_ItemConverterType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ItemConverterType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ItemConverterParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_ItemConverterParameters(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Type* get_NamingStrategyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_NamingStrategyType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_NamingStrategyParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_NamingStrategyParameters(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::NullValueHandling* get_NullValueHandling()
		{
			return (return (::Newtonsoft::Json::NullValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::NullValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DefaultValueHandling* get_DefaultValueHandling()
		{
			return (return (::Newtonsoft::Json::DefaultValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_DEFAULTVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DefaultValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_DEFAULTVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ReferenceLoopHandling* get_ReferenceLoopHandling()
		{
			return (return (::Newtonsoft::Json::ReferenceLoopHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReferenceLoopHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ObjectCreationHandling* get_ObjectCreationHandling()
		{
			return (return (::Newtonsoft::Json::ObjectCreationHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_OBJECTCREATIONHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ObjectCreationHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_OBJECTCREATIONHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameHandling* get_TypeNameHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_TYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_TYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ISREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_IsReference(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ISREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void set_Order(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ORDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Required* get_Required()
		{
			return (return (::Newtonsoft::Json::Required*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REQUIRED_OFFSET))(nullptr);
		}

		::System::Void set_Required(::Newtonsoft::Json::Required* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Required*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REQUIRED_OFFSET))(arg, nullptr);
		}

		::System::String* get_PropertyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET))(nullptr);
		}

		::System::Void set_PropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_PROPERTYNAME_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::ReferenceLoopHandling* get_ItemReferenceLoopHandling()
		{
			return (return (::Newtonsoft::Json::ReferenceLoopHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReferenceLoopHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameHandling* get_ItemTypeNameHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ItemIsReference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMISREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_ItemIsReference(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMISREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

