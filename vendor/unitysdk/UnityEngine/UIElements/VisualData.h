#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class Background; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class OverflowInternal; }
namespace UnityEngine::UIElements { class VisualData; }
namespace UnityEngine::UIElements { class VisualData&; }

#define UNITYENGINE_UIELEMENTS_VISUALDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA41B210)
#define UNITYENGINE_UIELEMENTS_VISUALDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA41B230)
#define UNITYENGINE_UIELEMENTS_VISUALDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA41B260)
#define UNITYENGINE_UIELEMENTS_VISUALDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41B4D0)
#define UNITYENGINE_UIELEMENTS_VISUALDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41B520)
#define UNITYENGINE_UIELEMENTS_VISUALDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA41B5D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualData_TypeDefinitionIndex = 30638;

	class VisualData : public Il2CppObject
	{
	public:
		::UnityEngine::Color* backgroundColor; // 0x10
		::UnityEngine::UIElements::Background* backgroundImage; // 0x20
		::UnityEngine::Color* borderBottomColor; // 0x40
		::UnityEngine::UIElements::Length* borderBottomLeftRadius; // 0x50
		::UnityEngine::UIElements::Length* borderBottomRightRadius; // 0x58
		::UnityEngine::Color* borderLeftColor; // 0x60
		::UnityEngine::Color* borderRightColor; // 0x70
		::UnityEngine::Color* borderTopColor; // 0x80
		::UnityEngine::UIElements::Length* borderTopLeftRadius; // 0x90
		::UnityEngine::UIElements::Length* borderTopRightRadius; // 0x98
		::System::Single opacity; // 0xA0
		::UnityEngine::UIElements::OverflowInternal* overflow; // 0xA4

		::UnityEngine::UIElements::VisualData* Copy()
		{
			return (return (::UnityEngine::UIElements::VisualData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALDATA_COPY_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::UIElements::VisualData&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::VisualData* arg, ::UnityEngine::UIElements::VisualData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualData*, ::UnityEngine::UIElements::VisualData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALDATA_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::VisualData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

