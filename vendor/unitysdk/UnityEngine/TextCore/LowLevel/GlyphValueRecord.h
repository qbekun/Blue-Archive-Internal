#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class GlyphValueRecord; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA2AD2F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA2AD300)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0xA2AD310)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0xA2AD320)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA2AD330)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2AD350)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AD3A0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AD400)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphValueRecord_TypeDefinitionIndex = 37526;

	class GlyphValueRecord : public Il2CppObject
	{
	public:
		::System::Single m_XPlacement; // 0x10
		::System::Single m_YPlacement; // 0x14
		::System::Single m_XAdvance; // 0x18
		::System::Single m_YAdvance; // 0x1C

		::System::Single get_xPlacement()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET))(nullptr);
		}

		::System::Single get_yPlacement()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET))(nullptr);
		}

		::System::Single get_xAdvance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_XADVANCE_OFFSET))(nullptr);
		}

		::System::Single get_yAdvance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GET_YADVANCE_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::LowLevel::GlyphValueRecord* op_Addition(::UnityEngine::TextCore::LowLevel::GlyphValueRecord* arg, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord* arg)
		{
			return (return (::UnityEngine::TextCore::LowLevel::GlyphValueRecord*(*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord*, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::TextCore::LowLevel::GlyphValueRecord* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHVALUERECORD_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

