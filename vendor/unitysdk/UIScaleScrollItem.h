#pragma once
#include "unitysdk.h"

class UIScrollView;
namespace UnityEngine { class Vector3; }
class UIPanel;

#define UISCALESCROLLITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27CC320)
#define UISCALESCROLLITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CC8C0)
#define UISCALESCROLLITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x27CC940)

	inline static constexpr unsigned int UIScaleScrollItem_TypeDefinitionIndex = 7602;

	class UIScaleScrollItem : public Il2CppObject
	{
	public:
		Il2CppObject* childObj; // 0x18
		UIScrollView* ScrollView; // 0x20
		::System::Single MaxSize; // 0x28
		::System::Single ScaleStartDistance; // 0x2C
		::System::Single OriginSize; // 0x30
		::UnityEngine::Vector3* centerPos; // 0x34
		UIPanel* panel; // 0x40

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCALESCROLLITEM_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCALESCROLLITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCALESCROLLITEM_UPDATE_OFFSET))(nullptr);
		}

	};

