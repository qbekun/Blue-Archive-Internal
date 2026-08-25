#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectInt; }

#define UNITYENGINE_RECTINT_GET_X_OFFSET UNITYSDK_OFFSET(0xA1EF940)
#define UNITYENGINE_RECTINT_SET_X_OFFSET UNITYSDK_OFFSET(0xA1EF950)
#define UNITYENGINE_RECTINT_GET_Y_OFFSET UNITYSDK_OFFSET(0xA1EF960)
#define UNITYENGINE_RECTINT_SET_Y_OFFSET UNITYSDK_OFFSET(0xA1EF970)
#define UNITYENGINE_RECTINT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA1EF980)
#define UNITYENGINE_RECTINT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA1EF990)
#define UNITYENGINE_RECTINT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA1EF9A0)
#define UNITYENGINE_RECTINT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA1EF9B0)
#define UNITYENGINE_RECTINT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0xA1EF9C0)
#define UNITYENGINE_RECTINT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0xA1EFA20)
#define UNITYENGINE_RECTINT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0xA1EFA80)
#define UNITYENGINE_RECTINT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0xA1EFAE0)
#define UNITYENGINE_RECTINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EFB40)
#define UNITYENGINE_RECTINT_OVERLAPS_OFFSET UNITYSDK_OFFSET(0xA1EFB60)
#define UNITYENGINE_RECTINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EFDF0)
#define UNITYENGINE_RECTINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EFE00)
#define UNITYENGINE_RECTINT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1F0040)

namespace UnityEngine
{
	inline static constexpr unsigned int RectInt_TypeDefinitionIndex = 30982;

	class RectInt : public Il2CppObject
	{
	public:
		::System::Int32 m_XMin; // 0x10
		::System::Int32 m_YMin; // 0x14
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C

		::System::Int32 get_x()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_x(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_y()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_y(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_xMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_XMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_yMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_YMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_xMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_XMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_yMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_GET_YMAX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Overlaps(::UnityEngine::RectInt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_OVERLAPS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::RectInt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTINT_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

