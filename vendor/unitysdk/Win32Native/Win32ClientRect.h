#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectInt; }
namespace UnityEngine { class Vector2Int; }
namespace Win32Native { class Win32WindowRect; }
namespace Win32Native { class Win32ClientRect; }

#define WIN32NATIVE_WIN32CLIENTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDEF380)
#define WIN32NATIVE_WIN32CLIENTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDEF3A0)
#define WIN32NATIVE_WIN32CLIENTRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF2AE0)
#define WIN32NATIVE_WIN32CLIENTRECT_TOWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xDF1790)
#define WIN32NATIVE_WIN32CLIENTRECT_TORECTINT_OFFSET UNITYSDK_OFFSET(0xDEED40)
#define WIN32NATIVE_WIN32CLIENTRECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xDF2C10)
#define WIN32NATIVE_WIN32CLIENTRECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xDF2C20)
#define WIN32NATIVE_WIN32CLIENTRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xDF2390)
#define WIN32NATIVE_WIN32CLIENTRECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDEC250)
#define WIN32NATIVE_WIN32CLIENTRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xDF2C30)
#define WIN32NATIVE_WIN32CLIENTRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xDF2C60)
#define WIN32NATIVE_WIN32CLIENTRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDF2CF0)
#define WIN32NATIVE_WIN32CLIENTRECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDF2D70)
#define WIN32NATIVE_WIN32CLIENTRECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDF2DA0)
#define WIN32NATIVE_WIN32CLIENTRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDF2DD0)

namespace Win32Native
{
	inline static constexpr unsigned int Win32ClientRect_TypeDefinitionIndex = 10176;

	class Win32ClientRect : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RectInt* arg)
		{
			((::System::Void(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2Int* arg, ::UnityEngine::Vector2Int* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::Win32Native::Win32WindowRect* ToWindowRect()
		{
			return ((::Win32Native::Win32WindowRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_TOWINDOWRECT_OFFSET))(nullptr);
		}

		::UnityEngine::RectInt* ToRectInt()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_TORECTINT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* get_Position()
		{
			return ((::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* get_Size()
		{
			return ((::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_GET_SIZE_OFFSET))(nullptr);
		}

		::Win32Native::Win32ClientRect* get_Zero()
		{
			return ((::Win32Native::Win32ClientRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_GET_ZERO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::Win32Native::Win32ClientRect* arg)
		{
			return ((::System::Boolean(*)(::Win32Native::Win32ClientRect*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Win32Native::Win32ClientRect* arg, ::Win32Native::Win32ClientRect* arg2)
		{
			return ((::System::Boolean(*)(::Win32Native::Win32ClientRect*, ::Win32Native::Win32ClientRect*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Win32Native::Win32ClientRect* arg, ::Win32Native::Win32ClientRect* arg2)
		{
			return ((::System::Boolean(*)(::Win32Native::Win32ClientRect*, ::Win32Native::Win32ClientRect*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32CLIENTRECT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

