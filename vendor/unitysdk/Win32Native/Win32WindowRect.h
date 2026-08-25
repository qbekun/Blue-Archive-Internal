#pragma once
#include "../unitysdk.h"

class RECT;
namespace Win32Native { class Win32ClientRect; }
namespace UnityEngine { class RectInt; }
namespace UnityEngine { class Vector2Int; }
namespace Win32Native { class Win32WindowRect; }

#define WIN32NATIVE_WIN32WINDOWRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE7650)
#define WIN32NATIVE_WIN32WINDOWRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF22F0)
#define WIN32NATIVE_WIN32WINDOWRECT_TOCLIENTRECT_OFFSET UNITYSDK_OFFSET(0xDF2FB0)
#define WIN32NATIVE_WIN32WINDOWRECT_TORECTINT_OFFSET UNITYSDK_OFFSET(0xDEB930)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xDF3070)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xDF3080)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xDF3090)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_TOP_OFFSET UNITYSDK_OFFSET(0xDF30A0)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xDF30B0)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xDF30C0)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xDF22E0)
#define WIN32NATIVE_WIN32WINDOWRECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDEC270)
#define WIN32NATIVE_WIN32WINDOWRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xDF30D0)
#define WIN32NATIVE_WIN32WINDOWRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xDF3100)
#define WIN32NATIVE_WIN32WINDOWRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDF3190)
#define WIN32NATIVE_WIN32WINDOWRECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDF3210)
#define WIN32NATIVE_WIN32WINDOWRECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDF3240)
#define WIN32NATIVE_WIN32WINDOWRECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDF3270)

namespace Win32Native
{
	inline static constexpr unsigned int Win32WindowRect_TypeDefinitionIndex = 10177;

	class Win32WindowRect : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(RECT* arg)
		{
			((::System::Void(*)(RECT*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Win32Native::Win32ClientRect* ToClientRect()
		{
			return ((::Win32Native::Win32ClientRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_TOCLIENTRECT_OFFSET))(nullptr);
		}

		::UnityEngine::RectInt* ToRectInt()
		{
			return ((::UnityEngine::RectInt*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_TORECTINT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* get_Position()
		{
			return ((::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2Int* get_Size()
		{
			return ((::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_Left()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Int32 get_Top()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_TOP_OFFSET))(nullptr);
		}

		::System::Int32 get_Right()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_Bottom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_BOTTOM_OFFSET))(nullptr);
		}

		::Win32Native::Win32WindowRect* get_Zero()
		{
			return ((::Win32Native::Win32WindowRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_ZERO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::Win32Native::Win32WindowRect* arg)
		{
			return ((::System::Boolean(*)(::Win32Native::Win32WindowRect*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Win32Native::Win32WindowRect* arg, ::Win32Native::Win32WindowRect* arg2)
		{
			return ((::System::Boolean(*)(::Win32Native::Win32WindowRect*, ::Win32Native::Win32WindowRect*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Win32Native::Win32WindowRect* arg, ::Win32Native::Win32WindowRect* arg2)
		{
			return ((::System::Boolean(*)(::Win32Native::Win32WindowRect*, ::Win32Native::Win32WindowRect*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32NATIVE_WIN32WINDOWRECT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

