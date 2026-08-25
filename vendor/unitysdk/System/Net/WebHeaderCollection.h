#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET UNITYSDK_OFFSET(0x9A48040)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9A48140)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET UNITYSDK_OFFSET(0x9A481F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x9A483D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9A483F0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A48610)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A48670)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A486D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET UNITYSDK_OFFSET(0x9A48730)
#define SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET UNITYSDK_OFFSET(0x9A48B00)
#define SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET UNITYSDK_OFFSET(0x9A48B70)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9A48CF0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9A48EA0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x9A49180)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x9A493B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9A495E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x9A49710)
#define SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A49910)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET UNITYSDK_OFFSET(0x9A49960)
#define SYSTEM_NET_WEBHEADERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A49C00)
#define SYSTEM_NET_WEBHEADERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A49C60)
#define SYSTEM_NET_WEBHEADERCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A49D40)
#define SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9A49F20)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A49F30)
#define SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A4A0B0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x9A4A0E0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9A4A430)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9A4A4A0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x9A4A4D0)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x9A4A520)
#define SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x9A4A570)
#define SYSTEM_NET_WEBHEADERCOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A4A5C0)

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollection_TypeDefinitionIndex = 29701;

	class WebHeaderCollection : public Il2CppObject
	{
	public:
		::System::Net::HeaderInfoTable* HInfo; // 0x0
		::Il2CppArray<::System::Object*>* m_CommonHeaders; // 0x60
		::System::Int32 m_NumCommonHeaders; // 0x68
		::Il2CppArray<::System::Object*>* s_CommonHeaderNames; // 0x8
		::Il2CppArray<::System::Object*>* s_CommonHeaderHints; // 0x10
		::System::Collections::Specialized::NameValueCollection* m_InnerCollection; // 0x70
		::System::Net::WebHeaderCollectionType* m_Type; // 0x78
		::Il2CppArray<::System::Object*>* HttpTrimCharacters; // 0x18
		::Il2CppArray<::System::Object*>* RfcCharMap; // 0x20

		::System::Void NormalizeCommonHeaders()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_NORMALIZECOMMONHEADERS_OFFSET))(nullptr);
		}

		::System::Collections::Specialized::NameValueCollection* get_InnerCollection()
		{
			return (return (::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_INNERCOLLECTION_OFFSET))(nullptr);
		}

		::System::Boolean AllowMultiValues(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ALLOWMULTIVALUES_OFFSET))(str, nullptr);
		}

		::System::Boolean get_AllowHttpRequestHeader()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_ALLOWHTTPREQUESTHEADER_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Net::HttpRequestHeader* arg)
		{
			((::System::Void(*)(::System::Net::HttpRequestHeader*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void AddInternal(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADDINTERNAL_OFFSET))(str, str, nullptr);
		}

		::System::Void ChangeInternal(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHANGEINTERNAL_OFFSET))(str, str, nullptr);
		}

		::System::Void RemoveInternal(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVEINTERNAL_OFFSET))(str, nullptr);
		}

		::System::String* CheckBadChars(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CHECKBADCHARS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ContainsNonAsciiChars(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_CONTAINSNONASCIICHARS_OFFSET))(str, nullptr);
		}

		::System::Void ThrowOnRestrictedHeader(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_THROWONRESTRICTEDHEADER_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET))(str, str, nullptr);
		}

		::System::Void Add(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ADD_OFFSET))(str, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SET_OFFSET))(str, str, nullptr);
		}

		::System::Void SetInternal(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SETINTERNAL_OFFSET))(str, str, nullptr);
		}

		::System::Void Remove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_REMOVE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetValues(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* GetAsString(::System::Collections::Specialized::NameValueCollection* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Collections::Specialized::NameValueCollection*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETASSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::WebHeaderCollectionType* arg)
		{
			((::System::Void(*)(::System::Net::WebHeaderCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Get(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::String* Get(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GET_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetValues(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETVALUES_OFFSET))(arg, nullptr);
		}

		::System::String* GetKey(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBHEADERCOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

