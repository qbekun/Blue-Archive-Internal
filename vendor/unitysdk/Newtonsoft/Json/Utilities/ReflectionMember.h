#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x94B1DB0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x94B1DC0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_GETTER_OFFSET UNITYSDK_OFFSET(0x94B1DD0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_GETTER_OFFSET UNITYSDK_OFFSET(0x94B1DE0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_SETTER_OFFSET UNITYSDK_OFFSET(0x94B1DF0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_SETTER_OFFSET UNITYSDK_OFFSET(0x94B1E00)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B1E10)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionMember_TypeDefinitionIndex = 31884;

	class ReflectionMember : public Il2CppObject
	{
	public:
		::System::Type* _MemberType_k__BackingField; // 0x10
		Il2CppObject* _Getter_k__BackingField; // 0x18
		Il2CppObject* _Setter_k__BackingField; // 0x20

		::System::Type* get_MemberType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MemberType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_MEMBERTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Getter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_GETTER_OFFSET))(nullptr);
		}

		::System::Void set_Getter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_GETTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Setter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_SETTER_OFFSET))(nullptr);
		}

		::System::Void set_Setter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_SETTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_.CTOR_OFFSET))(nullptr);
		}

	};
}

