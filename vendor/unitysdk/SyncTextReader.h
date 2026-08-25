#pragma once
#include "unitysdk.h"

#define SYNCTEXTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92FCD10)
#define SYNCTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x92FCE90)
#define SYNCTEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92FCEC0)
#define SYNCTEXTREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x92FCF70)
#define SYNCTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x92FCFA0)
#define SYNCTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x92FCFD0)
#define SYNCTEXTREADER_READLINE_OFFSET UNITYSDK_OFFSET(0x92FD000)
#define SYNCTEXTREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x92FD030)
#define SYNCTEXTREADER_READASYNC_OFFSET UNITYSDK_OFFSET(0x92FD060)

	inline static constexpr unsigned int SyncTextReader_TypeDefinitionIndex = 25248;

	class SyncTextReader : public Il2CppObject
	{
	public:
		::System::IO::TextReader* _in; // 0x18

		::System::Void .ctor(::System::IO::TextReader* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Peek()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_PEEK_OFFSET))(nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ReadLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_READLINE_OFFSET))(nullptr);
		}

		::System::String* ReadToEnd()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_READTOEND_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYNCTEXTREADER_READASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

	};

