#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color32; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_COLOR32_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21F920)
#define UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA21F940)
#define UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA21FD90)
#define UNITYENGINE_COLOR32_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA21FDE0)
#define UNITYENGINE_COLOR32_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA21FDF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Color32_TypeDefinitionIndex = 31091;

	class Color32 : public Il2CppObject
	{
	public:
		::System::Int32 rgba; // 0x10
		::System::Byte r; // 0x10
		::System::Byte g; // 0x11
		::System::Byte b; // 0x12
		::System::Byte a; // 0x13

		::System::Void .ctor(::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color32* op_Implicit(::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::Color32*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* op_Implicit(::UnityEngine::Color32* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLOR32_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

