#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C8310)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_TRACED_OFFSET UNITYSDK_OFFSET(0x94C8390)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_TRACED_OFFSET UNITYSDK_OFFSET(0x94C83A0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x94C83B0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ORIGINALOBJECT_OFFSET UNITYSDK_OFFSET(0x94C83C0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x94C83D0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x94C83E0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x94C83F0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x94C8400)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ErrorContext_TypeDefinitionIndex = 31924;

	class ErrorContext : public Il2CppObject
	{
	public:
		::System::Boolean _Traced_k__BackingField; // 0x10
		::System::Exception* _Error_k__BackingField; // 0x18
		::System::Object* _OriginalObject_k__BackingField; // 0x20
		::System::Object* _Member_k__BackingField; // 0x28
		::System::String* _Path_k__BackingField; // 0x30
		::System::Boolean _Handled_k__BackingField; // 0x38

		::System::Void .ctor(::System::Object* arg, ::System::Object* arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Boolean get_Traced()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_TRACED_OFFSET))(nullptr);
		}

		::System::Void set_Traced(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_TRACED_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_Error()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Object* get_OriginalObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ORIGINALOBJECT_OFFSET))(nullptr);
		}

		::System::Object* get_Member()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_MEMBER_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_PATH_OFFSET))(nullptr);
		}

		::System::Boolean get_Handled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_HANDLED_OFFSET))(nullptr);
		}

		::System::Void set_Handled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_HANDLED_OFFSET))(arg, nullptr);
		}

	};
}

