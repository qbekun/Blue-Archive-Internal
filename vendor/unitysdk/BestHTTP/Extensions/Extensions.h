#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class BufferPoolMemoryStream; }

#define BESTHTTP_EXTENSIONS_EXTENSIONS_ASCIITOSTRING_OFFSET UNITYSDK_OFFSET(0x8B92E0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_GETASCIIBYTES_OFFSET UNITYSDK_OFFSET(0x8B93B0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_SENDASASCII_OFFSET UNITYSDK_OFFSET(0x8B9480)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET UNITYSDK_OFFSET(0x8B9510)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET UNITYSDK_OFFSET(0x8B95B0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET UNITYSDK_OFFSET(0x8B96F0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_GETREQUESTPATHANDQUERYURL_OFFSET UNITYSDK_OFFSET(0x8B9820)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_FINDOPTION_OFFSET UNITYSDK_OFFSET(0x8B9890)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_FINDOPTION_OFFSET UNITYSDK_OFFSET(0x8B99E0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_WRITEARRAY_OFFSET UNITYSDK_OFFSET(0x8B9AB0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_ISHOSTISANIPADDRESS_OFFSET UNITYSDK_OFFSET(0x8B9AF0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_ISIPV4ADDRESSVALID_OFFSET UNITYSDK_OFFSET(0x8B9BC0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_ISIPV6ADDRESSVALID_OFFSET UNITYSDK_OFFSET(0x8B9C50)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_TOINT32_OFFSET UNITYSDK_OFFSET(0x8B9CE0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_TOINT64_OFFSET UNITYSDK_OFFSET(0x8B9D90)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_TODATETIME_OFFSET UNITYSDK_OFFSET(0x8B9E40)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_TOSTROREMPTY_OFFSET UNITYSDK_OFFSET(0x8B9F40)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_TOSTR_OFFSET UNITYSDK_OFFSET(0x8B9F90)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_TOBINARYSTR_OFFSET UNITYSDK_OFFSET(0x8B9FA0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_CALCULATEMD5HASH_OFFSET UNITYSDK_OFFSET(0x8BA010)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_CALCULATEMD5HASH_OFFSET UNITYSDK_OFFSET(0x8BA0A0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_READ_OFFSET UNITYSDK_OFFSET(0x8BA300)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_READ_OFFSET UNITYSDK_OFFSET(0x8BA3E0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_READPOSSIBLEQUOTEDTEXT_OFFSET UNITYSDK_OFFSET(0x8BA610)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x8BA580)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_TRIMANDLOWER_OFFSET UNITYSDK_OFFSET(0x8BA900)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_PEEK_OFFSET UNITYSDK_OFFSET(0x8BAAC0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_PARSEOPTIONALHEADER_OFFSET UNITYSDK_OFFSET(0x8BAB40)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_PARSEQUALITYPARAMS_OFFSET UNITYSDK_OFFSET(0x8BAE30)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_READBUFFER_OFFSET UNITYSDK_OFFSET(0x8BB140)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_READBUFFER_OFFSET UNITYSDK_OFFSET(0x8BB1C0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x8BB240)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET UNITYSDK_OFFSET(0x8B6AB0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET UNITYSDK_OFFSET(0x8B69F0)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_EXTENSIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8BB340)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int Extensions_TypeDefinitionIndex = 23345;

	class Extensions : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::Regex* validIpV4AddressRegex; // 0x0

		::System::String* AsciiToString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_ASCIITOSTRING_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetASCIIBytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_GETASCIIBYTES_OFFSET))(str, nullptr);
		}

		::System::Void SendAsASCII(::System::IO::BinaryWriter* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_SENDASASCII_OFFSET))(arg, str, nullptr);
		}

		::System::Void WriteLine(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::System::IO::Stream* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET))(arg, str, nullptr);
		}

		::System::Void WriteLine(::System::IO::Stream* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* GetRequestPathAndQueryURL(::System::Uri* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_GETREQUESTPATHANDQUERYURL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindOption(::System::String* str, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_FINDOPTION_OFFSET))(str, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindOption(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_FINDOPTION_OFFSET))(arg, str, nullptr);
		}

		::System::Void WriteArray(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_WRITEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsHostIsAnIPAddress(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_ISHOSTISANIPADDRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIpV4AddressValid(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_ISIPV4ADDRESSVALID_OFFSET))(str, nullptr);
		}

		::System::Boolean IsIpV6AddressValid(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_ISIPV6ADDRESSVALID_OFFSET))(str, nullptr);
		}

		::System::Int32 ToInt32(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_TOINT32_OFFSET))(str, arg, nullptr);
		}

		::System::Int64 ToInt64(::System::String* str, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_TOINT64_OFFSET))(str, arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::String* str, ::System::DateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_TODATETIME_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToStrOrEmpty(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_TOSTROREMPTY_OFFSET))(str, nullptr);
		}

		::System::String* ToStr(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_TOSTR_OFFSET))(str, str, nullptr);
		}

		::System::String* ToBinaryStr(::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_TOBINARYSTR_OFFSET))(arg, nullptr);
		}

		::System::String* CalculateMD5Hash(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_CALCULATEMD5HASH_OFFSET))(str, nullptr);
		}

		::System::String* CalculateMD5Hash(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_CALCULATEMD5HASH_OFFSET))(arg, nullptr);
		}

		::System::String* Read(::System::String* str, int32_t&* arg, ::System::Char arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_READ_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* Read(::System::String* str, int32_t&* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_READ_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* ReadPossibleQuotedText(::System::String* str, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_READPOSSIBLEQUOTEDTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SkipWhiteSpace(::System::String* str, int32_t&* arg)
		{
			((::System::Void(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_SKIPWHITESPACE_OFFSET))(str, arg, nullptr);
		}

		::System::String* TrimAndLower(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_TRIMANDLOWER_OFFSET))(str, nullptr);
		}

		Il2CppObject* Peek(::System::String* str, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_PEEK_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* ParseOptionalHeader(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_PARSEOPTIONALHEADER_OFFSET))(str, nullptr);
		}

		Il2CppObject* ParseQualityParams(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_PARSEQUALITYPARAMS_OFFSET))(str, nullptr);
		}

		::System::Void ReadBuffer(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_READBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadBuffer(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_READBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteString(::BestHTTP::Extensions::BufferPoolMemoryStream* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::Extensions::BufferPoolMemoryStream*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_WRITESTRING_OFFSET))(arg, str, nullptr);
		}

		::System::Void WriteLine(::BestHTTP::Extensions::BufferPoolMemoryStream* arg)
		{
			((::System::Void(*)(::BestHTTP::Extensions::BufferPoolMemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteLine(::BestHTTP::Extensions::BufferPoolMemoryStream* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::Extensions::BufferPoolMemoryStream*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_WRITELINE_OFFSET))(arg, str, nullptr);
		}

		::System::Void Clear(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXTENSIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

