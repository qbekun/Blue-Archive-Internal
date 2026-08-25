#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::TextCore { class GlyphRect; }

#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_X_OFFSET UNITYSDK_OFFSET(0xA2AAB20)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_Y_OFFSET UNITYSDK_OFFSET(0xA2AAB30)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA2AAB40)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA2AAB50)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GET_ZERO_OFFSET UNITYSDK_OFFSET(0xA2AAB60)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2AABC0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2AABE0)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AAC30)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AAC90)
#define UNITYENGINE_TEXTCORE_GLYPHRECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2AAD10)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int GlyphRect_TypeDefinitionIndex = 37514;

	class GlyphRect : public Il2CppObject
	{
	public:
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C
		::UnityEngine::TextCore::GlyphRect* s_ZeroGlyphRect; // 0x0

		::System::Int32 get_x()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_X_OFFSET))(nullptr);
		}

		::System::Int32 get_y()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_Y_OFFSET))(nullptr);
		}

		::System::Int32 get_width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_HEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::GlyphRect* get_zero()
		{
			return (return (::UnityEngine::TextCore::GlyphRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GET_ZERO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::TextCore::GlyphRect* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextCore::GlyphRect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHRECT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

