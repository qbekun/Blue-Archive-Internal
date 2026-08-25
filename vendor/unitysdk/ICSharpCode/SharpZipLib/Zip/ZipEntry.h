#pragma once
#include "../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip { class CompressionMethod; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipExtraData; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x904AF20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISCRYPTED_OFFSET UNITYSDK_OFFSET(0x904B240)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ISUNICODETEXT_OFFSET UNITYSDK_OFFSET(0x904B220)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRYPTOCHECKVALUE_OFFSET UNITYSDK_OFFSET(0x904B250)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRYPTOCHECKVALUE_OFFSET UNITYSDK_OFFSET(0x904B260)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x904B270)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x904B280)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_EXTERNALFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x904B290)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_HASDOSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x904B2B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_HOSTSYSTEM_OFFSET UNITYSDK_OFFSET(0x904B2E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x904B2F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CANDECOMPRESS_OFFSET UNITYSDK_OFFSET(0x904B5F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_LOCALHEADERREQUIRESZIP64_OFFSET UNITYSDK_OFFSET(0x904B690)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CENTRALHEADERREQUIRESZIP64_OFFSET UNITYSDK_OFFSET(0x904B4C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DOSTIME_OFFSET UNITYSDK_OFFSET(0x904B750)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x904B8C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DATETIME_OFFSET UNITYSDK_OFFSET(0x904B190)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x904B8D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x904B8E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x904B900)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSEDSIZE_OFFSET UNITYSDK_OFFSET(0x904B910)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMPRESSEDSIZE_OFFSET UNITYSDK_OFFSET(0x904B930)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRC_OFFSET UNITYSDK_OFFSET(0x904B940)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRC_OFFSET UNITYSDK_OFFSET(0x904B960)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x904B970)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHODFORHEADER_OFFSET UNITYSDK_OFFSET(0x904B980)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x904B9B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESKEYSIZE_OFFSET UNITYSDK_OFFSET(0x904B430)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESSALTLEN_OFFSET UNITYSDK_OFFSET(0x904BB00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESOVERHEADSIZE_OFFSET UNITYSDK_OFFSET(0x904BB20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ENCRYPTIONOVERHEADSIZE_OFFSET UNITYSDK_OFFSET(0x904B710)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSEXTRADATA_OFFSET UNITYSDK_OFFSET(0x904BB40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GETDATETIME_OFFSET UNITYSDK_OFFSET(0x904BFB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSAESEXTRADATA_OFFSET UNITYSDK_OFFSET(0x904C040)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISDIRECTORY_OFFSET UNITYSDK_OFFSET(0x904B550)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x904C330)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_OFFSET UNITYSDK_OFFSET(0x904B670)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x904C390)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_OFFSET UNITYSDK_OFFSET(0x904C380)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipEntry_TypeDefinitionIndex = 37112;

	class ZipEntry : public Il2CppObject
	{
	public:
		Known* known; // 0x10
		::System::Int32 externalFileAttributes; // 0x14
		::System::UInt16 versionMadeBy; // 0x18
		::System::String* name; // 0x20
		::System::UInt64 size; // 0x28
		::System::UInt64 compressedSize; // 0x30
		::System::UInt16 versionToExtract; // 0x38
		::System::UInt32 crc; // 0x3C
		::System::DateTime* dateTime; // 0x40
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* method; // 0x48
		::Il2CppArray<::System::Object*>* extra; // 0x50
		::System::Int32 flags; // 0x58
		::System::Int64 zipFileIndex; // 0x60
		::System::Int64 offset; // 0x68
		::System::Boolean forceZip64_; // 0x70
		::System::Byte cryptoCheckValue_; // 0x71
		::System::Int32 _aesVer; // 0x74
		::System::Int32 _aesEncryptionStrength; // 0x78

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsCrypted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISCRYPTED_OFFSET))(nullptr);
		}

		::System::Void set_IsUnicodeText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ISUNICODETEXT_OFFSET))(arg, nullptr);
		}

		::System::Byte get_CryptoCheckValue()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRYPTOCHECKVALUE_OFFSET))(nullptr);
		}

		::System::Void set_CryptoCheckValue(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRYPTOCHECKVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Flags()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_Flags(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExternalFileAttributes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_EXTERNALFILEATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean HasDosAttributes(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_HASDOSATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HostSystem()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_HOSTSYSTEM_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanDecompress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CANDECOMPRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_LocalHeaderRequiresZip64()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_LOCALHEADERREQUIRESZIP64_OFFSET))(nullptr);
		}

		::System::Boolean get_CentralHeaderRequiresZip64()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CENTRALHEADERREQUIRESZIP64_OFFSET))(nullptr);
		}

		::System::Void set_DosTime(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DOSTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_DateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_DATETIME_OFFSET))(nullptr);
		}

		::System::Void set_DateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DATETIME_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Size()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_Size(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CompressedSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSEDSIZE_OFFSET))(nullptr);
		}

		::System::Void set_CompressedSize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMPRESSEDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Crc()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRC_OFFSET))(nullptr);
		}

		::System::Void set_Crc(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRC_OFFSET))(arg, nullptr);
		}

		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* get_CompressionMethod()
		{
			return (return (::ICSharpCode::SharpZipLib::Zip::CompressionMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHOD_OFFSET))(nullptr);
		}

		::ICSharpCode::SharpZipLib::Zip::CompressionMethod* get_CompressionMethodForHeader()
		{
			return (return (::ICSharpCode::SharpZipLib::Zip::CompressionMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHODFORHEADER_OFFSET))(nullptr);
		}

		::System::Void set_ExtraData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_EXTRADATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AESKeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESKEYSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_AESSaltLen()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESSALTLEN_OFFSET))(nullptr);
		}

		::System::Int32 get_AESOverheadSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESOVERHEADSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_EncryptionOverheadSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ENCRYPTIONOVERHEADSIZE_OFFSET))(nullptr);
		}

		::System::Void ProcessExtraData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSEXTRADATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDateTime(::ICSharpCode::SharpZipLib::Zip::ZipExtraData* arg)
		{
			return (return (Il2CppObject*(*)(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GETDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAESExtraData(::ICSharpCode::SharpZipLib::Zip::ZipExtraData* arg)
		{
			((::System::Void(*)(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSAESEXTRADATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDirectory()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISDIRECTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISFILE_OFFSET))(nullptr);
		}

		::System::Boolean IsCompressionMethodSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsCompressionMethodSupported(::ICSharpCode::SharpZipLib::Zip::CompressionMethod* arg)
		{
			return (return (::System::Boolean(*)(::ICSharpCode::SharpZipLib::Zip::CompressionMethod*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_OFFSET))(arg, nullptr);
		}

	};
}

