#pragma once
#include "unitysdk.h"

namespace FlatData { class FurnitureFunctionType; }
namespace UnityEngine { class GameObject; }
class UIWidget;

#define FURNITUREBUBBLEOBJECTPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2262470)
#define FURNITUREBUBBLEOBJECTPAIR_GET_ICONWIDGET_OFFSET UNITYSDK_OFFSET(0x2262480)
#define FURNITUREBUBBLEOBJECTPAIR_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x22615F0)
#define FURNITUREBUBBLEOBJECTPAIR_SETWIDGETDEPTH_OFFSET UNITYSDK_OFFSET(0x22623A0)

	inline static constexpr unsigned int FurnitureBubbleObjectPair_TypeDefinitionIndex = 4577;

	class FurnitureBubbleObjectPair : public Il2CppObject
	{
	public:
		::FlatData::FurnitureFunctionType* Type; // 0x10
		::UnityEngine::GameObject* IconObject; // 0x18
		UIWidget* _IconWidget; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREBUBBLEOBJECTPAIR_.CTOR_OFFSET))(nullptr);
		}

		UIWidget* get_IconWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREBUBBLEOBJECTPAIR_GET_ICONWIDGET_OFFSET))(nullptr);
		}

		::System::Void SetActive(::FlatData::FurnitureFunctionType* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureFunctionType*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREBUBBLEOBJECTPAIR_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetWidgetDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREBUBBLEOBJECTPAIR_SETWIDGETDEPTH_OFFSET))(arg, nullptr);
		}

	};

