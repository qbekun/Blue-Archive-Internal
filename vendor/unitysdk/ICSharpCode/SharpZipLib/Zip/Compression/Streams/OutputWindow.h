#pragma once
#include "../../../../../unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_WRITE_OFFSET UNITYSDK_OFFSET(0x9051750)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_SLOWREPEAT_OFFSET UNITYSDK_OFFSET(0x9055870)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_REPEAT_OFFSET UNITYSDK_OFFSET(0x9051A00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYSTORED_OFFSET UNITYSDK_OFFSET(0x9052610)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETFREESPACE_OFFSET UNITYSDK_OFFSET(0x9051740)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9055AA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYOUTPUT_OFFSET UNITYSDK_OFFSET(0x9052DB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_RESET_OFFSET UNITYSDK_OFFSET(0x9050ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9050E60)

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams
{
	inline static constexpr unsigned int OutputWindow_TypeDefinitionIndex = 37129;

	class OutputWindow : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* window; // 0x10
		::System::Int32 windowEnd; // 0x18
		::System::Int32 windowFilled; // 0x1C

		::System::Void Write(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void SlowRepeat(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_SLOWREPEAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Repeat(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_REPEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CopyStored(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYSTORED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetFreeSpace()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETFREESPACE_OFFSET))(nullptr);
		}

		::System::Int32 GetAvailable()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETAVAILABLE_OFFSET))(nullptr);
		}

		::System::Int32 CopyOutput(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYOUTPUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_.CTOR_OFFSET))(nullptr);
		}

	};
}

