#pragma once
#include "../unitysdk.h"

namespace Win32Native { class Win32FrameSize; }
namespace Win32Native { class Win32WindowRect; }
namespace Win32Native { class Win32ClientRect; }
namespace UnityEngine { class Vector2Int; }

#define WIN32NATIVE_WIN32RECTCONVERTER_GETFRAMESIZE_OFFSET UNITYSDK_OFFSET(0xDECEF0)
#define WIN32NATIVE_WIN32RECTCONVERTER_GETFRAMESIZE_OFFSET UNITYSDK_OFFSET(0xDF23A0)
#define WIN32NATIVE_WIN32RECTCONVERTER_CLIENTTOWINDOW_OFFSET UNITYSDK_OFFSET(0xDF2B00)
#define WIN32NATIVE_WIN32RECTCONVERTER_WINDOWTOCLIENT_OFFSET UNITYSDK_OFFSET(0xDF3020)
#define WIN32NATIVE_WIN32RECTCONVERTER_CLIENTSIZETOWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0xDE7610)
#define WIN32NATIVE_WIN32RECTCONVERTER_WINDOWSIZETOCLIENTSIZE_OFFSET UNITYSDK_OFFSET(0xDF3630)

namespace Win32Native
{
	inline static constexpr unsigned int Win32RectConverter_TypeDefinitionIndex = 10179;

	class Win32RectConverter : public Il2CppObject
	{
	public:
		::System::UInt32 DEFAULT_STYLE; // 0x0
		::System::UInt32 DEFAULT_EX_STYLE; // 0x0

		::Win32Native::Win32FrameSize* GetFrameSize(::System::UInt32 arg, ::System::UInt32 arg2)
		{
			return ((::Win32Native::Win32FrameSize*(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32RECTCONVERTER_GETFRAMESIZE_OFFSET))(arg, arg2, nullptr);
		}

		::Win32Native::Win32FrameSize* GetFrameSize(::System::Int32 arg)
		{
			return ((::Win32Native::Win32FrameSize*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32RECTCONVERTER_GETFRAMESIZE_OFFSET))(arg, nullptr);
		}

		::Win32Native::Win32WindowRect* ClientToWindow(::Win32Native::Win32ClientRect* arg, ::System::UInt32 arg2, ::System::UInt32 arg3)
		{
			return ((::Win32Native::Win32WindowRect*(*)(::Win32Native::Win32ClientRect*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32RECTCONVERTER_CLIENTTOWINDOW_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Win32Native::Win32ClientRect* WindowToClient(::Win32Native::Win32WindowRect* arg, ::System::UInt32 arg2, ::System::UInt32 arg3)
		{
			return ((::Win32Native::Win32ClientRect*(*)(::Win32Native::Win32WindowRect*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32RECTCONVERTER_WINDOWTOCLIENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2Int* ClientSizeToWindowSize(::System::Int32 arg, ::System::Int32 arg2, ::System::UInt32 arg3, ::System::UInt32 arg4)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32RECTCONVERTER_CLIENTSIZETOWINDOWSIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Vector2Int* WindowSizeToClientSize(::System::Int32 arg, ::System::Int32 arg2, ::System::UInt32 arg3, ::System::UInt32 arg4)
		{
			return ((::UnityEngine::Vector2Int*(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32RECTCONVERTER_WINDOWSIZETOCLIENTSIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

