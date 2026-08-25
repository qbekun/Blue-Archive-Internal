#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WWWTRANSCODER_HEX2BYTE_OFFSET UNITYSDK_OFFSET(0xA4A2650)
#define UNITYENGINE_WWWTRANSCODER_BYTE2HEX_OFFSET UNITYSDK_OFFSET(0xA4A2780)
#define UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET UNITYSDK_OFFSET(0xA4A27C0)
#define UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET UNITYSDK_OFFSET(0xA4A22D0)
#define UNITYENGINE_WWWTRANSCODER_QPENCODE_OFFSET UNITYSDK_OFFSET(0xA4A21E0)
#define UNITYENGINE_WWWTRANSCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0xA4A28B0)
#define UNITYENGINE_WWWTRANSCODER_BYTEARRAYCONTAINS_OFFSET UNITYSDK_OFFSET(0xA4A2D00)
#define UNITYENGINE_WWWTRANSCODER_URLDECODE_OFFSET UNITYSDK_OFFSET(0xA4A0760)
#define UNITYENGINE_WWWTRANSCODER_BYTESUBARRAYEQUALS_OFFSET UNITYSDK_OFFSET(0xA4A30C0)
#define UNITYENGINE_WWWTRANSCODER_DECODE_OFFSET UNITYSDK_OFFSET(0xA4A2D50)
#define UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET UNITYSDK_OFFSET(0xA4A20B0)
#define UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET UNITYSDK_OFFSET(0xA4A3140)
#define UNITYENGINE_WWWTRANSCODER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4A3180)

namespace UnityEngine
{
	inline static constexpr unsigned int WWWTranscoder_TypeDefinitionIndex = 37421;

	class WWWTranscoder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ucHexChars; // 0x0
		::Il2CppArray<::System::Object*>* lcHexChars; // 0x8
		::System::Byte urlEscapeChar; // 0x10
		::Il2CppArray<::System::Object*>* urlSpace; // 0x18
		::Il2CppArray<::System::Object*>* dataSpace; // 0x20
		::Il2CppArray<::System::Object*>* urlForbidden; // 0x28
		::System::Byte qpEscapeChar; // 0x30
		::Il2CppArray<::System::Object*>* qpSpace; // 0x38
		::Il2CppArray<::System::Object*>* qpForbidden; // 0x40

		::System::Byte Hex2Byte(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_HEX2BYTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Byte2Hex(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, uint8_t&* arg, uint8_t&* arg)
		{
			((::System::Void(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, uint8_t&*, uint8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTE2HEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* DataEncode(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DataEncode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DATAENCODE_OFFSET))(arg, nullptr);
		}

		::System::String* QPEncode(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_QPENCODE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_ENCODE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ByteArrayContains(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTEARRAYCONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* URLDecode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_URLDECODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ByteSubArrayEquals(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_BYTESUBARRAYEQUALS_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decode(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_DECODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SevenBitClean(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean SevenBitClean(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_SEVENBITCLEAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWTRANSCODER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

