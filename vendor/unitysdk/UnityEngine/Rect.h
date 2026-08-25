#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_RECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EEE70)
#define UNITYENGINE_RECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EEE90)
#define UNITYENGINE_RECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EEEB0)
#define UNITYENGINE_RECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA1EEEE0)
#define UNITYENGINE_RECT_MINMAXRECT_OFFSET UNITYSDK_OFFSET(0xA1EEEF0)
#define UNITYENGINE_RECT_GET_X_OFFSET UNITYSDK_OFFSET(0xA1EEF10)
#define UNITYENGINE_RECT_SET_X_OFFSET UNITYSDK_OFFSET(0xA1EEF20)
#define UNITYENGINE_RECT_GET_Y_OFFSET UNITYSDK_OFFSET(0xA1EEF30)
#define UNITYENGINE_RECT_SET_Y_OFFSET UNITYSDK_OFFSET(0xA1EEF40)
#define UNITYENGINE_RECT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA1EEF50)
#define UNITYENGINE_RECT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA1EEF60)
#define UNITYENGINE_RECT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xA1EEF70)
#define UNITYENGINE_RECT_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xA1EEFA0)
#define UNITYENGINE_RECT_GET_MIN_OFFSET UNITYSDK_OFFSET(0xA1EEFC0)
#define UNITYENGINE_RECT_SET_MIN_OFFSET UNITYSDK_OFFSET(0xA1EEFF0)
#define UNITYENGINE_RECT_GET_MAX_OFFSET UNITYSDK_OFFSET(0xA1EF050)
#define UNITYENGINE_RECT_SET_MAX_OFFSET UNITYSDK_OFFSET(0xA1EF0A0)
#define UNITYENGINE_RECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA1EF0E0)
#define UNITYENGINE_RECT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA1EF0F0)
#define UNITYENGINE_RECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA1EF100)
#define UNITYENGINE_RECT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA1EF110)
#define UNITYENGINE_RECT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1EF120)
#define UNITYENGINE_RECT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1EF130)
#define UNITYENGINE_RECT_GET_XMIN_OFFSET UNITYSDK_OFFSET(0xA1EEFD0)
#define UNITYENGINE_RECT_SET_XMIN_OFFSET UNITYSDK_OFFSET(0xA1EF010)
#define UNITYENGINE_RECT_GET_YMIN_OFFSET UNITYSDK_OFFSET(0xA1EEFE0)
#define UNITYENGINE_RECT_SET_YMIN_OFFSET UNITYSDK_OFFSET(0xA1EF030)
#define UNITYENGINE_RECT_GET_XMAX_OFFSET UNITYSDK_OFFSET(0xA1EF080)
#define UNITYENGINE_RECT_SET_XMAX_OFFSET UNITYSDK_OFFSET(0xA1EF0C0)
#define UNITYENGINE_RECT_GET_YMAX_OFFSET UNITYSDK_OFFSET(0xA1EF090)
#define UNITYENGINE_RECT_SET_YMAX_OFFSET UNITYSDK_OFFSET(0xA1EF0D0)
#define UNITYENGINE_RECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA1EF140)
#define UNITYENGINE_RECT_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA1EF180)
#define UNITYENGINE_RECT_ORDERMINMAX_OFFSET UNITYSDK_OFFSET(0xA1EF1C0)
#define UNITYENGINE_RECT_OVERLAPS_OFFSET UNITYSDK_OFFSET(0xA1EF210)
#define UNITYENGINE_RECT_OVERLAPS_OFFSET UNITYSDK_OFFSET(0xA1EF260)
#define UNITYENGINE_RECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA1EF3F0)
#define UNITYENGINE_RECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA1EF420)
#define UNITYENGINE_RECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1EF460)
#define UNITYENGINE_RECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1EF4F0)
#define UNITYENGINE_RECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1EF620)
#define UNITYENGINE_RECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EF6C0)
#define UNITYENGINE_RECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EF6D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Rect_TypeDefinitionIndex = 30981;

	class Rect : public Il2CppObject
	{
	public:
		::System::Single m_XMin; // 0x10
		::System::Single m_YMin; // 0x14
		::System::Single m_Width; // 0x18
		::System::Single m_Height; // 0x1C

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_zero()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_ZERO_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* MinMaxRect(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Rect*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_MINMAXRECT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single get_x()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_x(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Single get_y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_Y_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_position()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_center()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_min()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_MIN_OFFSET))(nullptr);
		}

		::System::Void set_min(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_MIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_max()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_MAX_OFFSET))(nullptr);
		}

		::System::Void set_max(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_MAX_OFFSET))(arg, nullptr);
		}

		::System::Single get_width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_size()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_xMin()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_XMIN_OFFSET))(nullptr);
		}

		::System::Void set_xMin(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_XMIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_yMin()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_YMIN_OFFSET))(nullptr);
		}

		::System::Void set_yMin(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_YMIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_xMax()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_XMAX_OFFSET))(nullptr);
		}

		::System::Void set_xMax(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_XMAX_OFFSET))(arg, nullptr);
		}

		::System::Single get_yMax()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GET_YMAX_OFFSET))(nullptr);
		}

		::System::Void set_yMax(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_SET_YMAX_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_CONTAINS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* OrderMinMax(::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_ORDERMINMAX_OFFSET))(arg, nullptr);
		}

		::System::Boolean Overlaps(::UnityEngine::Rect* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OVERLAPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Overlaps(::UnityEngine::Rect* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OVERLAPS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rect* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECT_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

