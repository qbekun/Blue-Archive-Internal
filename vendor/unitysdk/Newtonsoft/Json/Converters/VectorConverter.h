#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }

#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0xDE5580)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR2_OFFSET UNITYSDK_OFFSET(0xDE5590)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0xDE55A0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR3_OFFSET UNITYSDK_OFFSET(0xDE55B0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0xDE55C0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR4_OFFSET UNITYSDK_OFFSET(0xDE55D0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE55E0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE5600)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0xDE5640)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEVECTOR_OFFSET UNITYSDK_OFFSET(0xDE5980)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0xDE5B40)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0xDE6060)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR2_OFFSET UNITYSDK_OFFSET(0xDE5CC0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR3_OFFSET UNITYSDK_OFFSET(0xDE5DB0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR4_OFFSET UNITYSDK_OFFSET(0xDE5EE0)
#define NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDE61B0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int VectorConverter_TypeDefinitionIndex = 10157;

	class VectorConverter : public Il2CppObject
	{
	public:
		::System::Type* V2; // 0x0
		::System::Type* V3; // 0x8
		::System::Type* V4; // 0x10
		::System::Boolean _EnableVector2_k__BackingField; // 0x10
		::System::Boolean _EnableVector3_k__BackingField; // 0x11
		::System::Boolean _EnableVector4_k__BackingField; // 0x12

		::System::Boolean get_EnableVector2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR2_OFFSET))(nullptr);
		}

		::System::Void set_EnableVector2(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR2_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EnableVector3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR3_OFFSET))(nullptr);
		}

		::System::Void set_EnableVector3(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR3_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EnableVector4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_GET_ENABLEVECTOR4_OFFSET))(nullptr);
		}

		::System::Void set_EnableVector4(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_SET_ENABLEVECTOR4_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg2, ::Newtonsoft::Json::JsonSerializer* arg3)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEJSON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void WriteVector(::Newtonsoft::Json::JsonWriter* arg, ::System::Single arg2, ::System::Single arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_WRITEVECTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg2, ::System::Object* arg3, ::Newtonsoft::Json::JsonSerializer* arg4)
		{
			return ((::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_READJSON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* PopulateVector2(::Newtonsoft::Json::JsonReader* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR2_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* PopulateVector3(::Newtonsoft::Json::JsonReader* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR3_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* PopulateVector4(::Newtonsoft::Json::JsonReader* arg)
		{
			return ((::UnityEngine::Vector4*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_POPULATEVECTOR4_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VECTORCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

