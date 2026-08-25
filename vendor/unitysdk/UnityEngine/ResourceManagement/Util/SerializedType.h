#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0E5750)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA0E5960)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0E5970)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA0E5A60)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_CLASSNAME_OFFSET UNITYSDK_OFFSET(0xA0E5A70)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E5A80)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0xA0E5B20)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int SerializedType_TypeDefinitionIndex = 36381;

	class SerializedType : public Il2CppObject
	{
	public:
		::System::String* m_AssemblyName; // 0x10
		::System::String* m_ClassName; // 0x18
		::System::Type* m_CachedType; // 0x20
		::System::Boolean _ValueChanged_k__BackingField; // 0x28

		::System::Type* get_Value()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_ValueChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_VALUECHANGED_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ValueChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_SET_VALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::String* get_ClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_CLASSNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_AssemblyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_SERIALIZEDTYPE_GET_ASSEMBLYNAME_OFFSET))(nullptr);
		}

	};
}

