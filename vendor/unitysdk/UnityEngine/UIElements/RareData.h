#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Cursor; }
namespace UnityEngine::UIElements { class TextOverflow; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class ScaleMode; }
namespace UnityEngine::UIElements { class OverflowClipBox; }
namespace UnityEngine::UIElements { class TextOverflowPosition; }
namespace UnityEngine::UIElements { class RareData; }
namespace UnityEngine::UIElements { class RareData&; }

#define UNITYENGINE_UIELEMENTS_RAREDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA41A460)
#define UNITYENGINE_UIELEMENTS_RAREDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA41A490)
#define UNITYENGINE_UIELEMENTS_RAREDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA41A4C0)
#define UNITYENGINE_UIELEMENTS_RAREDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41A5B0)
#define UNITYENGINE_UIELEMENTS_RAREDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41A640)
#define UNITYENGINE_UIELEMENTS_RAREDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA41A730)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RareData_TypeDefinitionIndex = 30635;

	class RareData : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Cursor* cursor; // 0x10
		::UnityEngine::UIElements::TextOverflow* textOverflow; // 0x28
		::UnityEngine::Color* unityBackgroundImageTintColor; // 0x2C
		::UnityEngine::ScaleMode* unityBackgroundScaleMode; // 0x3C
		::UnityEngine::UIElements::OverflowClipBox* unityOverflowClipBox; // 0x40
		::System::Int32 unitySliceBottom; // 0x44
		::System::Int32 unitySliceLeft; // 0x48
		::System::Int32 unitySliceRight; // 0x4C
		::System::Int32 unitySliceTop; // 0x50
		::UnityEngine::UIElements::TextOverflowPosition* unityTextOverflowPosition; // 0x54

		::UnityEngine::UIElements::RareData* Copy()
		{
			return (return (::UnityEngine::UIElements::RareData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RAREDATA_COPY_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::UIElements::RareData&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::RareData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RAREDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::RareData* arg, ::UnityEngine::UIElements::RareData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::RareData*, ::UnityEngine::UIElements::RareData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RAREDATA_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::RareData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::RareData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RAREDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RAREDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RAREDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

