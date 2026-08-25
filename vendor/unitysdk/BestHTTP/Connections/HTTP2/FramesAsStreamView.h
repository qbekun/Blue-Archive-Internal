#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class IFrameDataView; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_WRITE_OFFSET UNITYSDK_OFFSET(0x909D10)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_FLUSH_OFFSET UNITYSDK_OFFSET(0x909D60)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x909D70)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x909E10)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_TOSTRING_OFFSET UNITYSDK_OFFSET(0x909E20)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x909E50)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x909EB0)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_READBYTE_OFFSET UNITYSDK_OFFSET(0x909EC0)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_SEEK_OFFSET UNITYSDK_OFFSET(0x909F60)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_READ_OFFSET UNITYSDK_OFFSET(0x909FB0)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x90A070)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_CLOSE_OFFSET UNITYSDK_OFFSET(0x90A080)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x90A130)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x90A1D0)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_ADDFRAME_OFFSET UNITYSDK_OFFSET(0x90A220)
#define BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x90A300)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int FramesAsStreamView_TypeDefinitionIndex = 23434;

	class FramesAsStreamView : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::IFrameDataView* view; // 0x28

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::IFrameDataView* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::IFrameDataView*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_READBYTE_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_CLOSE_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void AddFrame(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_ADDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_FRAMESASSTREAMVIEW_SET_POSITION_OFFSET))(arg, nullptr);
		}

	};
}

