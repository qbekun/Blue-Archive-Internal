#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x904CA80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x904CE40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x904CE70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x904CEA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x904CED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x904CF00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x904CF30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x904CF60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x904CF90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x904CFC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x904CFF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x904D020)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x904D050)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x904D080)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLESHORT_OFFSET UNITYSDK_OFFSET(0x904D0D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLEINT_OFFSET UNITYSDK_OFFSET(0x904CAE0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipHelperStream_TypeDefinitionIndex = 37118;

	class ZipHelperStream : public Il2CppObject
	{
	public:
		::System::Boolean isOwner_; // 0x28
		::System::IO::Stream* stream_; // 0x30

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTimeout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANTIMEOUT_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadLEShort()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLESHORT_OFFSET))(nullptr);
		}

		::System::Int32 ReadLEInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLEINT_OFFSET))(nullptr);
		}

	};
}

