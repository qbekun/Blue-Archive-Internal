#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color32; }
namespace TMPro { class TMP_Offset; }
namespace TMPro { class HighlightState; }

#define TMPRO_HIGHLIGHTSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA120550)
#define TMPRO_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA120560)
#define TMPRO_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA1205F0)
#define TMPRO_HIGHLIGHTSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA120680)
#define TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1206E0)
#define TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA120740)

namespace TMPro
{
	inline static constexpr unsigned int HighlightState_TypeDefinitionIndex = 33633;

	class HighlightState : public Il2CppObject
	{
	public:
		::UnityEngine::Color32* color; // 0x10
		::TMPro::TMP_Offset* padding; // 0x14

		::System::Void .ctor(::UnityEngine::Color32* arg, ::TMPro::TMP_Offset* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::TMPro::TMP_Offset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::TMPro::HighlightState* arg, ::TMPro::HighlightState* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::HighlightState*, ::TMPro::HighlightState*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::TMPro::HighlightState* arg, ::TMPro::HighlightState* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::HighlightState*, ::TMPro::HighlightState*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::TMPro::HighlightState* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::HighlightState*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_HIGHLIGHTSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

