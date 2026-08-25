#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x904BE40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_VALUELENGTH_OFFSET UNITYSDK_OFFSET(0x904CBF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_FIND_OFFSET UNITYSDK_OFFSET(0x904BEB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READLONG_OFFSET UNITYSDK_OFFSET(0x904BF70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READINT_OFFSET UNITYSDK_OFFSET(0x904CD90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORT_OFFSET UNITYSDK_OFFSET(0x904C270)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READBYTE_OFFSET UNITYSDK_OFFSET(0x904C2D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READCHECK_OFFSET UNITYSDK_OFFSET(0x904CCB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORTINTERNAL_OFFSET UNITYSDK_OFFSET(0x904CC00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x904CE20)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipExtraData_TypeDefinitionIndex = 37117;

	class ZipExtraData : public Il2CppObject
	{
	public:
		::System::Int32 _index; // 0x10
		::System::Int32 _readValueStart; // 0x14
		::System::Int32 _readValueLength; // 0x18
		::System::IO::MemoryStream* _newEntry; // 0x20
		::Il2CppArray<::System::Object*>* _data; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GETDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_ValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_GET_VALUELENGTH_OFFSET))(nullptr);
		}

		::System::Boolean Find(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_FIND_OFFSET))(arg, nullptr);
		}

		::System::Int64 ReadLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READLONG_OFFSET))(nullptr);
		}

		::System::Int32 ReadInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READINT_OFFSET))(nullptr);
		}

		::System::Int32 ReadShort()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORT_OFFSET))(nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READBYTE_OFFSET))(nullptr);
		}

		::System::Void ReadCheck(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READCHECK_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadShortInternal()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_READSHORTINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXTRADATA_DISPOSE_OFFSET))(nullptr);
		}

	};
}

