#pragma once
#include "unitysdk.h"

class UIGrid;
class UISprite;
class UILabel;
class UILayerPopupUnit;
namespace UnityEngine { class Animation; }
class LayerPopupInfo;

#define UIPOPUP_LAYER_SET_INFO_OFFSET UNITYSDK_OFFSET(0x2704B60)
#define UIPOPUP_LAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2704B80)
#define UIPOPUP_LAYER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2704C20)
#define UIPOPUP_LAYER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2704CB0)
#define UIPOPUP_LAYER_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2705160)
#define UIPOPUP_LAYER_GET_INFO_OFFSET UNITYSDK_OFFSET(0x2705450)
#define UIPOPUP_LAYER_REMOVEUNITLIST_OFFSET UNITYSDK_OFFSET(0x2705180)
#define UIPOPUP_LAYER___N__0_OFFSET UNITYSDK_OFFSET(0x2705460)

	inline static constexpr unsigned int UIPopup_Layer_TypeDefinitionIndex = 7093;

	class UIPopup_Layer : public Il2CppObject
	{
	public:
		UIGrid* titleGrid; // 0xD8
		UISprite* titleIconSprite; // 0xE0
		UILabel* titleLabel; // 0xE8
		UIGrid* unitGrid; // 0xF0
		UILayerPopupUnit* unitPrefab; // 0xF8
		::System::Int32 unitWidth_3; // 0x100
		::System::Int32 unitWidth_4; // 0x104
		::System::Int32 unitWidth_5; // 0x108
		::UnityEngine::Animation* openAnimation_Button; // 0x110
		::UnityEngine::Animation* openAnimation_BG; // 0x118
		LayerPopupInfo* _Info_k__BackingField; // 0x120
		Il2CppObject* unitList; // 0x128

		::System::Void set_Info(LayerPopupInfo* arg)
		{
			((::System::Void(*)(LayerPopupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_SET_INFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_ONCLOSED_OFFSET))(nullptr);
		}

		LayerPopupInfo* get_Info()
		{
			return ((LayerPopupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_GET_INFO_OFFSET))(nullptr);
		}

		::System::Void RemoveUnitList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_REMOVEUNITLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER___N__0_OFFSET))(nullptr);
		}

	};

