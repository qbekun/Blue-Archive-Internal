#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Align; }
namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class DisplayStyle; }
namespace UnityEngine::UIElements { class FlexDirection; }
namespace UnityEngine::UIElements { class Wrap; }
namespace UnityEngine::UIElements { class Justify; }
namespace UnityEngine::UIElements { class Position; }
namespace UnityEngine::UIElements { class LayoutData; }
namespace UnityEngine::UIElements { class LayoutData&; }

#define UNITYENGINE_UIELEMENTS_LAYOUTDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA419BB0)
#define UNITYENGINE_UIELEMENTS_LAYOUTDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA419BD0)
#define UNITYENGINE_UIELEMENTS_LAYOUTDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA419BE0)
#define UNITYENGINE_UIELEMENTS_LAYOUTDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41A040)
#define UNITYENGINE_UIELEMENTS_LAYOUTDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41A090)
#define UNITYENGINE_UIELEMENTS_LAYOUTDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA41A140)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int LayoutData_TypeDefinitionIndex = 30634;

	class LayoutData : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Align* alignContent; // 0x10
		::UnityEngine::UIElements::Align* alignItems; // 0x14
		::UnityEngine::UIElements::Align* alignSelf; // 0x18
		::System::Single borderBottomWidth; // 0x1C
		::System::Single borderLeftWidth; // 0x20
		::System::Single borderRightWidth; // 0x24
		::System::Single borderTopWidth; // 0x28
		::UnityEngine::UIElements::Length* bottom; // 0x2C
		::UnityEngine::UIElements::DisplayStyle* display; // 0x34
		::UnityEngine::UIElements::Length* flexBasis; // 0x38
		::UnityEngine::UIElements::FlexDirection* flexDirection; // 0x40
		::System::Single flexGrow; // 0x44
		::System::Single flexShrink; // 0x48
		::UnityEngine::UIElements::Wrap* flexWrap; // 0x4C
		::UnityEngine::UIElements::Length* height; // 0x50
		::UnityEngine::UIElements::Justify* justifyContent; // 0x58
		::UnityEngine::UIElements::Length* left; // 0x5C
		::UnityEngine::UIElements::Length* marginBottom; // 0x64
		::UnityEngine::UIElements::Length* marginLeft; // 0x6C
		::UnityEngine::UIElements::Length* marginRight; // 0x74
		::UnityEngine::UIElements::Length* marginTop; // 0x7C
		::UnityEngine::UIElements::Length* maxHeight; // 0x84
		::UnityEngine::UIElements::Length* maxWidth; // 0x8C
		::UnityEngine::UIElements::Length* minHeight; // 0x94
		::UnityEngine::UIElements::Length* minWidth; // 0x9C
		::UnityEngine::UIElements::Length* paddingBottom; // 0xA4
		::UnityEngine::UIElements::Length* paddingLeft; // 0xAC
		::UnityEngine::UIElements::Length* paddingRight; // 0xB4
		::UnityEngine::UIElements::Length* paddingTop; // 0xBC
		::UnityEngine::UIElements::Position* position; // 0xC4
		::UnityEngine::UIElements::Length* right; // 0xC8
		::UnityEngine::UIElements::Length* top; // 0xD0
		::UnityEngine::UIElements::Length* width; // 0xD8

		::UnityEngine::UIElements::LayoutData* Copy()
		{
			return (return (::UnityEngine::UIElements::LayoutData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LAYOUTDATA_COPY_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::UIElements::LayoutData&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::LayoutData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LAYOUTDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::LayoutData* arg, ::UnityEngine::UIElements::LayoutData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::LayoutData*, ::UnityEngine::UIElements::LayoutData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LAYOUTDATA_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::LayoutData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::LayoutData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LAYOUTDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LAYOUTDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LAYOUTDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

