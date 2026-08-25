#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9B04020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B04030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B04060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B04080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_GET_HASDATA_OFFSET UNITYSDK_OFFSET(0x9B04240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_PEEKTAG_OFFSET UNITYSDK_OFFSET(0x9B04250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_SKIPVALUE_OFFSET UNITYSDK_OFFSET(0x9B042F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READNEXTENCODEDVALUE_OFFSET UNITYSDK_OFFSET(0x9B04340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9B04520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READINTEGER_OFFSET UNITYSDK_OFFSET(0x9B045E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READINTEGERBYTES_OFFSET UNITYSDK_OFFSET(0x9B04680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READBITSTRING_OFFSET UNITYSDK_OFFSET(0x9B047B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READOCTETSTRING_OFFSET UNITYSDK_OFFSET(0x9B048E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READOIDASSTRING_OFFSET UNITYSDK_OFFSET(0x9B04980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READUTF8STRING_OFFSET UNITYSDK_OFFSET(0x9B04CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READCOLLECTIONWITHTAG_OFFSET UNITYSDK_OFFSET(0x9B04E00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9B04F70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READSET_OFFSET UNITYSDK_OFFSET(0x9B04F80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READPRINTABLESTRING_OFFSET UNITYSDK_OFFSET(0x9B04F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READIA5STRING_OFFSET UNITYSDK_OFFSET(0x9B05060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READT61STRING_OFFSET UNITYSDK_OFFSET(0x9B05130)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READX509DATE_OFFSET UNITYSDK_OFFSET(0x9B054E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READUTCTIME_OFFSET UNITYSDK_OFFSET(0x9B055B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READGENERALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x9B055F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READBMPSTRING_OFFSET UNITYSDK_OFFSET(0x9B05880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_TRIMTRAILINGNULLS_OFFSET UNITYSDK_OFFSET(0x9B04D90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READTIME_OFFSET UNITYSDK_OFFSET(0x9B05630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READCONTENTASBYTES_OFFSET UNITYSDK_OFFSET(0x9B04720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_EATTAG_OFFSET UNITYSDK_OFFSET(0x9B04180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_CHECKTAG_OFFSET UNITYSDK_OFFSET(0x9B04EC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_EATLENGTH_OFFSET UNITYSDK_OFFSET(0x9B04200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_SCANCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9B043E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DerSequenceReader_TypeDefinitionIndex = 29268;

	class DerSequenceReader : public Il2CppObject
	{
	public:
		::System::Globalization::DateTimeFormatInfo* s_validityDateTimeFormatInfo; // 0x0
		::System::Text::Encoding* s_utf8EncodingWithExceptionFallback; // 0x8
		::System::Text::Encoding* s_latin1Encoding; // 0x10
		::Il2CppArray<::System::Object*>* _data; // 0x10
		::System::Int32 _end; // 0x18
		::System::Int32 _position; // 0x1C
		::System::Int32 _ContentLength_k__BackingField; // 0x20

		::System::Void set_ContentLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_SET_CONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(DerTag* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(DerTag*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_HasData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_GET_HASDATA_OFFSET))(nullptr);
		}

		::System::Byte PeekTag()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_PEEKTAG_OFFSET))(nullptr);
		}

		::System::Void SkipValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_SKIPVALUE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadNextEncodedValue()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READNEXTENCODEDVALUE_OFFSET))(nullptr);
		}

		::System::Boolean ReadBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READBOOLEAN_OFFSET))(nullptr);
		}

		::System::Int32 ReadInteger()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READINTEGER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadIntegerBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READINTEGERBYTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBitString()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READBITSTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadOctetString()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READOCTETSTRING_OFFSET))(nullptr);
		}

		::System::String* ReadOidAsString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READOIDASSTRING_OFFSET))(nullptr);
		}

		::System::String* ReadUtf8String()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READUTF8STRING_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DerSequenceReader* ReadCollectionWithTag(DerTag* arg)
		{
			return (return (::System::Security::Cryptography::DerSequenceReader*(*)(DerTag*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READCOLLECTIONWITHTAG_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DerSequenceReader* ReadSequence()
		{
			return (return (::System::Security::Cryptography::DerSequenceReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READSEQUENCE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DerSequenceReader* ReadSet()
		{
			return (return (::System::Security::Cryptography::DerSequenceReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READSET_OFFSET))(nullptr);
		}

		::System::String* ReadPrintableString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READPRINTABLESTRING_OFFSET))(nullptr);
		}

		::System::String* ReadIA5String()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READIA5STRING_OFFSET))(nullptr);
		}

		::System::String* ReadT61String()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READT61STRING_OFFSET))(nullptr);
		}

		::System::DateTime* ReadX509Date()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READX509DATE_OFFSET))(nullptr);
		}

		::System::DateTime* ReadUtcTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READUTCTIME_OFFSET))(nullptr);
		}

		::System::DateTime* ReadGeneralizedTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READGENERALIZEDTIME_OFFSET))(nullptr);
		}

		::System::String* ReadBMPString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READBMPSTRING_OFFSET))(nullptr);
		}

		::System::String* TrimTrailingNulls(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_TRIMTRAILINGNULLS_OFFSET))(str, nullptr);
		}

		::System::DateTime* ReadTime(DerTag* arg, ::System::String* str)
		{
			return (return (::System::DateTime*(*)(DerTag*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READTIME_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadContentAsBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_READCONTENTASBYTES_OFFSET))(nullptr);
		}

		::System::Void EatTag(DerTag* arg)
		{
			((::System::Void(*)(DerTag*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_EATTAG_OFFSET))(arg, nullptr);
		}

		::System::Void CheckTag(DerTag* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(DerTag*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_CHECKTAG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EatLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_EATLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 ScanContentLength(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERSEQUENCEREADER_SCANCONTENTLENGTH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

