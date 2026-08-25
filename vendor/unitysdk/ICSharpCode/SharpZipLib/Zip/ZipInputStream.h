#pragma once
#include "../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Checksum { class Crc32; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace ICSharpCode::SharpZipLib::Zip { class CompressionMethod; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x904D180)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x904D570)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_CANDECOMPRESSENTRY_OFFSET UNITYSDK_OFFSET(0x904D580)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_ISENTRYCOMPRESSIONMETHODSUPPORTED_OFFSET UNITYSDK_OFFSET(0x904D5D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GETNEXTENTRY_OFFSET UNITYSDK_OFFSET(0x904D610)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATADESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x904E140)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_COMPLETECLOSEENTRY_OFFSET UNITYSDK_OFFSET(0x904E550)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_CLOSEENTRY_OFFSET UNITYSDK_OFFSET(0x904DD90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x904EA50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x904EB00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x904EB90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x904EBF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_INITIALREAD_OFFSET UNITYSDK_OFFSET(0x904EC50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x904FE80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_BODYREAD_OFFSET UNITYSDK_OFFSET(0x904F8A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90501F0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipInputStream_TypeDefinitionIndex = 37120;

	class ZipInputStream : public Il2CppObject
	{
	public:
		ReadDataHandler* internalReader; // 0x58
		::ICSharpCode::SharpZipLib::Checksum::Crc32* crc; // 0x60
		::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry; // 0x68
		::System::Int64 size; // 0x70
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* method; // 0x78
		::System::Int32 flags; // 0x7C
		::System::String* password; // 0x80

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Password(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_SET_PASSWORD_OFFSET))(str, nullptr);
		}

		::System::Boolean get_CanDecompressEntry()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_CANDECOMPRESSENTRY_OFFSET))(nullptr);
		}

		::System::Boolean IsEntryCompressionMethodSupported(::ICSharpCode::SharpZipLib::Zip::ZipEntry* arg)
		{
			return (return (::System::Boolean(*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_ISENTRYCOMPRESSIONMETHODSUPPORTED_OFFSET))(arg, nullptr);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* GetNextEntry()
		{
			return (return (::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GETNEXTENTRY_OFFSET))(nullptr);
		}

		::System::Void ReadDataDescriptor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READDATADESCRIPTOR_OFFSET))(nullptr);
		}

		::System::Void CompleteCloseEntry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_COMPLETECLOSEENTRY_OFFSET))(arg, nullptr);
		}

		::System::Void CloseEntry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_CLOSEENTRY_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Int32 ReadingNotAvailable(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTAVAILABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadingNotSupported(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READINGNOTSUPPORTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 InitialRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_INITIALREAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BodyRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_BODYREAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPINPUTSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

