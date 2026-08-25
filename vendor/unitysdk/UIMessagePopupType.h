#pragma once
#include "unitysdk.h"

namespace FlatData { class MessagePopupLayout; }
namespace FlatData { class MessagePopupImagePositionType; }
namespace UnityEngine { class GameObject; }

#define UIMESSAGEPOPUPTYPE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x277BDD0)
#define UIMESSAGEPOPUPTYPE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x277AD20)
#define UIMESSAGEPOPUPTYPE_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x277A6C0)
#define UIMESSAGEPOPUPTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x277BF10)

	inline static constexpr unsigned int UIMessagePopupType_TypeDefinitionIndex = 7362;

	class UIMessagePopupType : public Il2CppObject
	{
	public:
		::FlatData::MessagePopupLayout* LayOut; // 0x10
		::FlatData::MessagePopupImagePositionType* ImagePosition; // 0x14
		::UnityEngine::GameObject* Root; // 0x18

		::System::Void SetActive(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIMESSAGEPOPUPTYPE_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::FlatData::MessagePopupLayout* arg, ::FlatData::MessagePopupImagePositionType* arg2)
		{
			((::System::Void(*)(::FlatData::MessagePopupLayout*, ::FlatData::MessagePopupImagePositionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIMESSAGEPOPUPTYPE_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMESSAGEPOPUPTYPE_SETDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMESSAGEPOPUPTYPE_.CTOR_OFFSET))(nullptr);
		}

	};

