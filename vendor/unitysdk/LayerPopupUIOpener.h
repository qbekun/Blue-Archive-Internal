#pragma once
#include "unitysdk.h"

class LayerButtonType;

#define LAYERPOPUPUIOPENER_SET_OPENLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x26C6310)
#define LAYERPOPUPUIOPENER_GET_OPENLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x26C6320)
#define LAYERPOPUPUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C6330)
#define LAYERPOPUPUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C68F0)

	inline static constexpr unsigned int LayerPopupUIOpener_TypeDefinitionIndex = 6983;

	class LayerPopupUIOpener : public Il2CppObject
	{
	public:
		LayerButtonType* _openLayerType_k__BackingField; // 0x18

		::System::Void set_openLayerType(LayerButtonType* arg)
		{
			((::System::Void(*)(LayerButtonType*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPUIOPENER_SET_OPENLAYERTYPE_OFFSET))(arg, nullptr);
		}

		LayerButtonType* get_openLayerType()
		{
			return ((LayerButtonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPUIOPENER_GET_OPENLAYERTYPE_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(LayerButtonType* arg)
		{
			((::System::Void(*)(LayerButtonType*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERPOPUPUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

