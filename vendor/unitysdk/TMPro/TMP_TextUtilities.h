#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Camera; }
namespace TMPro { class CaretPosition&; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3&; }

#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0xA180130)
#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0xA180E30)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET UNITYSDK_OFFSET(0xA181090)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET UNITYSDK_OFFSET(0xA1812C0)
#define TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA181E40)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET UNITYSDK_OFFSET(0xA182000)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET UNITYSDK_OFFSET(0xA1802F0)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET UNITYSDK_OFFSET(0xA182520)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET UNITYSDK_OFFSET(0xA182FA0)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET UNITYSDK_OFFSET(0xA184A20)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET UNITYSDK_OFFSET(0xA184BE0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET UNITYSDK_OFFSET(0xA185560)
#define TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET UNITYSDK_OFFSET(0xA181BF0)
#define TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0xA180BF0)
#define TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET UNITYSDK_OFFSET(0xA1867F0)
#define TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET UNITYSDK_OFFSET(0xA181CF0)
#define TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET UNITYSDK_OFFSET(0xA1869C0)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET UNITYSDK_OFFSET(0xA186A20)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0xA186A80)
#define TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA186AE0)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET UNITYSDK_OFFSET(0xA179D50)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET UNITYSDK_OFFSET(0xA186BE0)
#define TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET UNITYSDK_OFFSET(0xA186CF0)
#define TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET UNITYSDK_OFFSET(0xA186D20)
#define TMPRO_TMP_TEXTUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA186E50)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextUtilities_TypeDefinitionIndex = 33759;

	class TMP_TextUtilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_rectWorldCorners; // 0x0
		::System::String* k_lookupStringL; // 0x0
		::System::String* k_lookupStringU; // 0x0

		::System::Int32 GetCursorIndexFromPosition(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCursorIndexFromPosition(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg, ::TMPro::CaretPosition&* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::TMPro::CaretPosition&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindNearestLine(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindNearestCharacterOnLine(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::System::Int32 arg, ::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::System::Int32, ::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsIntersectingRectTransform(::UnityEngine::RectTransform* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindIntersectingCharacter(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindNearestCharacter(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 FindIntersectingWord(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindNearestWord(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindIntersectingLine(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindIntersectingLink(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindNearestLink(::TMPro::TMP_Text* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean PointIntersectRectangle(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ScreenPointToWorldPointInRectangle(::UnityEngine::Transform* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IntersectLinePlane(LineSegment* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Boolean(*)(LineSegment*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single DistanceToLine(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char ToLowerFast(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET))(arg, nullptr);
		}

		::System::Char ToUpperFast(::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ToUpperASCIIFast(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Int32 GetSimpleHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET))(str, nullptr);
		}

		::System::UInt32 GetSimpleHashCodeLowercase(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET))(str, nullptr);
		}

		::System::Int32 HexToInt(::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 StringHexToInt(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

