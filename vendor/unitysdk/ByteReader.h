#pragma once
#include "unitysdk.h"

namespace UnityEngine { class TextAsset; }
class ByteReader;

#define BYTEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46A80)
#define BYTEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46AB0)
#define BYTEREADER_OPEN_OFFSET UNITYSDK_OFFSET(0xA46B00)
#define BYTEREADER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0xA46C30)
#define BYTEREADER_READLINE_OFFSET UNITYSDK_OFFSET(0xA46C50)
#define BYTEREADER_READLINE_OFFSET UNITYSDK_OFFSET(0xA46CA0)
#define BYTEREADER_READLINE_OFFSET UNITYSDK_OFFSET(0xA46CB0)
#define BYTEREADER_READDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA46DE0)
#define BYTEREADER_READCSV_OFFSET UNITYSDK_OFFSET(0xA46FA0)
#define BYTEREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA47430)

	inline static constexpr unsigned int ByteReader_TypeDefinitionIndex = 99;

	class ByteReader : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mBuffer; // 0x10
		::System::Int32 mOffset; // 0x18
		Il2CppObject* mTemp; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::TextAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextAsset*, ::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		ByteReader* Open(::System::String* str)
		{
			return ((ByteReader*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_OPEN_OFFSET))(str, nullptr);
		}

		::System::Boolean get_canRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::String* ReadLine(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_READLINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* ReadLine()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_READLINE_OFFSET))(nullptr);
		}

		::System::String* ReadLine(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_READLINE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadDictionary()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_READDICTIONARY_OFFSET))(nullptr);
		}

		Il2CppObject* ReadCSV()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_READCSV_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEREADER_.CCTOR_OFFSET))(nullptr);
		}

	};

