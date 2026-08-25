#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class MemberSerialization; }
namespace Newtonsoft::Json { class MissingMemberHandling; }
namespace Newtonsoft::Json { class NullValueHandling; }
namespace Newtonsoft::Json { class Required; }

#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x944FE20)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x944FE30)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x944FE40)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x944FE70)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_ITEMNULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x944FED0)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_ITEMNULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x944FF00)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x944FF60)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x944FF90)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944FFF0)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9450000)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9450020)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonObjectAttribute_TypeDefinitionIndex = 31694;

	class JsonObjectAttribute : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::MemberSerialization* _memberSerialization; // 0x68
		Il2CppObject* _missingMemberHandling; // 0x6C
		Il2CppObject* _itemRequired; // 0x74
		Il2CppObject* _itemNullValueHandling; // 0x7C

		::Newtonsoft::Json::MemberSerialization* get_MemberSerialization()
		{
			return (return (::Newtonsoft::Json::MemberSerialization*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET))(nullptr);
		}

		::System::Void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_MEMBERSERIALIZATION_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MissingMemberHandling* get_MissingMemberHandling()
		{
			return (return (::Newtonsoft::Json::MissingMemberHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MISSINGMEMBERHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MissingMemberHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_MISSINGMEMBERHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::NullValueHandling* get_ItemNullValueHandling()
		{
			return (return (::Newtonsoft::Json::NullValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_ITEMNULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemNullValueHandling(::Newtonsoft::Json::NullValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::NullValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_ITEMNULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Required* get_ItemRequired()
		{
			return (return (::Newtonsoft::Json::Required*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_ITEMREQUIRED_OFFSET))(nullptr);
		}

		::System::Void set_ItemRequired(::Newtonsoft::Json::Required* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Required*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_ITEMREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::MemberSerialization* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

