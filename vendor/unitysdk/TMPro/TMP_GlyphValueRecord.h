#pragma once
#include "../unitysdk.h"

namespace TMPro { class GlyphValueRecord_Legacy; }
namespace UnityEngine::TextCore::LowLevel { class GlyphValueRecord; }
namespace TMPro { class TMP_GlyphValueRecord; }

#define TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA133A40)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA133A50)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA133A60)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET UNITYSDK_OFFSET(0xA133A70)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET UNITYSDK_OFFSET(0xA133A80)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_XADVANCE_OFFSET UNITYSDK_OFFSET(0xA133A90)
#define TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET UNITYSDK_OFFSET(0xA133AA0)
#define TMPRO_TMP_GLYPHVALUERECORD_SET_YADVANCE_OFFSET UNITYSDK_OFFSET(0xA133AB0)
#define TMPRO_TMP_GLYPHVALUERECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA130DA0)
#define TMPRO_TMP_GLYPHVALUERECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA133AC0)
#define TMPRO_TMP_GLYPHVALUERECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA133AF0)
#define TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA133B40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphValueRecord_TypeDefinitionIndex = 33674;

	class TMP_GlyphValueRecord : public Il2CppObject
	{
	public:
		::System::Single m_XPlacement; // 0x10
		::System::Single m_YPlacement; // 0x14
		::System::Single m_XAdvance; // 0x18
		::System::Single m_YAdvance; // 0x1C

		::System::Single get_xPlacement()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_xPlacement(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_XPLACEMENT_OFFSET))(arg, nullptr);
		}

		::System::Single get_yPlacement()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_yPlacement(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_YPLACEMENT_OFFSET))(arg, nullptr);
		}

		::System::Single get_xAdvance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_XADVANCE_OFFSET))(nullptr);
		}

		::System::Void set_xAdvance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_XADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Single get_yAdvance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_GET_YADVANCE_OFFSET))(nullptr);
		}

		::System::Void set_yAdvance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_SET_YADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::TMPro::GlyphValueRecord_Legacy* arg)
		{
			((::System::Void(*)(::TMPro::GlyphValueRecord_Legacy*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_.CTOR_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_GlyphValueRecord* op_Addition(::TMPro::TMP_GlyphValueRecord* arg, ::TMPro::TMP_GlyphValueRecord* arg)
		{
			return (return (::TMPro::TMP_GlyphValueRecord*(*)(::TMPro::TMP_GlyphValueRecord*, ::TMPro::TMP_GlyphValueRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHVALUERECORD_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

	};
}

