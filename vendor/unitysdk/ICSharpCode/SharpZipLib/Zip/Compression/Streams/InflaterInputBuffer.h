#pragma once
#include "../../../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class Inflater; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9054ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x9054F60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_SET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x9054F70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_SETINFLATERINPUT_OFFSET UNITYSDK_OFFSET(0x904F840)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_FILL_OFFSET UNITYSDK_OFFSET(0x9054F80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READRAWBUFFER_OFFSET UNITYSDK_OFFSET(0x904E020)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READRAWBUFFER_OFFSET UNITYSDK_OFFSET(0x90550D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READCLEARTEXTBUFFER_OFFSET UNITYSDK_OFFSET(0x904F710)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLEBYTE_OFFSET UNITYSDK_OFFSET(0x9055200)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLESHORT_OFFSET UNITYSDK_OFFSET(0x904DFF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLEINT_OFFSET UNITYSDK_OFFSET(0x904DFA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLELONG_OFFSET UNITYSDK_OFFSET(0x904E4C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_SET_CRYPTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x904F5A0)

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams
{
	inline static constexpr unsigned int InflaterInputBuffer_TypeDefinitionIndex = 37127;

	class InflaterInputBuffer : public Il2CppObject
	{
	public:
		::System::Int32 rawLength; // 0x10
		::Il2CppArray<::System::Object*>* rawData; // 0x18
		::System::Int32 clearTextLength; // 0x20
		::Il2CppArray<::System::Object*>* clearText; // 0x28
		::Il2CppArray<::System::Object*>* internalClearText; // 0x30
		::System::Int32 available; // 0x38
		::System::Security::Cryptography::ICryptoTransform* cryptoTransform; // 0x40
		::System::IO::Stream* inputStream; // 0x48

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Available()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_GET_AVAILABLE_OFFSET))(nullptr);
		}

		::System::Void set_Available(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_SET_AVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetInflaterInput(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* arg)
		{
			((::System::Void(*)(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_SETINFLATERINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Fill()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_FILL_OFFSET))(nullptr);
		}

		::System::Int32 ReadRawBuffer(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READRAWBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadRawBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READRAWBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadClearTextBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READCLEARTEXTBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadLeByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLEBYTE_OFFSET))(nullptr);
		}

		::System::Int32 ReadLeShort()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLESHORT_OFFSET))(nullptr);
		}

		::System::Int32 ReadLeInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLEINT_OFFSET))(nullptr);
		}

		::System::Int64 ReadLeLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_READLELONG_OFFSET))(nullptr);
		}

		::System::Void set_CryptoTransform(::System::Security::Cryptography::ICryptoTransform* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::ICryptoTransform*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTBUFFER_SET_CRYPTOTRANSFORM_OFFSET))(arg, nullptr);
		}

	};
}

