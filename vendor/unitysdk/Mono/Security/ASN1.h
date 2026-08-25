#pragma once
#include "../../unitysdk.h"

namespace Mono::Security { class ASN1; }

#define MONO_SECURITY_ASN1_.CTOR_OFFSET UNITYSDK_OFFSET(0x90ECCB0)
#define MONO_SECURITY_ASN1_.CTOR_OFFSET UNITYSDK_OFFSET(0x90ECCF0)
#define MONO_SECURITY_ASN1_.CTOR_OFFSET UNITYSDK_OFFSET(0x90ECD30)
#define MONO_SECURITY_ASN1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x90ED070)
#define MONO_SECURITY_ASN1_GET_TAG_OFFSET UNITYSDK_OFFSET(0x90ED090)
#define MONO_SECURITY_ASN1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x90ED0A0)
#define MONO_SECURITY_ASN1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x90ED0B0)
#define MONO_SECURITY_ASN1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x90ED150)
#define MONO_SECURITY_ASN1_COMPAREARRAY_OFFSET UNITYSDK_OFFSET(0x90ED200)
#define MONO_SECURITY_ASN1_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x90ED250)
#define MONO_SECURITY_ASN1_ADD_OFFSET UNITYSDK_OFFSET(0x90ED2B0)
#define MONO_SECURITY_ASN1_GETBYTES_OFFSET UNITYSDK_OFFSET(0x90ED350)
#define MONO_SECURITY_ASN1_DECODE_OFFSET UNITYSDK_OFFSET(0x90ECF30)
#define MONO_SECURITY_ASN1_DECODETLV_OFFSET UNITYSDK_OFFSET(0x90EDAB0)
#define MONO_SECURITY_ASN1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x90EDBC0)
#define MONO_SECURITY_ASN1_ELEMENT_OFFSET UNITYSDK_OFFSET(0x90EDD10)
#define MONO_SECURITY_ASN1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90EDE90)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1_TypeDefinitionIndex = 35735;

	class ASN1 : public Il2CppObject
	{
	public:
		::System::Byte m_nTag; // 0x10
		::Il2CppArray<::System::Object*>* m_aValue; // 0x18
		::System::Collections::ArrayList* elist; // 0x20

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Byte get_Tag()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_TAG_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_LENGTH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Value()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CompareArray(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_COMPAREARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareValue(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_COMPAREVALUE_OFFSET))(arg, nullptr);
		}

		::Mono::Security::ASN1* Add(::Mono::Security::ASN1* arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_ADD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GETBYTES_OFFSET))(nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DecodeTLV(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, uint8_t&* arg, int32_t&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, uint8_t&*, int32_t&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_DECODETLV_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Mono::Security::ASN1* get_Item(::System::Int32 arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Mono::Security::ASN1* Element(::System::Int32 arg, ::System::Byte arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_ELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_TOSTRING_OFFSET))(nullptr);
		}

	};
}

