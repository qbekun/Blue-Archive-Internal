#pragma once
#include "unitysdk.h"

#define SKELETONINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95BBE50)
#define SKELETONINPUT_READ_OFFSET UNITYSDK_OFFSET(0x95BC960)
#define SKELETONINPUT_READUBYTE_OFFSET UNITYSDK_OFFSET(0x95BC990)
#define SKELETONINPUT_READSBYTE_OFFSET UNITYSDK_OFFSET(0x95C3310)
#define SKELETONINPUT_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x95BC750)
#define SKELETONINPUT_READFLOAT_OFFSET UNITYSDK_OFFSET(0x95BC610)
#define SKELETONINPUT_READINT_OFFSET UNITYSDK_OFFSET(0x95BC880)
#define SKELETONINPUT_READLONG_OFFSET UNITYSDK_OFFSET(0x95BC460)
#define SKELETONINPUT_READINT_OFFSET UNITYSDK_OFFSET(0x95BC780)
#define SKELETONINPUT_READSTRING_OFFSET UNITYSDK_OFFSET(0x95BC540)
#define SKELETONINPUT_READSTRINGREF_OFFSET UNITYSDK_OFFSET(0x95BC910)
#define SKELETONINPUT_READFULLY_OFFSET UNITYSDK_OFFSET(0x95C3390)
#define SKELETONINPUT_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x95BBEE0)
#define SKELETONINPUT_GETVERSIONSTRINGOLD3X_OFFSET UNITYSDK_OFFSET(0x95C3440)

	inline static constexpr unsigned int SkeletonInput_TypeDefinitionIndex = 35056;

	class SkeletonInput : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* chars; // 0x10
		::Il2CppArray<::System::Object*>* bytesBigEndian; // 0x18
		::Il2CppArray<::System::Object*>* strings; // 0x20
		::System::IO::Stream* input; // 0x28

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READ_OFFSET))(nullptr);
		}

		::System::Byte ReadUByte()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READUBYTE_OFFSET))(nullptr);
		}

		::System::SByte ReadSByte()
		{
			return (return (::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READSBYTE_OFFSET))(nullptr);
		}

		::System::Boolean ReadBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READBOOLEAN_OFFSET))(nullptr);
		}

		::System::Single ReadFloat()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READFLOAT_OFFSET))(nullptr);
		}

		::System::Int32 ReadInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READINT_OFFSET))(nullptr);
		}

		::System::Int64 ReadLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READLONG_OFFSET))(nullptr);
		}

		::System::Int32 ReadInt(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READINT_OFFSET))(arg, nullptr);
		}

		::System::String* ReadString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READSTRING_OFFSET))(nullptr);
		}

		::System::String* ReadStringRef()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READSTRINGREF_OFFSET))(nullptr);
		}

		::System::Void ReadFully(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_READFULLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetVersionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_GETVERSIONSTRING_OFFSET))(nullptr);
		}

		::System::String* GetVersionStringOld3X()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKELETONINPUT_GETVERSIONSTRINGOLD3X_OFFSET))(nullptr);
		}

	};

