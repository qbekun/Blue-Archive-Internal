#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BDFE0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BF420)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BF450)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BF470)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C01C0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x91C0BF0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x91C0C00)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x91C0C10)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_CLAIMS_OFFSET UNITYSDK_OFFSET(0x91C0CD0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91C0D80)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_CLONE_OFFSET UNITYSDK_OFFSET(0x91C0DB0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIMS_OFFSET UNITYSDK_OFFSET(0x91BFC60)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIM_OFFSET UNITYSDK_OFFSET(0x91C0080)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_FINDFIRST_OFFSET UNITYSDK_OFFSET(0x91C0F60)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONSERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x91C1310)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZEDMETHOD_OFFSET UNITYSDK_OFFSET(0x91C15E0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZINGMETHOD_OFFSET UNITYSDK_OFFSET(0x91C1A80)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91C1B70)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x91C16F0)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SERIALIZECLAIMS_OFFSET UNITYSDK_OFFSET(0x91C1390)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ISCIRCULAR_OFFSET UNITYSDK_OFFSET(0x91BFC00)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x91C0370)

namespace System::Security::Claims
{
	inline static constexpr unsigned int ClaimsIdentity_TypeDefinitionIndex = 24420;

	class ClaimsIdentity : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_userSerializationData; // 0x10
		Il2CppObject* m_instanceClaims; // 0x18
		Il2CppObject* m_externalClaims; // 0x20
		::System::String* m_nameType; // 0x28
		::System::String* m_roleType; // 0x30
		::System::String* m_version; // 0x38
		::System::Security::Claims::ClaimsIdentity* m_actor; // 0x40
		::System::String* m_authenticationType; // 0x48
		::System::Object* m_bootstrapContext; // 0x50
		::System::String* m_label; // 0x58
		::System::String* m_serializedNameType; // 0x60
		::System::String* m_serializedRoleType; // 0x68
		::System::String* m_serializedClaims; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Principal::IIdentity* arg, Il2CppObject* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Security::Principal::IIdentity*, Il2CppObject*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET))(arg, arg, str, str, str, nullptr);
		}

		::System::Void .ctor(::System::Security::Principal::IIdentity* arg, Il2CppObject* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Principal::IIdentity*, Il2CppObject*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET))(arg, arg, str, str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

		::System::Security::Claims::ClaimsIdentity* get_Actor()
		{
			return (return (::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_ACTOR_OFFSET))(nullptr);
		}

		::System::Void set_Actor(::System::Security::Claims::ClaimsIdentity* arg)
		{
			((::System::Void(*)(::System::Security::Claims::ClaimsIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SET_ACTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Claims()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_CLAIMS_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Security::Claims::ClaimsIdentity* Clone()
		{
			return (return (::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_CLONE_OFFSET))(nullptr);
		}

		::System::Void SafeAddClaims(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIMS_OFFSET))(arg, nullptr);
		}

		::System::Void SafeAddClaim(::System::Security::Claims::Claim* arg)
		{
			((::System::Void(*)(::System::Security::Claims::Claim*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SAFEADDCLAIM_OFFSET))(arg, nullptr);
		}

		::System::Security::Claims::Claim* FindFirst(::System::String* str)
		{
			return (return (::System::Security::Claims::Claim*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_FINDFIRST_OFFSET))(str, nullptr);
		}

		::System::Void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONSERIALIZINGMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZEDMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserializingMethod(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ONDESERIALIZINGMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DeserializeClaims(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZECLAIMS_OFFSET))(str, nullptr);
		}

		::System::String* SerializeClaims()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_SERIALIZECLAIMS_OFFSET))(nullptr);
		}

		::System::Boolean IsCircular(::System::Security::Claims::ClaimsIdentity* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Claims::ClaimsIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_ISCIRCULAR_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

