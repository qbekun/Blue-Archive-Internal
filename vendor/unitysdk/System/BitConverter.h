#pragma once
#include "../unitysdk.h"

#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9279250)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x92792C0)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9279320)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9279380)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x92793E0)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9279440)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x92794A0)
#define SYSTEM_BITCONVERTER_TRYWRITEBYTES_OFFSET UNITYSDK_OFFSET(0x9279500)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9279570)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x92795D0)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x9279630)
#define SYSTEM_BITCONVERTER_TOINT16_OFFSET UNITYSDK_OFFSET(0x9279690)
#define SYSTEM_BITCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x9279710)
#define SYSTEM_BITCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x9279790)
#define SYSTEM_BITCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x9279810)
#define SYSTEM_BITCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x92798E0)
#define SYSTEM_BITCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x92799B0)
#define SYSTEM_BITCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9279A80)
#define SYSTEM_BITCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9279B50)
#define SYSTEM_BITCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9279E70)
#define SYSTEM_BITCONVERTER_DOUBLETOINT64BITS_OFFSET UNITYSDK_OFFSET(0x9279EE0)
#define SYSTEM_BITCONVERTER_INT64BITSTODOUBLE_OFFSET UNITYSDK_OFFSET(0x9279EF0)
#define SYSTEM_BITCONVERTER_SINGLETOINT32BITS_OFFSET UNITYSDK_OFFSET(0x9279F00)
#define SYSTEM_BITCONVERTER_INT32BITSTOSINGLE_OFFSET UNITYSDK_OFFSET(0x9279F10)
#define SYSTEM_BITCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9279F20)

namespace System
{
	inline static constexpr unsigned int BitConverter_TypeDefinitionIndex = 23716;

	class BitConverter : public Il2CppObject
	{
	public:
		::System::Boolean IsLittleEndian; // 0x0

		::Il2CppArray<::System::Object*>* GetBytes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Char arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Int16 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Int64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::UInt16 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryWriteBytes(Il2CppObject* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TRYWRITEBYTES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::UInt64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Double arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int16 ToInt16(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int16(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT16_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ToInt32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT32_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 ToInt64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT64_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt16 ToUInt16(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt16(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT16_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 ToUInt32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT32_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 ToUInt64(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT64_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ToSingle(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSINGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int64 DoubleToInt64Bits(::System::Double arg)
		{
			return (return (::System::Int64(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_DOUBLETOINT64BITS_OFFSET))(arg, nullptr);
		}

		::System::Double Int64BitsToDouble(::System::Int64 arg)
		{
			return (return (::System::Double(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_INT64BITSTODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 SingleToInt32Bits(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_SINGLETOINT32BITS_OFFSET))(arg, nullptr);
		}

		::System::Single Int32BitsToSingle(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_INT32BITSTOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

