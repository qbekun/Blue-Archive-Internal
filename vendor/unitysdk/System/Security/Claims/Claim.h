#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CLAIMS_CLAIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BEA70)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BEAB0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BEEC0)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x91BF290)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91BED60)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x91BF300)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_SET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x91BF310)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x91BF320)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x91BF330)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_CLONE_OFFSET UNITYSDK_OFFSET(0x91BF340)
#define SYSTEM_SECURITY_CLAIMS_CLAIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91BF3A0)

namespace System::Security::Claims
{
	inline static constexpr unsigned int Claim_TypeDefinitionIndex = 24418;

	class Claim : public Il2CppObject
	{
	public:
		::System::String* m_issuer; // 0x10
		::System::String* m_originalIssuer; // 0x18
		::System::String* m_type; // 0x20
		::System::String* m_value; // 0x28
		::System::String* m_valueType; // 0x30
		::Il2CppArray<::System::Object*>* m_userSerializationData; // 0x38
		Il2CppObject* m_properties; // 0x40
		::System::Object* m_propertyLock; // 0x48
		::System::Security::Claims::ClaimsIdentity* m_subject; // 0x50

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Security::Claims::ClaimsIdentity* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Security::Claims::ClaimsIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_.CTOR_OFFSET))(str, str, str, str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Security::Claims::ClaimsIdentity* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Security::Claims::ClaimsIdentity*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_.CTOR_OFFSET))(str, str, str, str, str, arg, str, str, nullptr);
		}

		::System::Void .ctor(::System::Security::Claims::Claim* arg, ::System::Security::Claims::ClaimsIdentity* arg)
		{
			((::System::Void(*)(::System::Security::Claims::Claim*, ::System::Security::Claims::ClaimsIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_ONDESERIALIZEDMETHOD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Properties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Security::Claims::ClaimsIdentity* get_Subject()
		{
			return (return (::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_SUBJECT_OFFSET))(nullptr);
		}

		::System::Void set_Subject(::System::Security::Claims::ClaimsIdentity* arg)
		{
			((::System::Void(*)(::System::Security::Claims::ClaimsIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_SET_SUBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Type()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Security::Claims::Claim* Clone(::System::Security::Claims::ClaimsIdentity* arg)
		{
			return (return (::System::Security::Claims::Claim*(*)(::System::Security::Claims::ClaimsIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_CLONE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIM_TOSTRING_OFFSET))(nullptr);
		}

	};
}

