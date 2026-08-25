#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }

#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_CURRENTOBJECT_OFFSET UNITYSDK_OFFSET(0x94C8410)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_ERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x94C8420)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C8430)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ErrorEventArgs_TypeDefinitionIndex = 31925;

	class ErrorEventArgs : public Il2CppObject
	{
	public:
		::System::Object* _CurrentObject_k__BackingField; // 0x10
		::Newtonsoft::Json::Serialization::ErrorContext* _ErrorContext_k__BackingField; // 0x18

		::System::Object* get_CurrentObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_CURRENTOBJECT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::ErrorContext* get_ErrorContext()
		{
			return (return (::Newtonsoft::Json::Serialization::ErrorContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_ERRORCONTEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::Newtonsoft::Json::Serialization::ErrorContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Serialization::ErrorContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

